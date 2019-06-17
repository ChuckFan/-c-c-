//#define  _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<string>
//using namespace std;
//int ABC(int a, int b)
//{
//	int ret = 0;
//	if (a <= b)
//	{
//		if (b%a == 0)
//		{
//			ret = a;
//		}
//		else
//		{
//			for (int i = a; i>0; i--)
//			{
//				if ((a%i == 0) && (b%i == 0))
//				{
//					ret = i;
//				}
//				else{};
//			}
//		}
//	}
//	else if (a>b)
//	{
//		if (a%b == 0)
//		{
//			ret = a;
//		}
//		else
//		{
//			for (int i = b; i>0; i--)
//			{
//				if ((a%i == 0) && (b%i == 0))
//				{
//					ret = i;
//				}
//				else{};
//			}
//		}
//	}
//	return ret;
//}
//int main()
//{
//	int a, n;
//	int b;
//	cin >> n >> a;
//	{
//		for (int i = 0; i<n; i++){
//			cin>>b;
//			if (b <= a)
//				a += b;
//			else
//				a += ABC(a, b);
//		}
//	}
//	cout << a << endl;
//	system("pause");
//	return 0;
//}

#include<iostream>
using namespace std;
int GCD(int a, int b){//辗转相除法，后附证明
	int temp;
	while (b){
		temp = b; b = a%b; a = temp;
	}
	return (a);
}
int main(){
	int n, c;
	while (cin >> n >> c){
		int i, temp;
		for (i = 0; i<n; i++){
			cin >> temp;
			if (c >= temp)
				c += temp;
			else
				c += GCD(c, temp);
		}
		cout << c << endl;
	}
}