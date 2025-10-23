#include <stdio.h>

// Function to calculate the total fare
double calculateFare(double distanceKm) {
    const double fareRatePerKm = 50.0; // Fare rate in KSH per kilometer
    double totalFare = distanceKm * fareRatePerKm;
    return totalFare;
}


int main() {
    double distance1 = 10.5;
    double fare1 = calculateFare(distance1);
    printf("For a distance of %.2f km, the total fare is %.2f KSH.\n", distance1, fare1);

    double distance2 = 5.0;
    double fare2 = calculateFare(distance2);
    printf("For a distance of %.2f km, the total fare is %.2f KSH.\n", distance2, fare2);

    return 0;
}