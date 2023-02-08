/*Coding Practise: Temperature Conversion
*Problem: Estimates the temperature in a freezer (in °C) given the elapsed time(hours)
*since the power failure.
Author: Analyn Amurao*/

#define _CRT_SECURE_NO_DEPRECATE			/*macro - prevent scanf() buffer overflow*/
#include <stdio.h>							/*standard input/output library*/
#include <math.h>							/*standard Maths library*/




int main(void)
{
	/*Declaring variables*/
	double temperature;			/*output - temperature in °C*/
	double  time;				/*output - number of time elapsed*/
	int hour;					/*input - number of hours elapsed*/
	int min;					/*input - number of minutes elapsed*/

	/*Display the header*/
	printf("Temperature Estimation\n");

	/*Get and Display the time elapsed*/
	printf("Please enter the hour/s elapsed: \n");
	scanf("%d", &hour);

	printf("Please senter the minute/s elapsed: \n");
	scanf("%d", &min);

	/*minute to hour conversion*/
	time = hour + (double) min / 60;

	/*Computation of temperature in °C*/
	temperature = ((4 * (time * time)) / (time + 2)) - 20;

	/*Display the output*/
	printf("The estimated temperature is %.2lf degree Celsius since the time elapsed.", temperature);

	return 0;
}

