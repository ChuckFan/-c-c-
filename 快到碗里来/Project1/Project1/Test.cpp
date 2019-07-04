//大数乘法，明显Ñ和 - [R的精度已经超出了内置类型的表示范围了
//要求n（1≤n≤2^ 128）和r（1≤r≤2^ 128），内置类型double大小足够
//当内置类型大小不满足时，应使用way1的大数乘除法
#include <iostream>
#include <string>
using namespace std;

string times628(string & str)
{
	string ret(str.length() + 3, 0);
	string str628 = "628";
	int strL = str.length();
	int retL = ret.length();
	int c = 0;

	for (int k = 2; k >= 0; --k)
	for (int i = strL - 1, j = retL + k - 3; i >= 0; --i, --j)
		ret[j] += (str[i] - '0') * (str628[k] - '0');

	for (int i = retL; i >= 0; --i)
	{
		ret[i] += c;
		c = ret[i] / 10;
		ret[i] = ret[i] % 10 + '0';
	}

	int index = 0;
	while (ret[index] == '0') ++index;

	return string(ret.begin() + index, ret.end() - 2);
}

int compare(string & a, string & b)
{
	if (a.length() != b.length())
		return (a.length() > b.length() ? 1 : -1);
	else
	{
		for (int i = 0; i < a.length(); ++i)
		if (a[i] == b[i]) continue;
		else return (a[i] > b[i] ? 1 : -1);
		return 0;
	}
}

int main()
{
	string n, r;
	while (cin >> n >> r)
	{
		r = times628(r);
		if (compare(n, r) == 1) cout << "No" << endl;
		else cout << "Yes" << endl;
	}

	return 0;
}
//WAY2:

#include <iostream>
using namespace std;
int main(){
	double n, r;
	while (cin >> n >> r){
		if (n>2 * r*3.1415)
			cout << "No" << endl;
		else
			cout << "Yes" << endl;
	}
}
