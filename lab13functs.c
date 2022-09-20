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
    int originalValue = inputValue;
    int i;
    int numberOfDigits = 1;
    int digit;
    int runningCount = 0;

    while (inputValue/10 != 0) {
        numberOfDigits = numberOfDigits + 1;
        inputValue = inputValue / 10;
    }

<<<<<<< HEAD
    int i;
    for (i = 1; i <= numberOfDigits; i++) {
        /* code */
    }
    

    return numberOfDigits;
=======
    inputValue = originalValue;

    //Isolates individual digits and raises them to number of digits, expect for the ones place
    for (i = numberOfDigits; i > 1; i--) {
        digit = (inputValue / (int) (pow(10, i-1)));
        runningCount = runningCount + (int) (pow(digit, numberOfDigits));
        inputValue = inputValue - digit * (int) (pow(10, i-1));
    }
    
    //Raises ones digit place to number of digits
    runningCount = runningCount + pow(inputValue, numberOfDigits);
    
    if (runningCount == originalValue) {
        printf("%d is an Armstrong number.\n", originalValue);
        return 1;
    }
    else {
        printf("%d is not an Armstrong number.\n", originalValue);
        return 0;
    }
>>>>>>> e57fe85d87f11efe91cfa3aa02a76207ba6717fc
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