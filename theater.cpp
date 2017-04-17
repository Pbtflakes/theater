/* A.J., Andrew, Matthew
 * Theater group project
 * Period 5 C++ */
#include <iostream>

using namespace std;

const int ROWS = 15, COLS = 30;
const bool DEBUG = true;

void	putSeats(char[][COLS]);
void	printSeats(char[][COLS]);
void	seatInput(char[][COLS]);

int main() {
	char seatChart[ROWS][COLS];

	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			seatChart[i][j] = '*';
		}
	}
	return 0;
}

/* Generic seating printer */
void printSeats(char chart[][COLS]) {
	cout << "\tSeats\n\t";
	for (int i = 1; i <= 30; i++) {
		cout << i % 10;
	}
	cout << endl;
	for (int i = 0; i < ROWS; i++) {
		cout << "Row " << i + 1 << '\t';
		for (int j = 0; j < COLS; j++) {
			cout << chart[i][j];
		}
		cout << endl;
	}
}

void seatInput(char seats[][COLS]) {
	printSeats(seats); /* Reduce clutter in main */
	short row, col;
	do {
		cout << "Row:\t";
		cin >> row;
		cout << "Seat:\t";
		cin >> col;
	} while (col < 1 || col > COLS || row < 1 || row > ROWS ||
			seats[row - 1][col - 1] == '#');
	seats[row - 1][col - 1] = '#';
}
