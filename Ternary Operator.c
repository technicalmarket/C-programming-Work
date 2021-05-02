#include <stdio.h>
void main(void)
{
	int num1,num2,result;
	printf("Enter the First Number: ");
	scanf("%d",&num1);
	printf("Enter the Second Number: ");
	scanf("%d",&num2);
	result = num1>num2?printf("num1 is greater than num2"):printf("num2 is greater than num1");
	printf("Result Number: %d",result);
}
