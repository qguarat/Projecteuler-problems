#include <iostream>
#include <stdio.h>
#include <string.h>

int main(int argc, char** argv) 
{
	int a,b,c;
	int sum=0;
	
		for(a=1;a<=1000;a++)
		{
			for(b=1;b<=1000;b++)
			{
				for(c=1;c<=1000;c++)
				{
					if(a*a + b*b == c*c)
					{
						sum = a+b+c;
						if(sum == 1000)
						{
							printf("a = %d , b = %d , c = %d\n a*b*c = %d\n", a,b,c,a*b*c);
							
						}
					}
				}
			}
		}
		
	return 0;
}
