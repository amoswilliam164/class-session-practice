/*
Name   : Amos William
Adm No : BCS-03-0076/2026
Course : Computer Science
Unit   : Structured Programming And Algorithms
Program: Electricity Consumption
*/

#include <stdio.h>
int main()
{
	int household;//%d
	float units;//%f
	
	printf("       ELECTRICITY BILL\n");
	
	household=11;//start
	
	while(household<=20){
		printf("\n    Household:%d", household);
		printf("\nEnter the units consumed:");
		scanf("%f", &units);
		printf("Total Bill is :%.2f\n", units*33);
		household++;
	}
	
	return 0;
}