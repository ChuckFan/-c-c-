#include<iostream>
using namespace std;
class Parenthesis {
public:
	bool chkParenthesis(string A, int n)
	{
		int left = 0;
		for (int i = 0; i < n; i++)
		{
			if (A[i] == '(')
				left++;
			else if (A[i] == ')')
			{
				if (left <= 0)
					return false;
				else
					left--;
			}
			else
			{
				if (left <= 0)
					return false;
			}
		}
		if (left == 0)
			return true;
		return false;
	}
};
int main()
{
	Parenthesis p;
	cout << p.chkParenthesis("(())())",7) << endl;
	system("pause");
	return 0;
}