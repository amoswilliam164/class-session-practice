#include <stdio.h>
int main(int argc, char** argv)
{
	int House;
	float Units;
	
	printf("     WATER BILL\n");
	
	for(House=28;House<=30;House++){
		printf("\n  House Number:%d\n", House);
		printf("Enter units consumed: ");
        scanf("%f", &Units);
		printf("Water Bill is: %.2f\n", Units*200);
		
	
	}
	return 0;
}