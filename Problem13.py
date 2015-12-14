# -*- coding: utf-8 -*-

array = list()

with open('Problem13.txt','r') as file:
    for line in file:
        array.append(int(line))

tot = sum(array)
print(str(tot)[:10])
