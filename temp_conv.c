
#include "temp_conv.h"
#include <stdio.h>

void temp_conv(){
        float temp, converted;
    char from, to;

    printf("Enter the temperature value: ");
    if (scanf("%f", &temp) != 1) {
        printf("Invalid input! Please enter a number.\n");
        while (getchar() != '\n'); 
        return;
    }

    printf("Enter the original scale (C, F, or K): ");
    scanf(" %c", &from);
    printf("Enter the scale to convert to (C, F, or K): ");
    scanf(" %c", &to);

    
    float celsius;
    if (from == 'C' || from == 'c')
        celsius = temp;
    else if (from == 'F' || from == 'f')
        celsius = (temp - 32) * 5.0 / 9.0;
    else if (from == 'K' || from == 'k')
        celsius = temp - 273.15;
    else {
        printf("Invalid original scale! Must be C, F, or K.\n");
        return;
    }

   
    if (to == 'C' || to == 'c')
        converted = celsius;
    else if (to == 'F' || to == 'f')
        converted = celsius * 9.0 / 5.0 + 32;
    else if (to == 'K' || to == 'k')
        converted = celsius + 273.15;
    else {
        printf("Invalid target scale! Must be C, F, or K.\n");
        return;
    }

   
    const char *category;
    const char *advice;

    if (celsius < 0) {
        category = "Freezing";
        advice = "Stay warm and wear lots of layers!";
    } else if (celsius < 10) {
        category = "Cold";
        advice = "Wear a jacket.";
    } else if (celsius < 25) {
        category = "Comfortable";
        advice = "Perfect weather!";
    } else if (celsius < 35) {
        category = "Hot";
        advice = "Drink lots of water!";
    } else {
        category = "Extreme Heat";
        advice = "Stay indoors and avoid heat exposure!";
    }

    
    printf("\nConverted temperature: %.2f %c\n", converted, to);
    printf("Temperature category: %s\n", category);
    printf("Weather advisory: %s\n\n", advice);
}