/*Coding Practise: Designing Hydroelectric dam
*Problem: Write a program to assist in the design of a hydroelectric dam
Author: Analyn Amurao*/

#define _CRT_SECURE_NO_DEPRECATE	/*macro - prevent scanf() buffer overflow*/
#include <stdio.h>					/*standard input/output library*/
#include <math.h>					/*common Mathematics functions*/
#define GRAVITY 9.80				/*constant gravity meters/second^2*/
#define EFFICIENCY 0.90				/*constant efficiency at 90%*/

int main(void)
{

	/*Declaring variables*/
	double height, flow; 			/*input - height of the damn and flow rate in m^3/s*/
	double mass;					/*input - mass of water in KG*/
	double work;					/*input - work done on the water by gravity in J*/
	double power;					/*output - power produced in W*/

		/*Display the header*/
	printf("Hyrdoelectric Dam Calculator\n");
	
	printf("Please enter the height of the dam(in metres): \n");
	scanf("%lf", &height);
	getchar();

	printf("Please enter the flow rate (in m^3/s): \n");
	scanf("%lf", &flow);
	getchar();

	/*Calculate the mass of water*/
	mass = 1000 * flow;

	/*Calculate work done by gravity*/
	work = mass * GRAVITY * height;

	/*Calculate power produced*/

	power = EFFICIENCY * work;


	/*Print result in Megawatts*/
	printf("The hydroelectric dam will produce %.2lf megawatts of power.\n", power / 1000000);

	return 0;
}