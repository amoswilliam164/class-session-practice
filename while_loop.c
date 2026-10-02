/*
Name   : Amos William
Adm No : BCS-03-0076/2026
Course : Computer Science
Unit   : Structured Programming And Algorithms
Program: While Loop
*/

int main(int argc, char** argv)
{
	int House;//%d
	float Units;//%f

	printf("    WATER BILL\n");
	
		House=28; //start
	
	while(House<=30)
	{
		printf("\n House Number:%d", House);
		printf("\nEnter the Units:");
		scanf("%f", &Units);
		printf("The Total Bill is:%.2f\n", Units*200);
		
		House++;
	}
	
		return 0;
}
