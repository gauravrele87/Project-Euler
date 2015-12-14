// ConsoleApplication6.cpp : Defines the entry point for the console application.
A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
Find the largest palindrome made from the product of two 3-digit numbers.



#include "stdafx.h"
#include<algorithm>
#include <iostream>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	__int64 largest = 0;
	__int64 product = 0;
	int sixth = 0, fifth = 0, fourth = 0, third = 0, second = 0, first = 0,zero =0;
	for (int i = 100; i < 1000; i++){
		for (int j = i; j < 1000; j++){
			product = i*j;
			fifth = product /100000;
			product = product % 100000;
			fourth = product / 10000;
			product = product % 10000;
			third = product / 1000;
			product = product % 1000;
			second = product / 100;
			product = product % 100;
			first = product / 10;
			product = product % 10;
			zero = product;
			//cout << i*j<< " " << fifth << " " << fourth << " " << third << " " << second << " " << first << " " << zero << " " << endl;
			if (fifth == zero & fourth == first && third == second){
				if (largest < i*j){
					largest = i*j;
				}
			}
		}
	}//906609
	cout << largest<< "fifth = "<<fifth;
	system("pause");
	return 0;
}

