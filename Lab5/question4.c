#include <stdio.h>
int main()
{
    int age;
    char citizen;
    printf("age\n");
    scanf("%d",&age);
    printf("enter your citizen\n");
    scanf(" %c",&citizen);
   
    if (age>=18 && citizen == 'p')
    // p stands for pakistan
    printf("person eligible for vote");
    else
    printf("person not eligible for vote");
    return 0;
}