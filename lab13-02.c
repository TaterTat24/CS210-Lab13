/** lab13-02.c
 * =========================================================== 
 * Name: Benjamin Tat
 * Section: T6
 * Project: 13.10 Lab 13 - Armstrong Number
 * Purpose: In this lab, you will use the lab13functs.h and 
 *          lab13functs.c files to declare and define a 
 *          user-defined function called isArmstrong().
 * =========================================================== */

#include <stdio.h>
#include "lab13functs.h"

int main() {
    int inputValue = 371;
    //scanf("%d", &inputValue);

    isArmstrong(inputValue);
    
    printf("371/10 = %d\n", 371/10);
    printf("371/100 = %d\n", 37/100);
    printf("371mod100 = %d\n", 371%100);

    return 0;
}