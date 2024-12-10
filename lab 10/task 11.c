#include <stdio.h>

#define METER_TO_KM 0.001

double convertToKilometers(double meters)
{
    return meters * METER_TO_KM;
}

int main()
{
    int times;
    double distance;
    static int functionCalls = 0;

    printf("How many conversions from meters to kilometers: ");
    scanf("%d", &times);

    do
    {
        printf("Enter the distance in meters: ");
        scanf("%lf", &distance);
        printf("Converted distance in kilometers: %.2lf\n", convertToKilometers(distance));
        functionCalls++;
        times--;
    } while (times != 0);

    printf("Total number of function calls: %d", functionCalls);

    return 0;
}
