/*Coding Practise: Rectangle Perimeter
* Problem: Calculate the perimeter of a rectangle
*Author: Analyn Amurao*/



#define _CRT_SECURE_NO_DEPRECATE				/*macro - preventing scanf() buffer overflow*/
#include <stdio.h>								/*standard library*/



int main(void) {

	/*Declaring variables for length, breadth and perimeter*/

	float length,			//input - length of a rectangle
		breadth,			//input - breadth of a rectangle	
		perimeter;			//input - perimeter of a rectangle 


	/*Display and get the length and breadth of rectangle*/

	printf("Please enter the length of rectangle: \n");
	scanf("%f", &length);


	printf("Please enter the breadth of rectangle: \n");
	scanf("%f", &breadth);

	/*Calculation of perimeter of a rectangle*/
	perimeter = 2 * (length + breadth);


	/*Display the perimeter of a rectangle*/
	printf("The calculated perimeter of the rectangle: %f", perimeter);

	getchar();
	return 0;
}