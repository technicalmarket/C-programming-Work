#include<stdio.h>
void main (void)
{
    int num1,num2,res1,res2;
    printf("Enter the First no: ");
    scanf("%d",&num1);
    
    printf("Enter the Second no: ");
    scanf("%d",&num2);

    res1 = num2;
    res2 = num1;
    num1 = res1;
    num2 = res2;

    printf("First no: %d\r\n",res1);
    printf("Second no: %d\r\n",res2);

}