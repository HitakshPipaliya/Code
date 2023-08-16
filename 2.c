#include<stdio.h>

int main()
{
	//Make 3 Variables

	int num1;
	int num2;
	int num3;

	//Take 3 Numbers as an input

	printf("Enter the first number: ");
	scanf("%d", &num1);

	printf("Enter the second number: ");
	scanf("%d", &num2);

	printf("Enter the third number: ");
	scanf("%d", &num3);
	
	//Condition
	
	if (num1 == num2 && num2 == num3)
	{
		printf("All Numbers are Equal \n");
	}
	else if (num1 > num2 && num1 > num3)
	{
		printf("Num1 is bigger than Num2 and Num3 \n");
	}
	else if (num2 > num1 && num2 > num3)
	{
		printf("Num2 is bigger than Num1 and Num3 \n");
	}
	else if (num3 > num1 && num3 > num2)
	{
		printf("Num3 is biggger than Num1 and Num2 \n");
	}


	if (num1 == num3 && num1 > num2)
	{
		printf("Num1 and Num3 are big and equal \n");
	}
	else if (num2 == num3 && num2 > num1)
	{
		printf("Num2 and Num3 are big and equal \n");
	}
	else if (num1 == num2 && num1 > num3)
	{
		printf("Num1 and Num2 are big and equal \n");
	}
}
	