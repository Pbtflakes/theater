/* A.J., Andrew, Matthew
 * Theater group project
 * Period 5 C++ */
#include <iostream>

using namespace std;

const int ROWS = 15, COLS = 30;
const bool DEBUG = true;

void	putseats(char[][COLS]);
void	printseats(char[][COLS]);

int main() {
	char seatchart[ROWS][COLS];
	int rowprice[ROWS];

	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			seatchart[i][j] = '*';
		}
	}

	printseats(seatchart);
	
	return 0;
}

void printseats(char chart[][COLS]) {
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			cout << chart[i][j];
		}
		cout << endl;
	}
}
