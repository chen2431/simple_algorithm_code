#!/bin/python

import os
ls = os.linesep
rlt = []

def move(n, s, d):
	s = "move ", n," from ", s, "to",d
	print s
	rlt.append(s)

def hannoi(n, s, t, d):
	if n==1:
		move(1,s,d)
	else:
		hannoi(n-1, s, d, t)
		move(n,s,d)
		hannoi(n-1, t, s, d)

n = input("input an interger large than 0:")
hannoi(n, 'a','b','c')

f = open(r'.\hannio_python.txt','w')
f.writelines(['%s%s'%(x,ls) for x in rlt])
f.close()

