#include <stdio.h>
 
int main()
 
{
 
     char c;
 
     printf("Please enter a character\n");
 
     scanf("%c", &c);
 
 
 
     if (c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'i' || c == 'I' || c =='o' || c=='O' || c == 'u' || c == 'U')
 
         printf("\nThe entered character %c is a vowel.\n", c);
 
     else
 
         printf("\nThe entered character %c is not a vowel.\n", c);
 
 
 
     return 0;
 
}
