#include<stdio.h>
void main (void)
{
    int num1,num2;
    printf("Enter the First no: ");
    scanf("%d",&num1);
    
    printf("Enter the Second no: ");
    scanf("%d",&num2);
    num1 = num1 + num2;

    num2 = num1-num2;
    num1 = num1-num2;


    printf("First no: %d\r\n",num1);
    printf("Second no: %d\r\n",num2);

}