/** lab13functs.h
 * =========================================================== 
 * Name: Benjamin Tat
 * Section: T6
 * Project: Iteration (while, do-while)	 
 * Purpose: high level description of purpose of the program
 *          could be multiple lines
 * =========================================================== */
#ifndef LAB12FUNCTS_H
#define LAB12FUNCTS_H

/**
* @brief When called, printRange should print out all of the 
         values from the start value to the end value, inclusively. 
         Each number should be printed on a new line. The function 
         prints the numbers in reverse if the start value is 
         greater than the end value.
* @param startValue A start value
* @param endValue A end value
* @return This function does not return anything
* @pre N/A
* @post N/A
*/
void printRange(int startValue, int endValue);

/**
* @brief An Armstrong number is the sum of the its raised number of 
         digits equal to the original number itself.
* @param inputValue 
* @return This function returns 1 if the number provided to the 
          function is an Armstrong number, and 0 if the number 
          is not an Armstrong number.
* @pre N/A
* @post N/A
*/
int isArmstrong(int inputValue);

/**
* @brief This function finds greatest common denominator (an int).
* @param num1 an integer 1.
* @param num2 an integer 2.
* @return This function returns the greatest common denominator (an int).
* @pre N/A
* @post N/A
*/
int findGCD(int num1, int num2);

#endif