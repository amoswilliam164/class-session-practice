/*
Name   : Amos William
Adm No : BCS-03-0076/2026
Course : Computer Science
Unit   : Structured Programming And Algorithms
Program: do-while Loop
*/

int main(int argc, char** argv)
{
	int House;//%d
	float Units;//%f

	printf("    WATER BILL\n");
	
		House=28; //start
	do
	{
		printf("\n House Number:%d", House);
		printf("\nEnter the Units:");
		scanf("%f", &Units);
		printf("The Total Bill is:%.2f\n", Units*200);
		
		House++;
	} while(House<=30);
	
		
	
	
		return 0;
}
