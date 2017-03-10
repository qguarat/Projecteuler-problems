#include <iostream>
#include <stdio.h>
#include <string.h>

int main(int argc, char** argv) 
{
	unsigned long chislo;
	int max=1000000;
	int i=700000;
	int chainCounter;
	int maxChain=1;
	int theNumber;
	
	while(i<max)
	{
		i++;
		chainCounter = 1;
		chislo = i;
		if(chislo%2 == 0)
		{

			while(chislo>1)
			{
				if(chislo%2 == 0)
				{
					chainCounter++;
					chislo = chislo/2;
				}
				else
				{
					chainCounter++;
					chislo = chislo*3 + 1;
				}
			}
		}
		else
		{
			while(chislo>1)
			{
				if(chislo%2 == 0)
				{
					chainCounter++;
					chislo = chislo/2;
				}
				else
				{
					chainCounter++;
					chislo = chislo*3 + 1;
				}
			}
		}
		if(chainCounter > maxChain)
		{
			maxChain = chainCounter;
			theNumber = i;
		}
		printf("for the number %d the steps are : %d :: %d\n", i, chainCounter,maxChain);
	}
	
	printf("the number with the most steps is %d - %d\n", theNumber, maxChain);
	
	
	
	return 0;
}
