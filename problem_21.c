#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define MAX 10000

int main(int argc, char** argv) 
{
	int i;
	int sum1 = 0;
	int sum2 = 0;
	int chislo = 2;
	int allSum = 0;
	
	while (chislo <= MAX)
	{
		sum1=0;
		sum2=0;
		for(i=1;i<=chislo/2;i++)
		{
			if(chislo%i==0)
			{
				sum1+=i;
			}
			
		}
		
		for(i=1;i<=sum1/2;i++)
		{
			if(sum1%i==0)
			{
				sum2+=i;
			}
		}
		
		if(sum2 == chislo)
		{
			if(sum1 != chislo)
			{
				allSum = allSum + sum2 + chislo;
				printf("the numbers %d and %d are amicable\n", chislo, sum1);
			}
		}
		chislo++;
	}
	
	printf("the sum is - %d", allSum/2);
	
	return 0;
}
