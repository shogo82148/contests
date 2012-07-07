#!/usr/bin/env python
# -*- coding:utf-8 -*-

while True:
    n = int(raw_input())
    if n==0:
        break

    members = []
    for i in range(n):
        members.append(set(raw_input().split()[1:]))

    leak = set(raw_input().split()[1:])

    answer = [i+1 for i, member in enumerate(members) if leak<=member]
    if len(answer)==1:
        print answer[0]
    else:
        print -1
