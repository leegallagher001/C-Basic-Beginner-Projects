// Simple Geometry Calculator in C //
/* A program that allows a user to calculate the area/volume of a small selection of basic 2D & 3D shapes */

#include <stdio.h>

// ----- 2D SHAPES ----- //

// Main Menu //

int Shapes2D() {

   int selection2D; // declares the 2D shapes menu selection variable as an integer

   printf("-- 2D SHAPES - CHOOSE A SHAPE --\n\n");
   printf("1. Square\n");
   printf("2. Rectangle\n");
   printf("3. Triangle\n");
   printf("4. Circle\n");
   printf("5. Hexagon\n");
   printf("6. Octagon\n");
   printf("7. Back To Main Menu\n\n");

   printf("Choose Your Shape: ");
   scanf("%d", &selection2D);

   if (selection2D == 1) {
       printf("\n\n");
       Square();
   } else if (selection2D == 2) {
       printf("\n\n");
       Rectangle();
   } else if (selection2D == 3) {
       printf("\n\n");
       Triangle();
   } else if (selection2D == 4) {
       printf("\n\n");
       Circle();
   } else if (selection2D == 5) {
       printf("\n\n");
       // Hexagon();
   } else if (selection2D == 6) {
       printf("\n");
       // Octagon();
   } else if (selection2D == 7) {
       printf("\n\n");
       main();
   } else {
       printf("\n\n");
       printf("Invalid Selection. Please Try Again: ");
       scanf("%d", &selection2D);
   }

}

int Square() {

    float squareSide;

    printf("Square Side Length: ");
    scanf("%f", &squareSide);

    printf("\n\n");
    float squareArea = squareSide * squareSide;
    printf("Square Area: %.2f", squareArea);

    printf("1. Calculate Another Square\n");
    printf("2. Back To 2D Shapes\n\n");

    int squareSelection;
    printf("Enter Your Selection: ");
    scanf("%d", &squareSelection);

    if (squareSelection == 1) {
        printf("\n\n");
        Square();
    } else if (squareSelection == 2) {
        printf("\n\n");
        Shapes2D();
    } else {
        printf("\n\n");
        printf("Invalid Selection. Please Try Again: ");
        scanf("%d", &squareSelection);
    }

}

int Rectangle() {

    float rectangleLength;
    float rectangleWidth;

    printf("Rectangle Length: ");
    scanf("%f", &rectangleLength);
    printf("\n");
    printf("Rectangle Width: ");
    scanf("%f", &rectangleWidth);

    printf("\n\n");
    float rectangleArea = rectangleLength * rectangleWidth;
    printf("Rectangle Area: %.2f\n\n", rectangleArea);

    printf("1. Calculate Another Rectangle\n");
    printf("2. Back To 2D Shapes\n\n");

    int rectangleSelection;
    printf("Enter Your Selection: ");
    scanf("%d", &rectangleSelection);

    if (rectangleSelection == 1) {
        printf("\n\n");
        Rectangle();
    }  else if (rectangleSelection == 2) {
        printf("\n\n");
        Shapes2D();
    }  else {
        printf("\n\n");
        printf("Invalid Selection. Please Try Again: ");
        scanf("%d", &rectangleSelection);
    }

}

int Triangle() {

    float triangleBase;
    float triangleHeight;

    printf("Triangle Base: ");
    scanf("%f", &triangleBase);
    printf("\n\n");
    printf("Triangle Height: ");
    scanf("%f", &triangleHeight);

    printf("\n\n");
    float triangleArea = 0.5 * triangleBase * triangleHeight;
    printf("Triangle Area: %.2f\n\n", triangleArea);

    printf("1. Calculate Another Triangle\n");
    printf("2. Back To 2D Shapes\n\n");

    int triangleSelection;
    printf("Enter Your Selection: ");
    scanf("%d", &triangleSelection);

    if (triangleSelection == 1) {
        printf("\n\n");
        Triangle();
    }  else if (triangleSelection == 2) {
        printf("\n\n");
        Shapes2D();
    }  else {
        printf("\n\n");
        printf("Invalid Selection. Please Try Again: ");
        scanf("%d", &triangleSelection);
    }
}

