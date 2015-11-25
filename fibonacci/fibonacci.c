#include <stdio.h>

unsigned int fibonacci(unsigned int n);

int main(void)
{
	unsigned int n, rlt;
	printf("enter an integer large than 0:");
	scanf("%d", &n);
	printf("n = %d\n", n);

	rlt = fibonacci(n);

	printf("f(%d) =  %d\n", n,  rlt);

	return 0;
}

unsigned int fibonacci(unsigned int n)
{
	if(n==1)
	{
		return 1;
	}
	else if(n==2)
	{
		return 1;
	}
	else 
	{
		return fibonacci(n-1)+fibonacci(n-2);
	}

	return 0;
}
