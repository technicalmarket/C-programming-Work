/*When a number or word or a phrase or a sequence of characters which resembles 
the same while reading them from backward are called palindrome.
Palindrome examples: 2882, madam, noon, level.
The above examples resemble as same while reading them from backward also. 
If you read number “2882” from backward, it is same as “2882”. 
If you read the word “madam” from backward, it is same as “madam”
*/
#include<stdio.h>
void main(void)
{
    int num,i,j,result,rmndr,rev=0;
    printf("Enter the required no: ");
    scanf("%d",&num);
        result = num;
     while (num > 0)
   {
      rmndr = num%10;
      rev = rev*10 + rmndr;
      num = num/10;
   }
   if(rev == result)
        printf("No is palindrome");
    else 
        printf("No is not a palindrome");
}