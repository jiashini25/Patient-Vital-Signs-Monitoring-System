
#include <stdio.h>

int main() {
    int heartRate, spo2;

    printf("PATIENT VITAL SIGNS MONITORING SYSTEM\n");

    printf("Enter Heart Rate (bpm): ");
    scanf("%d", &heartRate);

    printf("Enter SpO2 Level (%%): ");
    scanf("%d", &spo2);

    printf("\n--- Patient Report ---\n");
    printf("Heart Rate: %d bpm\n", heartRate);
    printf("SpO2 Level: %d%%\n", spo2);

    if (heartRate < 60 || heartRate > 100) {
        printf("Heart Rate: Outside the configured range\n");
    } else {
        printf("Heart Rate: Within the configured range\n");
    }

    if (spo2 < 95 || spo2 > 100) {
        printf("SpO2: Outside the configured range\n");
    } else {
        printf("SpO2: Within the configured range\n");
    }

    return 0;
}
