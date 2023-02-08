/*Coding Practise:Convert Miles to KM
Author: Anayln Amurao*/


#define _CRT_SECURE_NO_DEPRECATE	//macro preventing scanf() buffer overflow
#include <stdio.h>					//standard library
#define KM_PER_MILE 1.609			//converstion constant



int main(void)
{
	double miles,						//input - distance in miles
		kms;							//output - distance in km


//user input of distances in miles
	printf("Enter the distances in miles: \n");
	scanf("%lf", &miles);
	getchar();

	//conversion of miles to km

	kms = KM_PER_MILE * miles;

	//Display the distance in KM
	printf("Distance in KM: %f \n", kms);


	getchar();
	return 0;
}