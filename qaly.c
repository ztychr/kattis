#include <stdio.h>

int main() {

    int periods;
    float quality, duration, totalQuality = 0;

    scanf("%d", &periods);

    for (int i = 1; i <= periods; i++) {

        scanf("%f %f", &quality, &duration);
        totalQuality += duration * quality;
        
    }

    printf("%.3f\n", totalQuality);

    return 0;   
}