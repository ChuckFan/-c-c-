#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
	string s;
	while (getline(cin, s)){
		vector<string> vct;
		string tmp;
		for (int i = 0; i < s.size(); i++){
			if (s[i] == '\"'){
				while (s[i + 2] != '\"'){
					tmp += s[i + 1];
					i++;
				}
				vct.push_back(tmp);
				tmp.clear();
				i += 3;
				continue;
			}
			else if (s[i] != ' '){
				tmp += s[i];
			}
			else if (s[i] == ' '){
				vct.push_back(tmp);
				tmp.clear();
			}
		}
		if (tmp.size() > 0){
			vct.push_back(tmp);
			tmp.clear();
		}
		cout << vct.size() << endl;
		for (int i = 0; i < vct.size(); i++){
			cout << vct[i] << endl;
		}
	}
	return 0;
}