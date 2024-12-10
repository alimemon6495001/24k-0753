#include <stdio.h>

int digitSum(int n)
{
    int sum = 0;
    if (n <= 0)
    {
        return sum;
    }
    else
    {
        sum = n % 10;
        return sum + digitSum(n / 10);
    }
}

int main()
{
    int number;
    printf("Please enter a number: ");
    scanf("%d", &number);

    int total = digitSum(number);

    printf("The total of the digits is: %d\n", total);

    return 0;
}
