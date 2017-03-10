#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>

#define N 1000
#define ELEMENTI 400

int main(int argc, char** argv) 
{
	int masiv[ELEMENTI];
	int chislo;
	int ostataka = 0;
	int sum = 0;
	
	for(int i=1;i<=ELEMENTI;i++)
	{
		masiv[i] = 0;
	}
	
	masiv[0] = 1;
	
	for(int i=0;i<=ELEMENTI;i++)
	{
		for(int j=0;j<=N;j++)
		{
			chislo = 2*masiv[j] + ostataka;
			masiv[j] = chislo%10;
			ostataka = 	chislo/10;
		}
	}
	
	for(int i=0;i<=ELEMENTI;i++)
	{
		sum+=masiv[i];
	}
	
	printf("the sum is - %d", sum);
	
	return 0;
}
