#include<stdio.h>

int main() 
{
	int x;
	while(1)
	{
		printf("\nenter the numbers to redisplay and press 42 for stop displaying\n");
		scanf("\n%d\n",&x);
		if(x==42)
		break;
		else
		printf("entered number is %d\n",x);
	}
	return 0;
} 
