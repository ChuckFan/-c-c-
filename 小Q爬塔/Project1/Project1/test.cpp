#include<iostream>
using namespace std;
int p[10005], t[10005];
int min(int a, int b)
{
	if (a < b)
	{
		return a;
	}
	return b;
}
int main()
{
	int n, m, x;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> x;
		p[i] = min(p[i - 1], t[i - 1]) + x;
		if (i == 1)continue;
		t[i] = min(p[i - 1], p[i - 2]);
	}
	cout << min(p[n], t[n]) << endl;
	system("pause");
	return 0;
}