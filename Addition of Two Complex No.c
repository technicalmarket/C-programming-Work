#include<stdio.h>

struct Complex
{
	int Real,Img;
};

void main (void)
{
	struct Complex a,b,c;
	
	printf("Please Enter First Complex Number :\r\n");
	printf("Please Enter Real Part : ");
	scanf("%d",&a.Real);
	printf("Please Enter Imagenary Part : ");
	scanf("%d",&a.Img);
	
	printf("Please Enter Second Complex Number :\r\n");
	printf("Please Enter Real Part : ");
	scanf("%d",&b.Real);
	printf("Please Enter Imagenary Part : ");
	scanf("%d",&b.Img);
	
	c.Real = a.Real + b.Real;
	c.Img = a.Img + b.Img;
	
	if(c.Img <= 0)
		printf("Answer : %d %di ",c.Real,c.Img);
	else
		printf("Answer : %d + %di ",c.Real,c.Img);
}
