#include <stdio.h>
#include <stdbool.h>

bool isprime(long n);

int main(int argc, char**argv)
{
	long n = 0;
	long i;
	bool b;
	printf("input an integer:");
	scanf("%lld",&n);
	printf("\n");

	for(i=2; i<n; i++)
	{
		if(isprime(i))
		{
			printf("%lld is prime.\n", i);
		}
		else
		{
			printf("%lld is composite.\n", i);
		}
	}
	return 0;
}

bool isprime(long n)
{
	long i = 0;
	long h = 0;
	long r = 0;

	if( n<2 )
	{
		return false;
	}
	else if( n==2)
	{
		return true;
	}
	else
	{
		h = n/2+1;
		for(i=2; i<h; i++)
		{
			r = n%i;	
			if(r==0) return false;
		}
		
		return true;
	}
}
