# Problem C. Box Factory

# Problem
You own a factory with two assembly lines. The first assembly line makes boxes, and the second assembly line makes toys to put in those boxes. Each type of box goes with one type of toy and vice-versa.

At the beginning, you pick up a box from the first assembly line and a toy from the second assembly line. You then have a few options.

You can always throw out the box and pick up the next one.
You can always throw out the toy and pick up the next one.
If the box and toy are the same type, you can put the toy in the box, and send it out to customers.
You always pick boxes up in the order in which they are made, and similarly for toys. You know the order in which boxes and toys are made, and you want to plan out a strategy that will allow you to send as many boxed toys as possible to customers.
Warning: The two assembly lines make a lot of boxes and toys. However, they tend to make one kind of thing for a long period of time before switching.

# Input
The first line of the input gives the number of test cases, T. T test cases follow.

Each test case begins with a line contains two integers N and M. It is followed by a line containing 2 * N integers a1, A1, a2, A2, ..., aN, AN, and another line containing 2 * M integers b1, B1, b2, B2, ..., bM, BM.

This means that the first assembly line will make a1 boxes of type A1, then a2 boxes of type A2, etc., until it finishes with aN boxes of type AN. Similarly, the second assembly will make b1 toys of type B1, followed by b2 toys of type B2, etc., until it finishes with bM toys of type BM.

A toy can be matched with a box if and only if they have the same type number.

# Output
For each test case, output one line containing "Case #x: y", where x is the case number (starting from 1), and y is the largest number of boxed toys that you can send out to customers.

# Limits
- 1 ≤ T ≤ 100.
- 1 ≤ ai, bi ≤ 1016.
- 1 ≤ Ai, Bi ≤ 100.

## Small dataset
- 1 ≤ N ≤ 3.
- 1 ≤ M ≤ 100.

## Large dataset
- 1 ≤ N, M ≤ 100.

# Sample
## Input
    4
    3 3
    10 1 20 2 25 3
    10 2 30 3 20 1
    3 5
    10 1 6 2 10 1
    5 1 3 2 10 1 3 2 5 1
    3 5
    10 1 6 2 10 1
    5 1 6 2 10 1 6 2 5 1
    1 1
    5000000 10
    5000000 100

# Output
    Case #1: 35
    Case #2: 20
    Case #3: 21
    Case #4: 0

# Source
[Google Code Jam 2012 Round 1C Problem.C Box Factory](http://code.google.com/codejam/contest/1781488/dashboard#s=p2)
(c) 2008-2012 Google
