#!/bin/python

def map_1_1(n):
	x = 0
	y = 0
	d = 0
	for i in range(0,n-1):
		#print i+1, x+1, y+1
		if x==0 and y==0:
			x=x+1
			d=0
		else:
			if d==0:
				y=y+1
				if x==0:
					d=1
				else:
					x=x-1
			else:
				x=x+1
				if y==0:
					d=0
				else:
					y=y-1
					
	return (x+1, y+1)


n = input("input an integer:")
(a, b) = map_1_1(n)
print n, a, b

