#include <stdio.h>
/*When a function in C program calls by itself,
 then that function is called recursive function. 
 This process is called recursion.*/
 int mul=1;
void main(void)
{
	int factorial_num = 1,num,i,j;
    printf("Enter the Number : ");
    scanf("%d",&num);
    
    factorial_num = factorial(1,num);
    
    printf("Factorial : %d", factorial_num);
    
}
int factorial(int number,int count)
{
	
	if(count != 0)
	{
		number = number*count;
		return (factorial(number,(count-1)));
	}
	else
		return number;
	
}
