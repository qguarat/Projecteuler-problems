#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define MIN 2
#define MAX 6
#define ELEMENTI 100

int main(int argc, char** argv) 
{
	int broqch = 0;
	unsigned long long a, b, c, d, i, powa;
 	unsigned long long arr1[ELEMENTI][ELEMENTI];
	
	for(a=MIN;a<=MAX;a++)
	{
		for(b=MIN;b<=MAX;b++)
		{               
			arr1[a][b] = pow(a, b);
		}
	}
	for(a=MIN;a<=MAX;a++)
	{
		for(b=MIN;b<=MAX;b++)
		{               
			for(c=MIN;c<=MAX;c++)
			{
				for(d=MIN;d<=MAX;d++)	
				{
					if(a!=c && b!= d && arr1[a][b] == arr1[c][d])
					{
						broqch++;
					}
				}
			}
		}
	}
	
	broqch = pow(MAX-MIN+1, 2) - broqch/2;
	printf("the number of the different is - %d", broqch);
	
	return 0;
}
