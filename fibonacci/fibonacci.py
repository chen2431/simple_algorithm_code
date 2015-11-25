#!/bin/python

def fibonacci(n):
	if n>2 :
		return fibonacci(n-1)+fibonacci(n-2)
	else :
		return 1

n=input("input an integer large than 0:")
rlt = fibonacci(n)
print rlt
