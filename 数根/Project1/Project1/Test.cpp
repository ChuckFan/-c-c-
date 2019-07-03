// write your code here cpp
#include<iostream>
using namespace std;
int main()
{
	size_t n, ret = 0;
	cin >> n;
	if (n<=9)
	{
		ret = n;
		cout << ret << endl;
	}
	else
	{
		while (n>9)
		{
			int a = n % 10;
			ret = ret + a;
			n = n / 10;
			if (n <= 9)
			{
				ret = ret + n;
			}
		}
		cout << ret << endl;
	}
	system("pause");
	return 0;
}