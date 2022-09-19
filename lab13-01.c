/** lab13-01.c
 * =========================================================== 
 * Name: Benjamin Tat
 * Section: T6
 * Project: 13.9 Lab 13 - Printing Numbers in a Range
 * Purpose: In this lab, you will use the lab13functs.h and 
 *          lab13functs.c files to declare and define a 
 *          user-defined function called printRange().
 * =========================================================== */

#include <stdio.h>
#include "lab13functs.h"

int main() {
    int startValue;
    int endValue;

    scanf("%d", &startValue);
    scanf("%d", &endValue);

    printRange(startValue, endValue);

    return 0;
}