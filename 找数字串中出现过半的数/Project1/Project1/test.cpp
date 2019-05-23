#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	char str1[100] = { 0 };
	cin >> str1;
	int long_str1 = strlen(str1);
	int half = long_str1 / 2;
	int count;
	for (int i = 0; i<10; i++)
	{
		count = 0;
		for (int j = 0; j<long_str1; j++)
		{
			if (str1[j] == i)
			{
				count++;
				if (count >= half)
				{
					cout << i << endl;
				}
			}
		}
		return i;
	}
	system("pause");
}