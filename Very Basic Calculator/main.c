#include <stdio.h>

int addition(int num1, int num2) {
    int result = num1 + num2;
    return result;
}

int subtraction(int num1, int num2) {
    int result = num1 - num2;
    return result;
}

int multiplication(int num1, int num2) {
    int result = num1 * num2;
    return result;
}

int division(int num1, int num2) {
    int result = num1 / num2;
    return result;
}

int main() {
    int num1, num2;

    printf("--- BASIC CALCULATOR ---\n\n");
    printf("Enter Your 1st Number: ");
    scanf("%d", &num1);
    printf("\n");
    printf("Enter Your 2nd Number: ");
    scanf("%d", &num2);
    printf("\n\n");

    printf("CHOOSE YOUR OPERATION (+, -, *, /): \n");
    printf("1. Addition (+)\n");
    printf("2. Subtraction (-)\n");
    printf("3. Multiplication (*)\n");
    printf("4. Division - NWN (/)\n\n");

    int menuChoice;
    printf("Enter Your Selection: ");
    scanf("%d", &menuChoice);
    
    printf("\n\n");

    if (menuChoice == 1) {
        printf("Answer: %d + %d = %d\n", num1, num2, addition(num1, num2));
    } else if (menuChoice == 2) {
        printf("Answer: %d - %d = %d\n", num1, num2, subtraction(num1, num2));
    } else if (menuChoice == 3) {
        printf("Answer: %d * %d = %d\n", num1, num2, multiplication(num1, num2));
    } else if (menuChoice == 4) {
        printf("Answer: %d / %d = %d\n", num1, num2, division(num1, num2));
    }

    return 0;
}