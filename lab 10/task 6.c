#include <stdio.h>

#define MAX_LIMIT 30.0

void monitorTemp(float temp)
{
    static int count = 0;
    if (temp > MAX_LIMIT)
    {
        count++;
        printf("Warning! Temperature %.1fÂ°C exceeds the threshold.\n", temp);
        printf("Total exceedances recorded: %d\n", count);
    }
    else
    {
        printf("Temperature %.1fÂ°C is within the safe range.\n", temp);
    }
}

int main()
{
    float temp;
    char repeat;
    do
    {
        printf("Input the temperature in Celsius: ");
        scanf("%f", &temp);
        monitorTemp(temp);
        printf("Would you like to input another reading? (Y/N): ");
        scanf(" %c", &repeat);
    } while (repeat == 'y' || repeat == 'Y');
    printf("\nTemperature monitoring session ended.\n");
    return 0;
}
