/*There are many ways to print numbers without using any loop conditions such as for(), while(), do while(). Few ways are,


1. Using recursive functions

2. Using recursive main functions

3. Using goto statement*/
#include<stdio.h>

void main(void)
{
	int i = 0;
	recursion(0);
}

int recursion(int k)
{
	if (k != 500)
	{
		printf("Value = %d\r\n",k++);
		recursion(k);
		return 1;
	}
	else
		return 0;
		
}
