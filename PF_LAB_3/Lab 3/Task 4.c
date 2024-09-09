#include stdio.h
int main() {
    float fuel_average, total_fuel, forward_fuel, return_fuel;
    float forward_cost, return_cost, total_cost;

     Input fuel average (with validation)
    do {
        printf(Enter car's fuel average (kmliter) );
        scanf(%f, &fuel_average);
        if (fuel_average = 0) {
            printf(Invalid input! Fuel average must be positive.n);
        }
    } while (fuel_average = 0);

     Calculate fuel consumed for each trip
    forward_fuel = 1207  fuel_average;
    return_fuel = 1207  fuel_average;
    total_fuel = forward_fuel + return_fuel;

     Calculate fuel cost for each trip
    forward_cost = forward_fuel  118;
    return_cost = return_fuel  123;
    total_cost = forward_cost + return_cost;

     Display results
    printf(Total fuel consumed (round trip) %.1f litersn, total_fuel);
    printf(Total fuel cost (round trip) %.1f rupeesn, total_cost);

    return 0;
}