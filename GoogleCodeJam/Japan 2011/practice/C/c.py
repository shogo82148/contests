#!/usr/bin/env python
#-*- coding:utf-8 -*-

T = input()
for NO in range(T):
	R, k, N = [int(s) for s in raw_input().rstrip().split(' ')]
	glist = [int(s) for s in raw_input().rstrip().split(' ')]
	
	Y = 0
	for _ in range(R):
		g = []
		while len(glist)>0 and sum(g)+glist[0]<=k:
			g.append(glist.pop(0))
		#print g
		Y += sum(g)
		glist.extend(g)
	
	print "Case #%d: %d" % (NO+1, Y)
