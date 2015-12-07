#include <stdio.h>

void map1_2(int n, int* a, int* b);

int main(int argc, char**argv)
{
	int a, b;
	int n;

	printf("input an integer:");
	scanf("%d", &n);

	map1_2(n, &a, &b);

	printf("%d <--> (%d, %d)\n", n, a, b);
	
	return 0;
}

void map1_2(int n, int* a, int* b)
{
	int i;
	int d=0;
	int x=0,y=0;

	for(i=0; i<n-1; i++)
	{
	//	printf("%d <-> (%d, %d)\n", i+1, x, y);
		if(x==0&&y==0)
		{
			x++;
			d=0;
		}
		else
		{
			if(d==0)
			{
				if(x==0)
				{
					d=1;
					y++;
				}
				else
				{
					x--;
					y++;
				}			
			}
			else
			{
				if(y==0)
				{
					d=0;
					x++;
				}
				else
				{
					x++;
					y--;
				}
			}
		}
		
	}

	*a = x+1;
	*b = y+1;
}

