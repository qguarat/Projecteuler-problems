#include <iostream>
#include <stdio.h>
#include <string.h>

int main(int argc, char** argv) 
{
	unsigned long long i=1;
	int j, broqch;
	unsigned long chislotoWithMaxDivisors;
	unsigned long chislo=0;
	int maxDivisors=0;
	
	while (maxDivisors <= 500)
	{
		i++;
		broqch=0;
		chislo += i;
		for(j=1;j<=chislo;j++)
		{
			if(chislo%j == 0)
			{
				broqch++;
				if(broqch>maxDivisors)
				{
					maxDivisors = broqch;
					chislotoWithMaxDivisors = chislo;
				}
			}
		}
	}
	
	printf("the number with the max divisors is %d with %d divisors", chislotoWithMaxDivisors, broqch);
	
	
	return 0;
}
