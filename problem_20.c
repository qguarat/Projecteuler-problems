#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define CHISLO 12

int main(int argc, char** argv) 
{	
	int i, currentNumber;
	unsigned long long number = 1;
	int sum=0;
	
	for(i=CHISLO;i>=1;i--)
	{
		number*=i;
		printf("number = %d\n", number);
	}
	
	while(number>=1)
	{
		currentNumber = number%10;
		sum+=currentNumber;
		number/=10;
		printf("number = %d\ncurrentNumber = %d\nsum = %d\n", number, currentNumber, sum);
	}
	
	printf("the sum is - %d", sum);
	
	
	return 0;
}
