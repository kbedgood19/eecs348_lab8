
#include "temp_conv.h"
#include <stdio.h>

void temp_conv(){
    float temp, converted;
    char from, to;

    while (1) {
        printf("Enter the temperature value: ");
        if (scanf("%f", &temp) == 1) {break;}
        printf("Invalid input! Please enter a number.\n");
        while (getchar() != '\n'); 
    }


    while (1) {
        printf("Enter the original scale (C, F, or K): ");
        scanf(" %c", &from);
        if (from == 'C' || from == 'c' || from == 'F' || from == 'f' || from == 'K' || from == 'k')
           { break;}
        printf("Invalid entry. Please enter C, F, or K.\n");
    }


    while (1) {
        printf("Enter the scale to convert to (C, F, or K): ");
        scanf(" %c", &to);
        if (to == 'C' || to == 'c' || to == 'F' || to == 'f' || to == 'K' || to == 'k')
            break;
        printf("Invalid entry. Please enter C, F, or K.\n");
    }

    
    float celsius;
    if (from == 'C' || from == 'c')
        {celsius = temp;}
    else if (from == 'F' || from == 'f')
        {celsius = (temp - 32) * 5.0 / 9.0;}
    else
        {celsius = temp - 273.15;}
   
    if (to == 'C' || to == 'c')
        {converted = celsius;}
    else if (to == 'F' || to == 'f')
        {converted = celsius * 9.0 / 5.0 + 32;}
    else 
        {converted = celsius + 273.15;}
   

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