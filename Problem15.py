# -*- coding: utf-8 -*-
"""
Created on Sun Dec 13 00:41:09 2015

@author: Gaurav
"""
import math
a = 20
b = 20

latticepath = math.factorial(a+b)/(math.factorial(a+b - a) * math.factorial(a))
print(latticepath)