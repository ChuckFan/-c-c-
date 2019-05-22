#include<iostream>
#include<vector>
#include<stdlib.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; ++i)
		cin >> v[i];
	int m = 1;
	int b = 0;
	for (int i = 0; i < n; ++i)
	{
		if (i + 1 < n && v[i + 1] == v[i])
			continue;
		else if (i + 1 < n && v[i + 1] > v[i])
		{
			if (b == 2)
			{
				++m;
				b = 0;
			}
			else b = 1;
		}
		else if (i + 1 < n && v[i + 1] < v[i])
		{
			if (b == 1)
			{
				++m;
				b = 0;
			}
			else b = 2;
		}
	}
	cout << m;
	system("pause");
	return 0;
}