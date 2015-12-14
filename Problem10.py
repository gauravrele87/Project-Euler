# -*- coding: utf-8 -*-
"""
Created on Sat Dec 12 21:00:34 2015

@author: Gaurav
"""
import math

def isPrimes(number):
    if number == 2:
        return True
    elif number%2 == 0:
        return False
    else:
        for x in range(3,int(math.sqrt(number))+1,2):
            if number%x == 0:
                return False
    return True

def getPrimes(number):
    while True:
        if isPrimes(number):
            yield number
        number+=1
        

def sumOfPrimes():
    total= 2
    for number in getPrimes(3):
        if number < 2000000:
            total += number
            #print(number)
        else:
            return total
            
total = sumOfPrimes()
print(total)