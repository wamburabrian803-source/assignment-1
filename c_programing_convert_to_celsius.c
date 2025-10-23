#include <stdio.h>

/**
  Converts to celsius
 */
double convert_to_celsius(double fahrenheit) {
    return (fahrenheit - 32.0) * 5.0 / 9.0;
}

int main() {
    double fahrenheit_temp = 72.0;
    double celsius_temp = convert_to_celsius(fahrenheit_temp);

    printf("%.2f degrees Fahrenheit is equal to %.2f degrees Celsius.\n", fahrenheit_temp, celsius_temp);

    return 0;
}
