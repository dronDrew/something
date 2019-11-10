#include <iostream>
#include <Windows.h>

using namespace std;

void Inisial(unsigned char** ar, int col, int row) {
	int num = 192;
	int place = 0;
	for (int i = 0; i < col; i++) {
		for (int j = 0; j < row; j++,place++) {
			if (place == 4) {
				ar[i][j] = 165;
			} else if (place == 7) {
				ar[i][j] = 170;
			}
              else if (place == 11) {
                ar[i][j] = 178;
			}
              else if (place == 12) {
                ar[i][j] = 175;
			}
			  else if (place == 30) {
				num = 220;
				ar[i][j] = num;
				num += 2;
			}

			else
			{
				ar[i][j] = num;
				num++;
			}
			
		}
	}
}
void Print(unsigned char** ar, int col, int row) {
	for (int i = 0; i < col; i++) {
		for (int j = 0; j < row; j++) {
			cout << ar[i][j] << '\t';
		}
		cout << endl;
	}
}
void Inisial_back(unsigned char** ar, unsigned char** ar_1, int col, int row) {
	if (row < col) {
		int iter = 0;
		for (int i = 0, k = 0; i < col; i++) {
			for (int j = 0; j < row; j++, iter++) {
				if (iter == col) {
					iter = 0;
					++k;
				}
				if (i == 0) {
					ar[i][j] = ar_1[i][iter];
				}
				else {
					ar[i][j] = ar_1[k][iter];
				}

			}
		}
	}
	else {
		int iter = 0;
		for (int i = 0, k = 0; i < col; i++) {
			for (int j = 0; j < row; j++, iter++) {
				if (iter == col) {
					iter = 0;
					k++;
				}
				ar[i][j] = ar_1[k][iter];
			}
		}
	}
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int col{ 0 };
	int row{ 0 };
	setlocale(LC_ALL, "ukr");
	cout << "Enter how namy columns must be in your matrix to creating Ukraine alphabet\n";
	cin >> col;
	cout << "Enter how many rows must be in your matrix to creating Ukraine alphabet\n";
	cin >> row;
	if ((col * row) < 33 || (col * row) > 33)
	{
		cout << "Ukraine alfabet have 33 laters\n";
		return 0;
	}
	unsigned char** px = new unsigned char* [col];
	for (int i = 0; i < col; i++) {
		px[i] = new unsigned char[row];
	}

	Inisial(px, col, row);
	cout << "Ukraine Alphabet\n";
	Print(px, col, row);
	unsigned char** px_1 = new unsigned char* [row];
	for (int i = 0; i < row; i++) {
		px_1[i] = new unsigned char[col];
	}
	cout << endl;
	int col_1 = row;
	int row_1 = col;
	Inisial_back(px_1, px, col_1, row_1);
	cout << "Ukraine Alphabet after transponing\n";
	Print(px_1, col_1, row_1);


	for (int i = 0; i < row; i++) {
		delete[] px_1[i];
	}
	delete[] px_1;


	for (int i = 0; i < col; i++) {
		delete[] px[i];
	}
	delete[] px;

	return 0;
}
