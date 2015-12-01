#!/bin/python

def isprime(n):
	if n<2:
		return False
	elif n==2:
		return True
	else:
		h = n/2+1
		for i in range(2, h):
			r = n%i
			if r==0:
				return False
		return True

n = input("input an integer:")
for i in range(1,n):
	b = isprime(i)
	if b:
		print(i),
		print(' is prime')
#	else:
#		print(' is composite')
