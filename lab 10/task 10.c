#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char packageName[50];
    char destination[50];
    int duration;
    double cost;
    int seats;
} TravelPackage;

void displayPackage(TravelPackage packages[], int size)
{
    printf("\nAvailable Travel Packages:\n");
    printf("--------------------------------------------------------------------------------\n");
    printf("Package Name\t\tDestination\tDuration\tCost\t\tSeats\n");
    printf("--------------------------------------------------------------------------------\n");
    for (int i = 0; i < size; i++)
    {
        if (packages[i].seats > 0)
        {
            printf("%s\t\t%s\t\t%d\t\t%.2f USD\t%d\n",
                   packages[i].packageName, packages[i].destination,
                   packages[i].duration, packages[i].cost, packages[i].seats);
        }
    }
    printf("---------------------------------------------------------------------------------\n");
}

void bookPackage(TravelPackage packages[], int size)
{
    char packageName[50];
    printf("\nEnter the name of the package you want to book: ");
    getchar();
    fgets(packageName, 50, stdin);
    packageName[strcspn(packageName, "\n")] = '\0';

    for (int i = 0; i < size; i++)
    {
        if (strcmp(packages[i].packageName, packageName) == 0)
        {
            if (packages[i].seats > 0)
            {
                packages[i].seats--;
                printf("Booking successful! Remaining seats for '%s': %d\n", packages[i].packageName, packages[i].seats);
                return;
            }
            else
            {
                printf("Sorry, no seats are available for '%s'.\n", packageName);
                return;
            }
        }
    }
    printf("Package '%s' not found.\n", packageName);
}

int main()
{
    TravelPackage packages[] = {
        {"Beach Paradise", "Hawaii", 7, 1500.00, 5},
        {"City Explorer", "Kashmir", 3, 800.00, 10},
        {"Radiant Trails", "Gawadar", 5, 1200.00, 2},
        {"Desert Safari", "Dubai", 4, 1000.00, 8}};

    int size = sizeof(packages) / sizeof(packages[0]);
    int choice;

    do
    {
        printf("\nTravel Package Booking System\n");
        printf("1. Display Available Packages\n");
        printf("2. Book a Package\n");
        printf("3. Exit\n");
        printf("Enter a choice: ");

        if (scanf("%d", &choice) != 1)
        {
            printf("Invalid input. Please enter a valid number.\n");
            while (getchar() != '\n')
                ;
            continue;
        }

        switch (choice)
        {
        case 1:
            displayPackage(packages, size);
            break;
        case 2:
            bookPackage(packages, size);
            break;
        case 3:
            printf("Thank you for using the Travel Package Booking System.\n");
            break;
        default:
            printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 3);

    return 0;
}
