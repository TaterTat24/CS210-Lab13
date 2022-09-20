/** lab13functs.c
 * =========================================================== 
 * Name: Benjamin Tat
 * Section: T6
 * Project: Iteration (while, do-while)	
 * Purpose: high level description of purpose of the program
 *          could be multiple lines
 * =========================================================== */
#include <stdio.h>
#include <math.h>

void printRange(int startValue, int endValue) { 
    while (startValue != endValue) {
        if (startValue < endValue) {
            printf("%d\n", startValue);
            startValue = startValue + 1;
        }
        else {
            printf("%d\n", startValue);
            startValue = startValue - 1; 
        }
    }
    printf("%d\n", endValue);
}

int isArmstrong(int inputValue) {
    int numberOfDigits = 1;
    while (inputValue/10 != 0) {
        numberOfDigits = numberOfDigits + 1;
        inputValue = inputValue / 10;
    }

    int i;
    for (i = 1; i <= numberOfDigits; i++) {
        /* code */
    }
    

    return numberOfDigits;
}

int findGCD(int num1, int num2) {
    while (num1 != num2) {
        if (num1 < num2) {
            num2 = num2 - num1;
        }
        else {
            num1 = num1 - num2;
        }
    }
    return num1;
}