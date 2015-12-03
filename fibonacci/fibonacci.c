#include <stdio.h>

unsigned long fibonacci(unsigned long n);

int main(void)
{
	unsigned long n, rlt;
	printf("enter an integer large than 0:");
	scanf("%lld", &n);
	printf("n = %lld\n", n);

	rlt = fibonacci(n);

	printf("f(%lld) =  %lld\n", n,  rlt);

	return 0;
}

unsigned long fibonacci(unsigned long n)
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
