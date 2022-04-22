#include <iostream>
using namespace std;

int great(int a, int b) {
	int c;
	c = a % b;
	while (c != 0) {
		a = b;
		b = c;
		c = a % b;
	}
	return b;
}

int least(int a, int b) {
	return (a * b) / great(a,b);
}

int main()
{
	int n1;
	int n2;

	cin >> n1 >> n2;

	if (n1 > n2) {
		cout << great(n1, n2) << endl;
		cout << least(n1, n2) << endl;
	}
	if (n1 < n2){
		cout << great(n2, n1) << endl;
		cout << least(n2, n1) << endl;
	}
}