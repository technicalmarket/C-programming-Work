#include <stdio.h>
void Addition(void)
{
	int num1=0,num2=0,result=0;
	printf("Please Enter the First Number :");
	scanf("%d",&num1);
	printf("Please Enter the Second Number :");
	scanf("%d",&num2);	
	result = num1 + num2;
	printf(" Addition is %d\r\n\r\n\r\n\r\n\r\n",result);
}
void Subtraction(void)
{
	int num1=0,num2=0,result=0;
	printf("Please Enter the First Number :");
	scanf("%d",&num1);
	printf("Please Enter the Second Number :");
	scanf("%d",&num2);	
	result = num1 - num2;
	printf(" Subtraction is %d\r\n\r\n\r\n\r\n\r\n",result);			
}
void Multiplication(void)
{
	int num1=0,num2=0,result=0;
	printf("Please Enter the First Number :");
	scanf("%d",&num1);
	printf("Please Enter the Second Number :");
	scanf("%d",&num2);	
	result = num1 * num2;
	printf(" Multiplication is %d\r\n\r\n\r\n\r\n\r\n",result);
}
void Division(void)
{
	int num1=0,num2=0,result=0;
	printf("Please Enter the Dividend :");
	scanf("%d",&num1);
	printf("Please Enter the Divisor :");
	scanf("%d",&num2);	
	result = num1 / num2;
	printf(" Division is %d\r\n\r\n\r\n\r\n\r\n",result);
}
void Modulus(void)
{
	int num1=0,num2=0,result=0;
	printf("Please Enter the Dividend :");
	scanf("%d",&num1);
	printf("Please Enter the Divisor :");
	scanf("%d",&num2);	
	result = num1 % num2;
	printf(" Reminder is %d\r\n\r\n\r\n\r\n\r\n",result);
}
void Power(void)
{
	int num1=0,num2=0,result=1;
	printf("Please Enter the Number :");
	scanf("%d",&num1);
	printf("Please Enter the Power :");
	scanf("%d",&num2);	
	while(num2 != 0)
	{
		result = result * num1;
		num2--;
	}
	
	printf(" Result is %d\r\n\r\n\r\n\r\n\r\n",result);
}
void Factorial(void)
{
	int factorial = 1,num,i,j;
    printf("Enter the Number : ");
    scanf("%d",&num);
    if(num == 0)
    {
        printf("Factorial Value : 1\r\n\r\n\r\n\r\n\r\n");   
    }
    if(num < 0)
    {
        printf("Factorial Value cannot be found \r\n");
        printf("Value should be greater then zero or can be Zero \r\n\r\n\r\n\r\n\r\n");   
    }
    else if(num > 0)
    {
        for(i=1;i<=num;i++)
        {
            factorial = factorial*i;
        }
        printf("Factorial Value : %d\r\n\r\n\r\n\r\n\r\n",factorial);
        
    }				
}
void main(void)
{
	int choise = 0;
	printf("         CALCULATOR        \r\n");
		
	while(choise != 8)
	{
		printf("1. Addition\r\n");
		printf("2. Subtraction\r\n");
		printf("3. Multiplication\r\n");
		printf("4. Division\r\n");
		printf("5. Modulus\r\n");
		printf("6. Power\r\n");
		printf("7. Factorial\r\n");
		printf("8. Exit\r\n");
		printf("Please choose the Operation :");
		scanf("%d",&choise);
		
		
		switch(choise)
		{
			case 1:
				Addition();
				break;
			case 2:
				Subtraction();
				break;
			case 3:
				Multiplication();
				break;
			case 4:
				Division();
				break;
			case 5:
				Modulus();
				break;
			case 6:
				Power();
				break;
			case 7:
				Factorial();
				break;
			case 8:
				printf("Exiting .... Visit Again:)");
				break;
			
			default:
				printf("Wrong Choise?!?!?!?!\r\n");
				printf("Please Try Again\r\n");
				break;
		}
		
	}
	getch();
}

