#!/bin/python
import math

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

def isprime_ex1(x):
	if x<2: return False
	if x==2:return True

	s = math.sqrt(x)
	m = int(s+1)
	t = range(2, m)
	#print t
	for i in t:
		if x%i==0:
			return False

	return True


n = input("input an integer:")
a = range(2, n)
o = filter(isprime_ex1, a)

print o

#for i in range(1,n):
#	b = isprime_ex1(i)
#	if b:
#		print(i),
#		print(' is prime')
#	else:
#		print(' is composite')
