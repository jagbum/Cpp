#include <iostream> 
using namespace std;

int main() {
	char ox[30];
	int score;
	int total;
	int num;
	
	cin >> num;

	score = 0;
	total = 0;

	for (int i = 0; i < num; i++) {
		cin >> ox;

		for (int n = 0; n < strlen(ox); n++) {
			if (ox[n] == 'o') {
				score++;
				total += score;
			}

			if (ox[n] == 'x') score = 0;
		}
		cout << total << endl;

		score = 0;
		total = 0;

	}

}