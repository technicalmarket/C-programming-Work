#include<stdio.h>
void main(void)
{
    int num,rmndr=0,val=0;
    printf("Enter your Number: ");
    scanf("%d",&num);
    
  do{
      rmndr = num%10;
      val = (val*10) + rmndr;
      num = num/10;
  }while(num != 0 );

    printf("Reverse No is : %d", val );
 
}