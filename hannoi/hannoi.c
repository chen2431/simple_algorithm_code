#include <stdio.h>

void move(int n, char s, char d);
void hannoi(int n, char s, char t, char d);

int main(void)
{
	int n=0;
	printf("input an integer:");
	scanf("%d", &n);
	hannoi(n, 'a', 'b', 'c');
	return 0;
}

void move(int n, char s, char d)
{
	printf("move %d  from %c to  %c\n", n, s, d);
}

void hannoi(int n, char s, char t, char d)
{
	if(n==1)
	{
		move(1, s, d);
	}
	else
	{
		hannoi(n-1, s, d, t);
		move(n,s,d);
		hannoi(n-1, t, d, d);
	}
}
