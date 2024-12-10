#include <stdio.h>
#include <string.h>

#define MAX_FILMS 100

struct Film
{
    char name[100];
    char creator[100];
    char category[100];
    int year;
    float score;
};

void addFilm(struct Film library[], int *total)
{
    if (*total >= MAX_FILMS)
    {
        printf("The film database is full. Unable to add more films.\n");
        return;
    }
    struct Film *newFilm = &library[*total];
    printf("Enter film name: ");
    fgets(newFilm->name, 100, stdin);
    newFilm->name[strlen(newFilm->name) - 1] = '\0';
    printf("Enter category: ");
    fgets(newFilm->category, 100, stdin);
    newFilm->category[strlen(newFilm->category) - 1] = '\0';
    printf("Enter creator's name: ");
    fgets(newFilm->creator, 100, stdin);
    newFilm->creator[strlen(newFilm->creator) - 1] = '\0';
    printf("Enter release year: ");
    scanf("%d", &newFilm->year);
    printf("Enter film rating (0.0 to 10.0): ");
    scanf("%f", &newFilm->score);
    (*total)++;
    printf("Film added successfully!\n");
    getchar();
}

void findFilmByCategory(struct Film library[], int total)
{
    if (total == 0)
    {
        printf("No films available in the database.\n");
        return;
    }
    char category[100];
    printf("Enter category to search: ");
    fgets(category, 100, stdin);
    category[strlen(category) - 1] = '\0';
    int matched = 0;
    for (int i = 0; i < total; i++)
    {
        if (strcmp(library[i].category, category) == 0)
        {
            printf("Name        : %s\n", library[i].name);
            printf("Creator     : %s\n", library[i].creator);
            printf("Category    : %s\n", library[i].category);
            printf("Year        : %d\n", library[i].year);
            printf("Rating      : %.1f\n", library[i].score);
            matched = 1;
        }
    }
    if (!matched)
        printf("No films found in the category: %s\n", category);
}

void listFilms(struct Film library[], int total)
{
    if (total == 0)
    {
        printf("No films available in the database.\n");
        return;
    }
    for (int i = 0; i < total; i++)
    {
        printf("Name        : %s\n", library[i].name);
        printf("Creator     : %s\n", library[i].creator);
        printf("Category    : %s\n", library[i].category);
        printf("Year        : %d\n", library[i].year);
        printf("Rating      : %.1f\n", library[i].score);
    }
}

int main()
{
    struct Film library[MAX_FILMS];
    int total = 0;
    int option;
    while (1)
    {
        printf("\n--- Film Library Menu ---\n");
        printf("1. Show all films\n");
        printf("2. Add a film\n");
        printf("3. Search films by category\n");
        printf("4. Quit\n");
        printf("Choose an option: ");
        scanf("%d", &option);
        getchar();
        switch (option)
        {
        case 1:
            listFilms(library, total);
            break;
        case 2:
            addFilm(library, &total);
            break;
        case 3:
            findFilmByCategory(library, total);
            break;
        case 4:
            printf("Exiting the program. Goodbye!\n");
            return 0;
        default:
            printf("Invalid input. Please select again.\n");
            break;
        }
    }
}
