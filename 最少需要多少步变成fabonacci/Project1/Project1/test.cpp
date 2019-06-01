#include<iostream>
using namespace std;
int min(int a, int b)
{
	if (a >= b)
	{
		return b;
	}
	return a;
}
int main()
{
	int N;
	while (cin >> N)
	{
		int f0 = 0, f1 = 1, f, a, b;
		while (1)
		{
			f = f0 + f1;
			f0 = f1;
			f1 = f;
			if (f < N)
			{
				a = N - f;
			}
			else
			{
				b = f - N;
				break;
			}
		}
		cout << min(a, b) << endl;
	}
	return 0;
}