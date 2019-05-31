#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

bool longer(const string &x, const string &y) {
	return x.length() < y.length();
}

bool bigger(const string &x, const string &y) {
	return x < y;
}

void display(vector<string> const &x) {
	for (const string &s : x) {
		cout << s << endl;
	}
	cout << endl;
}

int main() {
	vector<string> a, b, c;
	int n;
	cin >> n;
	string x;
	for (int i = 0; i < n; i++) {
		cin >> x;
		a.push_back(x);
		b.push_back(x);
		c.push_back(x);
	}
	sort(b.begin(), b.end(), longer);
	sort(c.begin(), c.end(), bigger);
	//    cout << "before sort" << endl;
	//    display(a);
	//    cout << "sort by length" << endl;
	//    display(b);
	//    cout << "sort by dict" << endl;
	//    display(c);
	bool length = a == b;
	bool dict = a == c;
	if (length && dict) {
		cout << "both";
	}
	else if (length) {
		cout << "lengths";
	}
	else if (dict) {
		cout << "lexicographically";
	}
	else {
		cout << "none";
	}
	return 0;
}
