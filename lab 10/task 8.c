#include <stdio.h>
#include <string.h>

#define MAX_CARS 100

struct carDetails
{
    char brand[100];
    char type[100];
    int year;
    int cost;
    int distanceCovered;
};

void addVehicle(struct carDetails cars[], int *totalCars);
void findCar(struct carDetails cars[], int totalCars);
void showAllCars(struct carDetails cars[], int totalCars);

int main()
{
    struct carDetails cars[MAX_CARS];
    int choice;
    int totalCars = 0;

    while (1)
    {
        printf("\nCar Inventory Menu\n");
        printf("1: Add New Vehicle\n");
        printf("2: Search for a Vehicle\n");
        printf("3: Show All Vehicles\n");
        printf("4: Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();

        switch (choice)
        {
        case 1:
            addVehicle(cars, &totalCars);
            break;
        case 2:
            findCar(cars, totalCars);
            break;
        case 3:
            showAllCars(cars, totalCars);
            break;
        case 4:
            printf("Exiting program. Goodbye!\n");
            return 0;
        default:
            printf("Invalid choice. Please try again.\n");
        }
    }
}

void addVehicle(struct carDetails cars[], int *totalCars)
{
    if (*totalCars >= MAX_CARS)
    {
        printf("Cannot add more vehicles. Maximum limit reached.\n");
        return;
    }

    struct carDetails *newCar = &cars[*totalCars];

    printf("Enter brand: ");
    fgets(newCar->brand, 100, stdin);
    newCar->brand[strcspn(newCar->brand, "\n")] = '\0';

    printf("Enter type: ");
    fgets(newCar->type, 100, stdin);
    newCar->type[strcspn(newCar->type, "\n")] = '\0';

    printf("Enter year: ");
    scanf("%d", &newCar->year);

    printf("Enter cost: ");
    scanf("%d", &newCar->cost);

    printf("Enter distance covered (in km): ");
    scanf("%d", &newCar->distanceCovered);

    (*totalCars)++;
    printf("Vehicle added successfully.\n");
    getchar();
}

void findCar(struct carDetails cars[], int totalCars)
{
    if (totalCars == 0)
    {
        printf("No vehicles available in the inventory.\n");
        return;
    }

    char searchQuery[100];
    printf("Enter the brand or type to search: ");
    fgets(searchQuery, 100, stdin);
    searchQuery[strcspn(searchQuery, "\n")] = '\0';

    int found = 0;
    for (int i = 0; i < totalCars; i++)
    {
        if (strcmp(cars[i].brand, searchQuery) == 0 || strcmp(cars[i].type, searchQuery) == 0)
        {
            printf("\nBrand: %s\n", cars[i].brand);
            printf("Type: %s\n", cars[i].type);
            printf("Year: %d\n", cars[i].year);
            printf("Cost: %d\n", cars[i].cost);
            printf("Distance Covered: %d km\n", cars[i].distanceCovered);
            found = 1;
        }
    }

    if (!found)
    {
        printf("No vehicle found with brand/type: %s\n", searchQuery);
    }
}

void showAllCars(struct carDetails cars[], int totalCars)
{
    if (totalCars == 0)
    {
        printf("No vehicles available in the inventory.\n");
        return;
    }

    printf("\nDisplaying All Vehicles:\n");
    for (int i = 0; i < totalCars; i++)
    {
        printf("\nBrand: %s\n", cars[i].brand);
        printf("Type: %s\n", cars[i].type);
        printf("Year: %d\n", cars[i].year);
        printf("Cost: %d\n", cars[i].cost);
        printf("Distance Covered: %d km\n", cars[i].distanceCovered);
    }
}
