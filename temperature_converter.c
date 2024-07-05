#include <stdio.h>

void convert() {
    float temp;
    char unit;

    printf("Enter the temperature: ");
    scanf("%f", &temp);

    printf("Enter the unit (C/F/K): ");
    scanf(" %c", &unit);

    if (unit == 'C' || unit == 'c') {
        printf("Temperature in Fahrenheit: %.2f\n", (temp * 9 / 5) + 32);
        printf("Temperature in Kelvin: %.2f\n", temp + 273.15);
    } else if (unit == 'F' || unit == 'f') {
        printf("Temperature in Celsius: %.2f\n", (temp - 32) * 5 / 9);
        printf("Temperature in Kelvin: %.2f\n", (temp - 32) * 5 / 9 + 273.15);
    } else if (unit == 'K' || unit == 'k') {
        printf("Temperature in Celsius: %.2f\n", temp - 273.15);
        printf("Temperature in Fahrenheit: %.2f\n", (temp - 273.15) * 9 / 5 + 32);
    } else {
        printf("Invalid unit\n");
    }
}

int main() {
    convert();
    while (1) {
        printf("Do you want to convert temperature again? (y/n): ");
        char ch;
        scanf(" %c", &ch);
        if (ch == 'y') {
            convert();
        } else {
            break;
        }
    }

    return 0;
}
