#!/bin/python

def maxcd(m, n):
	a = m%n
	if a == 0:
		return n;
	else:
		return maxcd(n, a)

n = input("input first integer:")
m = input("input second integer:")

b = maxcd(n, m)

print "max common divisor:", b

