#include <iostream>
#include <string>
using namespace std;

int main() {
	while (true) {
		char num[20];
		string end("0");

		cin >> num;

		if (num == end) {
			return 0;
		}

		if (strlen(num) == 1)
			cout << "Yes" << endl;

		if (strlen(num) == 2) {
			if (num[0] == num[1]) cout << "Yes" << endl;
			else cout << "No" << endl;
		}

		if (strlen(num) == 3) {
			if(num[0] == num[2]) cout << "Yes" << endl;
			else cout << "No" << endl;
		}

		if (strlen(num) == 4) {
			if(num[0] == num[3] && num[1] == num[2]) cout << "Yes" << endl;
			else cout << "No" << endl;
		}

		if (strlen(num) == 5) {
			if (num[0] == num[4] && num[1] == num[3]) cout << "Yes" << endl;
			else cout << "No" << endl;
		}
	}
}