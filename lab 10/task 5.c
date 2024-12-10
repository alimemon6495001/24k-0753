#include <stdio.h>

void displayElements(int size, int array[], int index)
{
    if (index == size)
    {
        return;
    }
    else
    {
        printf("Element %d: %d\n", index + 1, array[index]);
        index++;
        displayElements(size, array, index);
    }
}

int main()
{
    int size, position = 0;
    printf("Enter the length of the array: ");
    scanf("%d", &size);
    int array[size];
    for (int i = 0; i < size; i++)
    {
        printf("Input value for position %d: ", i + 1);
        scanf("%d", &array[i]);
    }
    displayElements(size, array, position);
    return 0;
}
