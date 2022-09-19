/** lab13-03.c
 * =========================================================== 
 * Name: Benjamin Tat
 * Section: T6
 * Project: 13.11 Lab 13 - Greatest Common Denominator
 * Purpose: In this lab, you will use the lab13functs.h and 
 *          lab13functs.c files to declare and define a 
 *          user-defined function called findGCD().
 * =========================================================== */

#include <stdio.h>
#include "lab13functs.h"

int main() {
    int num1;
    int num2;

    scanf("%d", &num1);
    scanf("%d", &num2);

    printf("GCD = %d\n", findGCD(num1, num2));

    return 0;
}