#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	int A, B, C, D;
	int a = 0, b = 0, c = 0, d = 0;
	//cout<<"输入A-B"<<endl;
	cin >> A >> B >> C >> D;
	a = A; b = B; c = C; d = D;
	//cout<<"输入B-C"<<endl;
	//cout<<"输入A+B"<<endl;
	//cout<<"输入B+C"<<endl;
	A = (A + C) / 2;
	B = (B + D) / 2;
	C = D - B;
	if ((a == A - B) && (b == B - C) && (c == A + B) && (d == B + C))
	{
		cout << A << ' ';
		cout << B << ' ';
		cout << C << endl;
	}
	else
	{
		cout << "No" << endl;
	}
	system("pause");
	return 0;
}