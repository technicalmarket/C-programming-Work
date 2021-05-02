


#include <stdio.h>
/*In mathematics, Pascal's triangle is a triangular array of the binomial coefficients
the simplest equation to calculate each of the element in the row is

	Coeff.(n,k) = n! / k! * (n-k)!
	
	here n is no of Row and K is the column no
*/

int factorial(int num);
void main(void)
{
	int n,k,count,num,temp,result,node1,node2;
	printf("Enter the No of rows you want to show\n In Triangle :");
	scanf("%d",&count);
	
	for(n=0;n<=count;n++)
	{
		for(k=0;k<=n;k++)
		{
			result = (factorial(n))/(factorial(k) * factorial(n-k));			
			printf(" %d ",result);
		}
		printf("\r\n");
	}
}

int factorial(int num)
{
	int factorial = 1,temp,i;
	if(num == 0)
    {
        return factorial;
    }
    else if(num < 0)
    {
       num = num * (-1); 
    }
    
    if(num > 0)
    {
        for(i=1;i<=num;i++)
        {
            factorial = factorial*i;
        }
        return factorial;
        
    }
	
}
