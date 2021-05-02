/*Sum of a number’s digits raised to the power total number of digits is armstrong number.
Armstrong numbers example: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 153, 370, 371, 407, 1634 etc

Explanation:

3 = 3^1 = 3

153 = 1^3 + 5^3 + 3^3 = 153

Non-Armstrong numbers:

156 = 1^3 + 5^3 + 6^3 . This value is equal to 342. So, 156 is not an armstrong number*/
#include<stdio.h>
int returnvalue=0;
void main(void)
{
    int num,counter=0,rmndr=0,rev=0,result,size=0,i;
    printf("Enter the required no: ");
    scanf("%d",&num);
    result = num;
    while (num > 0)
   {
      rmndr = num%10;
      num = num/10;
      size++;
   }
   num = result;
   rmndr = 0;
    printf("size = %d\r\n",size);
     while (num > 0)
   {
      rmndr = num%10;
      rev = rev + Raisedto(rmndr, rmndr, (size-1));
      num = num/10;
      //printf("rev = %d\r\n",rev);
   }
   if(rev == result)
        printf("No is ArmStrong Number");
    else 
        printf("No is not a ArmStrong Number");
}
int Raisedto(int num,int multiplier,int size)
{
    
    //printf(" num = %d , multiplier = %d,Size = %d\r\n",returnvalue,multiplier,size);
   
    if(size != 0 )
    {
         returnvalue = (num*multiplier);
        return(Raisedto(returnvalue,multiplier,(size-1)));
    }
        
    else
        return returnvalue;   
}