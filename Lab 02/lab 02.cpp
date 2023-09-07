// lab 02.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	float A;
	float B;
	float X;
	cout << "Hello, my name is Beth and I'm going to solve the equation:"<<endl;
	cout << "Ax+B=0" << endl;
	cout << "For x" << endl;
	cout << "Please enter a value for A: " << endl;
	cin >> A;
	cout << "Please enter a value for B: " << endl;
	cin >> B;
	X = -B/A;
	cout << "Solving" << A << "x +" << B <<  " = 0 for x" << endl;
	cout << "The answer is: x=" << X << endl;
}