# -*- coding: utf-8 -*-
"""
Created on Sat Dec 12 23:40:43 2015

@author: Gaurav
"""
import math

def sumOfNumbers(number):
    while True:
        yield number*(number+1)/2
        number+=1
        
def numOfDivisors():
    for number in sumOfNumbers(5):    
        divisors = list()
        for i in range(1,int(math.sqrt(number)+1)):
            if number%i == 0:
                divisors.append(i)
                divisors.append(number/i)
                if(len(divisors)>500):
                    return number

num = numOfDivisors()
print(num)
    
