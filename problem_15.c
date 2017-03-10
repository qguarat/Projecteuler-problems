#include <iostream>
#include <stdio.h>
#include <string.h>

int main(int argc, char** argv) 
{
	
	const int gridSize = 20;
	unsigned long long paths = 1;
 
	for (int i = 0; i < gridSize; i++) 
	{
		paths *= (2 * gridSize) - i;
		paths /= i + 1;
	}
	printf("%llu", paths);
	
	return 0;
}
