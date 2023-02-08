/*Coding Practise: Taxi Fare Calculator
*Problem: Calculate and display the taxi fare
*Author: Analyn Amurao
*/

#define _CRT_SECURE_NO_DEPRECATE			/*macro - prevent scanf() buffer overflow*/
#include <stdio.h>							/*standard input/output library*/
#define TAXI_RATE 1.5


/*Main function*/
int main(void)
{
	double km,		/*input - distance travelled*/
		fare;		/*output - amount of distance travelled*/

	/*Display the heading*/
	printf("Taxi Fare Calculator\n");

	/*Get and display the travelled distance*/
	printf("Enter the distance travelled in KM:");
	scanf("%lf", &km);
	getchar();

	/*Calculation of fare*/
	fare = TAXI_RATE * km;

	/*Display the fare amount*/

	printf("Your fare is $ %lf \n", fare);

	return 0;
}
