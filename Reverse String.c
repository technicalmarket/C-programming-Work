#include<stdio.h>
#include<string.h>

void main(void)
{
    int num,rmndr=0,val=0;
    char myval[] = {0};
    printf("Enter your String: ");
    scanf("%s",&myval);

    printf("Reverse No is : %s",strrev(myval));
 
}