#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
int main() {
	int t;
	char str[1005];
	scanf("%d%*c", &t);
	while (t--) {
		gets(str);
		int i = 0;
		while (str[i] == '_')
			i++;
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		printf("%c", str[i]);
		for (i++; str[i]; i++) {
			if (str[i] != '_') {
				if (str[i - 1] == '_'  && str[i] >= 'a' && str[i] <= 'z')
					str[i] -= 32;
				if (str[i - 1] != '_' && str[i] >= 'A' && str[i] <= 'Z')
					str[i] += 32;
				printf("%c", str[i]);
			}
		}
		printf("\n");
	}
	return 0;
}
