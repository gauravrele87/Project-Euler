
#include "stdafx.h"
#include<algorithm>
#include <iostream>
using namespace std;
#include<ctime>

int gcd(int num1, int num2);

int _tmain(int argc, _TCHAR* argv[])
{

	__int64 lcm=1;
	for (int i = 1; i <= 1qwe dr00; i++){
		//lcm = (lcm*i);
		int x = gcd(lcm, i);
		if (i == 20){
			cout << x << " and " << lcm << "and multiply" << lcm*i <<endl;
		}
		lcm = lcm*i / x;

	}
	cout << lcm;
	system("pause");
	return 0;
}

int gcd(int num1, int num2){
	int greatest = 1;
	for (int i = 1; i <= min(num1, num2); i++){
		if ((num1% i == 0 )& (num2%i ==0)){
			greatest = i;
		}
		if (i == 20){
			cout << greatest << endl;
		}
	}
	return greatest;
}