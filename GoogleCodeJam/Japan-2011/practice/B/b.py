#!/usr/bin/env python
# -*- coding:utf-8 -*-

def factor(x, P=2):
	s = set()
	i = 2
	while x!=1:
		if x % i == 0 and i>=P:
			s.add(i)
		while x % i == 0:
			x /= i
		i = i + 1
	return s
	
def add(x):
	group[x] = no
	fac = factors[x]
	#print x,
	for i in range(A, B+1):
		if len(fac&factors[i])!=0 and i not in group:
			add(i)

C = input()
for NO in range(1,C+1):
	line = raw_input().rstrip()
	(A, B, P) = [int(s) for s in line.split(' ')]

	factors = {}
	for x in range(A, B+1):
		factors[x] = factor(x, P)
	
	no = 0
	group = {}
	for x in range(A, B+1):
		if x in group:
			continue
		#print no,":",
		add(x)
		no += 1
		#print
	
	print "Case #%d: %d" % (NO, no)
