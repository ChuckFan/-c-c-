////i am chuck->chuck am i
#include<iostream>
#include<string>
#include<algorithm>
//using namespace std;
//int main()
//{
//	string s;
//	getline(cin,s);
//	reverse(s.begin(), s.end());
//	auto start = s.begin();
//	while (start != s.end())
//	{
//		auto end = start;
//		while (end != s.end() && (*end != ' '))
//		{
//			end++;
//		}
//			reverse(start, end);
//		if (end != s.end())
//			start = end + 1;
//		else		
//			start = end;		
//	}
//	cout << s;
//	system("pause");
//	return 0;
//}

//判断标号的二叉树的最近公共祖先
//class LCA {
//public:
//	int getLCA(int a, int b) {
//		// write code here
//		while (a != b)
//		{
//			if (a>b)
//			{
//				a /= 2;
//			}
//			else
//			{
//				b /= 2;
//			}
//		}
//		return a;
//	}
//};

//求一个byte数字对应的二进制数字中1的最大连续数，
//例如3的二进制为00000011，最大连续2个1
//#include<iostream>
//#include<algorithm>
//#include<string>
//using namespace std;
//int main()
//{
//	int n;
//	int count = 0; int sumax = 0;
//	while (cin >> n)
//	{
//		int count = 0; int sumax = 0;
//		while (n)
//		{
//			if (n & 1)
//			{
//				++count;
//				sumax = max(count, sumax);
//				n = n >> 1;
//			}
//			else
//			{
//				count = 0;
//				n = n >> 1;
//			}
//		}
//		cout << sumax << endl;
//	}
//	return 0;
//}
    
//int main()
//{
//	//LCA A;
//	//A.getLCA(5, 6);
//	return 0;
//}