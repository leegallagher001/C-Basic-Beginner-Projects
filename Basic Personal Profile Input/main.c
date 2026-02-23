#include <stdio.h>

int main() {
    char name[50]; // declares a character array of maximum size 50 characters to store the user's name
    int age;
    char favFood[50]; // declares a character array of maximum size 50 characters to store the user's favourite food
    float height;

    printf("-- BASIC PERSONAL PROFILE PROGRAM --\n\n");

    printf("Enter Your Name: ");
    scanf("%s", &name);

    printf("Enter Your Age: ");
    scanf("%d", &age);

    printf("Enter Your Favourite Food: ");
    scanf("%s", &favFood);

    printf("Enter Your Height (in cm): ");
    scanf("%f", &height);

    printf("\n\n");
    printf("Name: %s", name);
    printf("\n");
    printf("Age: %d", age);
    printf("\n");
    printf("Favourite Food: %s", favFood);
    printf("\n");
    printf("Height: %.2f m", height);

    return 0;
}