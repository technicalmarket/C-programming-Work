#include <stdio.h>
 
int main()
 
{
 
    float n;
 
    printf("Please enter a number\n");
 
    scanf("%f",&n);
 
    
 
    if (n==0)
 
        printf("\nEntered number is 0. It's neither positive or negative");
 
    else if (n<0)
 
        printf("\nEntered number %.2f is negative.",n);
 
    else
 
        printf("\nEntered number %.2f is positive.",n);
 
    return 0;
 
}
