#include <stdio.h>
#include <math.h>

typedef struct
{
    double a;
    double b;
} Coordinates;

double computeDistance(Coordinates c1, Coordinates c2)
{
    return sqrt((c2.a - c1.a) * (c2.a - c1.a) + (c2.b - c1.b) * (c2.b - c1.b));
}

int isWithinRectangle(Coordinates p, double x1, double y1, double x2, double y2)
{
    return (p.a >= x1 && p.a <= x2 && p.b >= y1 && p.b <= y2);
}

int main()
{
    Coordinates point1 = {2.0, 3.0};
    Coordinates point2 = {5.0, 7.0};
    double dist = computeDistance(point1, point2);
    printf("The distance between the points is: %.2f\n", dist);

    double x1 = 1.0, y1 = 2.0, x2 = 6.0, y2 = 8.0;
    if (isWithinRectangle(point1, x1, y1, x2, y2))
    {
        printf("Point (%.2f, %.2f) is inside the rectangle.\n", point1.a, point1.b);
    }
    else
    {
        printf("Point (%.2f, %.2f) is outside the rectangle.\n", point1.a, point1.b);
    }

    return 0;
}
