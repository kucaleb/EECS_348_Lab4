#include <stdio.h>

float celcius_to_fahrenheit(float celcius) { // a function that converts celcius to fahrenheit
    return ((9.0 / 5) * celcius) + 32;
}

float celcius_to_kelvin(float celcius) { // a function that converts celcius to kelvin
    return celcius + 273.15;
}

float fahrenheit_to_celsius(float fahrenheit) { // a function that converts fahrenheit to celcius
    return (fahrenheit - 32) * (5.0 / 9);
}

float kelvin_to_celcius(float kelvin) { // a function that converts kelvin to celcius
    return kelvin - 273.15;
}

void catagorize_temperature(float celcius) { // prints out the temperature catagory and weather advisory
    if (celcius < 0) {
        printf("Temperature Catagory: Freezing\nWeather Advisory: Wear a coat!");
    } else if (celcius < 10) {
        printf("Temperature Catagory: Cold\nWeather Advisory: Wear a jacket.");
    } else if (celcius < 25) {
        printf("Temperature Catagory: Comfortable\nWeather Advisory: Perfectly nice");
    } else if (celcius < 35) {
        printf("Temperature Catagory: Hot\nWeather Advisory: Decently warm");
    } else {
        printf("Temperature Catagory: Extreme Heat\nWeather Advisory: It's too hot!");
    }
}


int main() {
    float temp, unit, convert; // creates variables

    printf("Enter the temperature: "); // sets temp equal to the user input
    scanf("%f", &temp);

    printf("Enter the current scale (1) Celcius, (2) Fahrenheit, (3) Kelvin: "); // sets unit equal to the user input
    scanf("%f", &unit);

    printf("Convert to (1) Celcius, (2) Fahrenheit, (3) Kelvin: "); // sets convert equal to the user input
    scanf("%f", &convert);

    if (unit == 1) {
        if (convert == 2) { // celcius to fahrenheit
            printf("Converted Temperature: %.2f%c\n", celcius_to_fahrenheit(temp), convert);
        } else if (convert == 3) { // celcius to kelvin
            printf("Converted Temperature: %.2f%c\n", celcius_to_kelvin(temp), convert);
        } else { // The convert variable is invalid
            printf("Not a valid convert\n");
            return main();
        }
        catagorize_temperature(temp);
    } else if (unit == 3) {
        if (temp < 0) { //checks if kelvin temp is less than zero
            printf("Not a valid temp");
            return main();
        }
        temp = kelvin_to_celcius(temp);
        if (convert == 1) { // kelvin to celcius
            printf("Converted Temperature: %.2f%c\n", temp, convert);
        } else if (convert == 2) { // kelvin to fahrenheit
            printf("Converted Temperature : %.2f%c\n", celcius_to_fahrenheit(temp));
        } else { // The convert variable is invalid
            printf("Not a valid convert\n"); 
            return main();
        }
        catagorize_temperature(temp);
    } else if (unit == 2) {
        temp = fahrenheit_to_celsius(temp);
        if (convert == 1) { // fahrenheit to celcius
            printf("Converted Temperature: %.2f%c\n", temp, convert);
        } else if (convert == 3) { // fahrenheit to kelvin
            printf("Converted Temperature: %.2f%c\n", celcius_to_kelvin(temp), convert);
        } else { // The convert variable is invalid
            printf("Not a valid convert\n"); 
            return main();
        }
        catagorize_temperature(temp);
    } else { // The unit variable is invalid
        printf("Not a valid unit\n");
        return main();
    }
}