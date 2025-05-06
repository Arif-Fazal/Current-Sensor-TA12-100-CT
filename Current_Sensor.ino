#define CT_SENSOR_PIN A0  // Analog pin for CT sensor

const float calibration_factor = 0.08 / 0.44;  // Adjust based on actual vs. measured values
const int num_samples = 1000; // Number of readings for averaging
const float VREF = 5.0; // Arduino Mega 2560 reference voltage
const int ADC_RESOLUTION = 1024; // 10-bit ADC (0-1023)
const float max_sensor_voltage = 1.0; // Max sensor output voltage at 5A
const float max_sensor_current = 5.0; // Max measurable current (5A)

void setup() {
    Serial.begin(115200);
}

void loop() {
    float sum = 0;

    // Take multiple samples for accuracy
    for (int i = 0; i < num_samples; i++) {
        int adc_value = analogRead(CT_SENSOR_PIN);
        float voltage = (adc_value * VREF) / ADC_RESOLUTION;
        float current = (voltage / max_sensor_voltage) * max_sensor_current; // Convert voltage to current
        sum += current * current; // Square sum for RMS calculation
    }

    // Calculate RMS current
    float rms_current = sqrt(sum / num_samples) * calibration_factor;

    // Print the result
    Serial.print("Calibrated Current (RMS): ");
    Serial.print(rms_current, 3);
    Serial.println(" A");

    delay(1000); // Delay for stability
}
