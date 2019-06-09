#include<iostream>
#include<vector>
using namespace std;
int help(int n)
{
	if (n == 1 || n == 2)
		return 1;
	return help(n - 1) + help(n - 2);
}
int help2(int n)
{
	int a = 1;
	int b = 1;
	int c;
	for (int i = 2; i<n; i++)
	{
		c = a + b;
		a = b;
		b = c;
	}
	return c;
}
int main()
{
	int n;
	while (cin >> n)
	{
		if (n > 2)
		{
			int ret = help2(n);
			cout << ret << endl;
		}
		else
		{
			int ret = help(n);
			cout << ret << endl;
		}


	}

}
