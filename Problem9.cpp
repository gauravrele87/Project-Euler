// ConsoleApplication6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<algorithm>
#include <iostream>
#include<math.h>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	for (int i = 1; i <= 500; i++){
		for (int j = i; j <= 500; j++){
			for (int k = j; k <= 500; k++){
				if (i + j + k == 1000 && (pow(i, 2) + pow(j, 2)) == pow(k, 2)){
					cout << i << " " << j << " " << k << " " << i*j*k;
				}
			}
		}
	}

	/*for (int i = 1; i < 100; i++){
		cout << "hello";
		if (i * 12 == 1000){
			cout << "hello";
			cout << (i * 60);
		}
	}*/
	system("pause");
	return 0;
}

