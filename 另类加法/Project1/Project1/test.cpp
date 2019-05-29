#include<iostream>
using namespace std;
class UnusualAdd {
public:
	int addAB(int A, int B) {
		// write code here
		if (A == 0)
		{
			return B;
		}
		else if (B == 0)
		{
			return A;
		}
		else
		{
			int ret = A^B;
			int tmp = (A&B) << 1;
			return addAB(ret, tmp);
		}
	}
};
int main()
{
	UnusualAdd(S);
	int ret=S.addAB(3, 2);
	cout << ret << endl;
	system("pause");
	return 0;
}