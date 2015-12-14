# -*- coding: utf-8 -*-
"""
Created on Sun Dec 13 00:20:15 2015

@author: Gaurav
"""
import time

start = time.time()

def Collatz(number):
    count = 1
    while number != 1:
        if number%2 == 0:
            number = number/2
            count +=1
        else:
            number = 3*number + 1
            count+=1
    return count+1
    
largestCount = 0
largestNum = 0

for x in range(2,1000000):
    count = Collatz(x)
    if count > largestCount:
        largestCount = count
        largestNum = x

print(largestNum)
end = time.time()

print(end - start)