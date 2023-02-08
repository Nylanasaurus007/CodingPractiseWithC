/*Coding Practise: Supermarket Coin Processor
* Problem: Determine the value of collection of coins
*Author: Analyn Amurao*/


#define _CRT_SECURE_NO_DEPRECATE			//macro preventing scanf() buffer overflow
#include <stdio.h>							//standard input/output library


int main(void) {

	/*User input variables*/
	char first, middle, last;			//input - customer's initials
	int dollars;						//input - number of dollars 1$
	int quarters;						//input - number of quarters .25$
	int dimes;							//input - number of dimes .10$
	int nickels;						//input - number of nickels .05$
	int pennies;						//input - number of penny .01$

	/*User output variables*/
	int totalDollars;					//output - totall dollar value
	int change;							//output - leftover change

	/*Additional Programme Variables*/
	int totalCents;						//output - total value in cents

	/*Get and display customer's initials*/
	printf("Please enter your initial: \n");
	scanf("%c %c %c", &first, &middle, &last);
	getchar();
	printf("%c %c %c, please enter your coin information.\n", first, middle, last);

	/*Get and display customer's coin information*/

	printf("Enter dollars: \n");
	scanf("%d", &dollars);
	getchar();

	printf("Enter quarters: \n");
	scanf("%d", &quarters);
	getchar();

	printf("Enter dimes: \n");
	scanf("%d", &dimes);
	getchar();

	printf("Enter nickels: \n");
	scanf("%d", &nickels);
	getchar();

	printf("Enter penny/ies: \n");
	scanf("%d", &pennies);
	getchar();

	/*Compute the total value in cents*/

	totalCents = 100 * dollars + 25 * quarters + 10 * dimes + 5 * nickels + pennies;

	/*Compute the total value in dollars*/

	totalDollars = totalCents / 100;
	change = totalCents % 100;

	/*Display customer's coin information*/

	printf("Number of Dollars: %d\n", dollars);
	printf("Number of Quarters: %d\n", quarters);
	printf("Number of Dimes: %d\n", dimes);
	printf("Number of Nickels: %d\n", nickels);
	printf("Number of Pennies:%d\n", pennies);

	/*Display Cutomer's Credit*/
	printf("%c %c %c Total Credit\n", first, middle, last);
	printf("Dollars: %d\n", totalDollars);
	printf("Change:%d\n", change);


	return 0;
}

