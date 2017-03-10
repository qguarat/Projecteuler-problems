#include <iostream>
#include <stdio.h>
#include <string.h>

int main(int argc, char** argv) 
{
	int chislo=1;
	int i;
	int max=2000000;
	int maieProsto;
	int sum = 0;
	
	while (chislo <max)
	{
		maieProsto = 1;
		chislo++;
		for(i=2;i<=chislo/2;i++)
		{
			if(chislo%i == 0)
			{
				maieProsto = 0;
			}
		}
		if(maieProsto == 1)
		{
			printf("%d\n", chislo);
			sum+=chislo;
		}
	}
	printf("the sum is - %d", sum);
	
	return 0;
}
