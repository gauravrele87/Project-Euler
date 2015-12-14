# -*- coding: utf-8 -*-

array = list()

with open('Problem18.txt','r') as file:
    for line in file:
        array.append([int(x) for x in line.split()])


#array = [[3],[7,4],[2,4,6],[8,5,9,3]]        
L = len(array)
for x in range(2,len(array)+1):
    for y in range(0,len(array[L-x])):
        array[L - x][y] += max((array[L-x+1][y]),(array[L-x+1][y+1]))
    print(array[L-x])  