int Circle() {
    float pi = 3.14;
    float circleRadius;

    printf("Circle Radius: ");
    scanf("%f", &circleRadius);

    printf("\n\n");
    float circleArea = pi * (circleRadius * circleRadius);
    printf("Circle Area: %.2f\n\n", circleArea);

    printf("1. Calculate Another Circle\n");
    printf("2. Back To 2D Shapes\n\n");

    int circleSelection;
    printf("Enter Your Selection: ");
    scanf("%d", &circleSelection);

    if (circleSelection == 1) {
        printf("\n\n");
        Circle();
    }  else if (circleSelection == 2) {
        printf("\n\n");
        Shapes2D();
    }  else {
        printf("\n\n");
        printf("Invalid Selection. Please Try Again: ");
        scanf("%d", &circleSelection);
    }
}

// ----- 3D Shapes ----- //

// Main Menu //

int Shapes3D() {

    int selection3D; // declares the 3D shapes menu selection variable as an integer

    printf("-- 3D SHAPES - CHOOSE A SHAPE --\n\n");
    printf("1. Cube\n");
    printf("2. Cuboid\n");
    printf("3. Square Pyramid\n");
    printf("4. Cone\n");
    printf("5. Sphere\n");
    printf("6. Cylinder\n");
    printf("7. Back To Main Menu\n\n");

    printf("Choose Your Shape: ");
    scanf("%d", &selection3D);

    if (selection3D == 1) {
        printf("\n\n");
        Cube();
    } else if (selection3D == 2) {
        printf("\n\n");
        // Cuboid();
    } else if (selection3D == 3) {
        printf("\n\n");
        // SquarePyramid();
    } else if (selection3D == 4) {
        printf("\n\n");
        // Cone();
    } else if (selection3D == 5) {
        printf("\n\n");
        // Sphere();
    } else if (selection3D == 6) {
        printf("\n");
        //Cylinder();
    } else if (selection3D == 7) {
        printf("\n\n");
        main();
    } else {
        printf("\n\n");
        printf("Invalid Selection. Please Try Again: ");
        scanf("%d", &selection3D);
    }

}

int Cube() {
    float cubeLength;

    printf("Cube Length: ");
    scanf("%f", &cubeLength);

    printf("\n\n");
    float cubeVolume = cubeLength * cubeLength * cubeLength;
    printf("Cube Volume: %.2f\n\n", cubeVolume);

    printf("1. Calculate Another Cube\n");
    printf("2. Back To 3D Shapes\n\n");

    int cubeSelection;
    printf("Enter Your Selection: ");
    scanf("%d", &cubeSelection);

    if (cubeSelection == 1) {
        printf("\n\n");
        Cube();
    }  else if (cubeSelection == 2) {
        printf("\n\n");
        Shapes3D();
    }  else {
        printf("\n\n");
        printf("Invalid Selection. Please Try Again: ");
        scanf("%d", &cubeSelection);
    }
}

// MAIN - program start & main menu

int main() {

    int menuSelection; // declares the menu selection variable as an integer

    printf("--- SIMPLE GEOMETRY CALCULATOR ---\n\n"); // basic introduction to the program
    printf("Hello - Welcome to the Simple Geometry Calculator!\n\n");
    printf("This program allows you to calculate the area of a small variety of 2D shapes and the volume of a small variety of 3D shapes.\n\n");
    printf("-- MAIN MENU --\n\n"); // menu system
    printf("1. 2D Shapes\n");
    printf("2. 3D Shapes\n");
    printf("3. Exit\n\n");

    printf("Enter Your Selection: ");
    scanf("%d", &menuSelection);

    if (menuSelection == 1) {
        printf("\n");
        Shapes2D();
    }  else if (menuSelection == 2) {
        printf("\n");
        Shapes3D();
    }  else if (menuSelection == 3) {
        printf("\n");
        printf("Thank You For Using The Simple Geometry Calculator! Goodbye!\n");
    }  else {
        printf("\n");
        printf("Invalid Selection. Please Try Again: ");
        scanf("%d", &menuSelection);
    }

    return 0;
}