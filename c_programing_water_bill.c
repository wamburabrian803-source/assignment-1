#include <stdio.h>

// Function to calculate the electricity bill
double calculateElectricityBill(int unitsConsumed) {
    double totalBill = 0.0;

    if (unitsConsumed <= 100) {
        totalBill = unitsConsumed * 10.0; // Ksh 10 per unit for the first 100 units
    } else if (unitsConsumed <= 200) {
        totalBill = (100 * 10.0) + ((unitsConsumed - 100) * 15.0); // First 100 units at Ksh 10, next 100 at Ksh 15
    } else {
        totalBill = (100 * 10.0) + (100 * 15.0) + ((unitsConsumed - 200) * 20.0); // First 100 at Ksh 10, next 100 at Ksh 15, above 200 at Ksh 20
    }

    return totalBill;
}

/*

int main() {
    int units;
    printf("Enter the number of units consumed: ");
    scanf("%d", &units);

    double bill = calculateElectricityBill(units);
    printf("The total electricity bill is: Ksh %.2f\n", bill);

    return 0;
}
*/