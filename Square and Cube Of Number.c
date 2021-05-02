#include<stdio.h>
void main(void)
{
    int num = 0 , square = 0 , cube = 0;
    printf("Enter the Number : ");
    scanf("%d",&num);

   square = num * num;
   cube = num*num*num;

   printf("Square of Given Number : %d",square);
   printf("Cube of Given Number : %d",cube);
}