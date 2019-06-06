#include<iostream>
using namespace std;
int findNumberof1(int num)
{
	int ret=0;
	while (num)
	{
		if (num % 2 == 1)
		{
			ret++;
			num = num / 2;
		}
		else
		{
			num = num / 2;
		}
	}
	cout<<ret<<endl;
	return ret;
}
int main()
{
	int num;
	cin >> num;
	findNumberof1(num);
	system("pause");
	return 0;
}