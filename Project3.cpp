// ConsoleApplication6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<algorithm>
#include <iostream>
using namespace std;

__int64 primefactor(__int64, __int64);
__int64 getLargestPrime(__int64);

int _tmain(int argc, _TCHAR* argv[])
{
	__int64 prime=0;
	__int64 number = 600851475143;
	prime = getLargestPrime(number);
	//prime =  primefactor(number,2);
	cout << prime << endl;
	system("pause");
	return 0;
}


__int64 getLargestPrime(__int64 number) {
	__int64 factor = number; // assumes that the largest prime factor is the number itself
	for (__int64 i = 2; (i*i) <= number; i++) { // iterates to the square root of the number till it finds the first(smallest) factor
		if (number % i == 0) { // checks if the current number(i) is a factor
			factor = max(i, number / i); // stores the larger number among the factors
			break; // breaks the loop on when a factor is found
		}
	}
	if (factor == number) // base case of recursion

		return number;
	return getLargestPrime(factor); // recursively calls itself
}

/*__int64 primefactor(__int64 number, __int64 factor){
	if (number == factor){
		cout << "factor here is " << factor << endl;
		return factor;
	}
	if (number%factor == 0){
		number = number / factor;
		cout << number << "and factor = " << factor << endl;
		return primefactor(number , factor);
	}
	if (number % 2 == 0)
	{
		return primefactor(number/2,factor);
	}
	if (factor % 2 == 0){
		return primefactor(number, factor + 1);
		//cout << "hello" << factor << endl;
	}
	else{
		if ((factor % 3)!=0 & (factor % 5)!=0 &(factor % 7)!=0 & (factor %11)!=0 & (factor%13)!=0 & (factor%17)!=0){
			cout << factor << "+11" << endl;
			return primefactor(number, factor + 19);
		}	
		else{
			return primefactor(number, factor + 2);
		}
	}
		

	
}*/