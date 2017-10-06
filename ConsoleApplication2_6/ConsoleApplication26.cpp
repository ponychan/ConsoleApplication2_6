// ConsoleApplication26.cpp: 定义控制台应用程序的入口点。
//2.6.cpp将输入的一串数字反转各位后输出

#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	int n, media, newn = 0;
	cout << "Enter the number:";
	cin >> n;
	cout << "The number in reverse order is";
	do {
		media = n % 10;
		cout << media;
		n /= 10;
	} while (n != 0);
	cout << endl;
    return 0;
}

