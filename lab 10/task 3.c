#include <stdio.h>
#include <string.h>

struct FlightInfo
{
    int flightNo;
    char fromCity[20];
    char toCity[20];
    char travelDate[15];
    int seatsAvailable;
};

void showFlight(struct FlightInfo info)
{
    printf("\n--- Flight Information ---\n");
    printf("Flight Number      : %d\n", info.flightNo);
    printf("Departure City     : %s\n", info.fromCity);
    printf("Destination City   : %s\n", info.toCity);
    printf("Travel Date        : %s\n", info.travelDate);
    printf("Seats Available    : %d\n", info.seatsAvailable);
}

void reserveSeat(struct FlightInfo *info)
{
    if (info->seatsAvailable <= 0)
    {
        printf("No seats left for this flight.\n");
    }
    else
    {
        info->seatsAvailable--;
        printf("Seat reserved! Remaining seats: %d\n", info->seatsAvailable);
    }
}

void getFlightDetails(struct FlightInfo *info)
{
    printf("Enter Flight Number: ");
    scanf("%d", &info->flightNo);
    printf("Enter Departure City: ");
    scanf("%s", info->fromCity);
    printf("Enter Destination City: ");
    scanf("%s", info->toCity);
    printf("Enter Travel Date (YYYY-MM-DD): ");
    scanf("%s", info->travelDate);
    printf("Enter Number of Available Seats: ");
    scanf("%d", &info->seatsAvailable);
}

int main()
{
    struct FlightInfo info;
    int option;
    while (1)
    {
        printf("\n=== Flight Booking System ===\n");
        printf("1. Show Flight Details\n");
        printf("2. Reserve a Seat\n");
        printf("3. Quit\n");
        printf("Your option: ");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            showFlight(info);
            break;
        case 2:
            printf("\n--- Input Flight Details ---\n");
            getFlightDetails(&info);
            reserveSeat(&info);
            break;
        case 3:
            printf("Goodbye!\n");
            return 0;
        default:
            printf("Invalid input. Try again.\n");
        }
    }
    return 0;
}
