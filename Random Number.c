#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/*The pseudo-random number generator should only 
be seeded once, before any calls to rand(), and 
the start of the program. It should not be repeatedly seeded, 
or reseeded every time you wish to generate a new batch of pseudo-random numbers.
Standard practice is to use the result of a call to srand(time(0)) as the seed. 
However, time() returns a time_t value which vary everytime and hence the pseudo-random number 
vary for every program call.*/

void main(void)
{
	int num,count;
	printf("Enter no of random numbers required : ");
	scanf("%d",&num);
	
	// This program will create different sequence of  
    // random numbers on every program run  
    // Use current time as seed for random generator 
	srand(time(0)); 
	
	while(num!=0)
	{
		printf("%d, ",rand());
		num--;
	}
}
