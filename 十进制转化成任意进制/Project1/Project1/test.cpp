#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
	int m, n;
	cin >> m;
	cin >> n;
	vector<int>rem;
	string book = "0123456789ABCDEF";
	string ret;
	int flag = 1;
	if (m<0)
	{
		m = -m;
		flag = -1;
	}
	while (m >= n)
	{
		rem.push_back(m%n);
		m = m / n;
	}
	rem.push_back(m);
	for (int i = rem.size() - 1; i >= 0; i--)
	{
		ret.push_back(book[rem[i]]);
	}
	if (flag == -1)
	{
		cout << "-";
	}
	cout << ret;
	return 0;
}