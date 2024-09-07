// fracturing.c
// Author: Dhruv Tejusinghani (5581223)
// Date: 9-1-24
// Class: COP 3223, Professor Parra
// Purpose: In this assignment, you will write a program that will house many internal
// functions. Instead of typing everything within main(), you will create functions
// with different responsibilities to start ”fracturing” your code.
// Input: Various points of values, (X,Y)
// Output: Area, Perimeter, Width, Height, Distance among the two points

#include <stdio.h>
#include <math.h>

// Sets Pi as a defined Value
#define PI 3.14159

// Asks for User Input and returns a double
double askForUserInput() {
    double value;
    scanf("%lf", &value);
    return value;
}

// Calculates distance between two points
double calculateDistance() {
    static double distance = -1; // implements static variable to store distance

    if (distance != -1) {
        return distance;
    }

    double x1, y1, x2, y2;
    
    // User Input Point 1
    printf("Enter x1: ");
    x1 = askForUserInput();
    printf("Enter y1: ");
    y1 = askForUserInput();

    // User Input Point 2
    printf("Enter x2: ");
    x2 = askForUserInput();
    printf("Enter y2: ");
    y2 = askForUserInput();

    // Defines distance formula and calculates distance
    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    // Outputs the distance after being calculated
    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2);
    printf("The distance between the two points is %.2f\n", distance);

    return distance;
}

// Calculates Perimeter of Circle
double calculatePerimeter() {
    double radius = calculateDistance();
    double perimeter = 2 * PI * radius;

    // Outputs the solved perimeter
    printf("The perimeter of the city encompassed by your request is %.2f\n", perimeter);

    return 2.0;
}

// Calculates Area of the Circle
double calculateArea() {
    double radius = calculateDistance();
    double area = PI * pow(radius, 2);

    // Outputs the Area
    printf("The area of the city encompassed by your request is %.2f\n", area);

    return 3.0; // Example difficulty, can be adjusted as needed
}

// Calculates the width of the city
double calculateWidth() {
    double radius = calculateDistance();
    double width = 2 * radius;

    // Outputs the Width of the City
    printf("The width of the city encompassed by your request is %.2f\n", width);

    return 1.5;
}

// Calculates height of the Circle
double calculateHeight() {
    double radius = calculateDistance(); // Use the stored distance value
    double height = 2 * radius; // Height is simply the diameter for a circle

    // Outputs the height
    printf("The height of the city encompassed by your request is %.2f\n", height);

    return 1.5; // Example difficulty, can be adjusted as needed
}

// Establishes the main function
int main(int argc, char **argv) {
    // Illustrates and establishes the use of the functions
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();

    return 1;
}