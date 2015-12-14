# -*- coding: utf-8 -*-
"""
Created on Sun Dec 13 00:54:12 2015

@author: Gaurav
"""

units = ['','one','two','three','four','five','six','seven','eight','nine']
tens = ['twenty','thirty','forty','fifty','sixty','seventy','eighty','ninety']
tensUnits = ['ten','eleven','twelve','thirteen','fourteen','fifteen','sixteen','seventeen'
            ,'eighteen','nineteen']
hundred = ['one hundred','two hundred','three hundred','four hundred',
            'five hundred','six hundred','seven hundred','eight hundred',
            'nine hundred']
            
def counting(number):
    strNum = str(number)

    if(len(strNum)==4):
        return 'One Thousand'
    elif len(strNum) == 3:
        if strNum[1] == '0' and strNum[2] =='0':
            return hundred[int(strNum[0])-1]
        return hundred[int(strNum[0])-1]+' and '+ counting(int(strNum[1:3]))
    elif len(strNum) == 2:
        if strNum[0] == '1':
            return tensUnits[int(strNum[1])]
        return tens[int(strNum[0])-2]+' '+units[int(strNum[1])]
    else:
        return units[int(strNum[0])]
        
total= 0
for i in range(1,1001):
    num = counting(i)
    num = num.replace(' ','')
    print(num,i)
    total += len(num)
print(total)