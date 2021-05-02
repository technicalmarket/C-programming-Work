#include<stdio.h>
void main(void)
{
    int num1,num2,num3,SmallestNumber;
    printf("Enter the First Number: ");
    scanf("%d",&num1);
    printf("Enter the Second Number: ");
    scanf("%d",&num2);
    printf("Enter the Third Number: ");
    scanf("%d",&num3);
    
    SmallestNumber = num1;

    if(num1 > num2) SmallestNumber = num2;
    if(num1 > num3) SmallestNumber = num3;
    if(num2 > num3 && num1>num2 && num1>num3) SmallestNumber = num3;
    else SmallestNumber = num2;

    printf("Smallest Number is : %d",SmallestNumber);
    
}