// array_shift.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

/*void func_shift(int** px, int line, int row, int shift, int side) {
	switch (side)
	{
	case 1 :
		while (shift > 0) {
			int temp = px[line - 1][row - 1];
			for (int i = line - 1; i >= 0; i--) {
				for (int j = row - 1; j >= 0; j--) {
					if (j == 0 && i > 0) {
						px[i][j] = px[i - 1][row - 1];
					}
					else {
						px[i][j] = px[i][j - 1];
					}

				}
			}
			px[0][0] = temp;
			--shift;
		}
		break;
	case 2 :
		while (shift > 0) {
			int temp = px[0][0];
			for (int i = 0; i < line; i++) {
				for (int j = 0; j < row; j++) {
					if (j == row - 1 && i < line - 1) {
						px[i][j] = px[i + 1][0];
					}
					else {
						px[i][j] = px[i][j + 1];

					}

				}
			}
			px[line - 1][row - 1] = temp;
			--shift;
		}
		break;
	case 3 :
		while (shift > 0) {
			int temp = px[0][0];
			int j = 0;

			while (j < row) {
				int i = 0;
				for (; i < line; i++) {
					if (j <= row - 1 && i == line - 1) {
						px[i][j] = px[0][j + 1];
					}
					else {
						px[i][j] = px[i + 1][j];
					}
				}
				++j;

			}
			px[line - 1][row - 1] = temp;
			--shift;

		}
		break;
	case 4 :
		while (shift > 0) {
			int temp = px[line - 1][row - 1];
			int j = row - 1;

			while (j >= 0) {
				int i = line - 1;
				for (; i >= 0; i--) {
					if (j >= 0 && i == 0) {
						px[i][j] = px[line - 1][j - 1];
					}
					else {
						px[i][j] = px[i - 1][j];
					}
				}
				--j;
			}
			px[0][0] = temp;
			--shift;

		}
		break;
	}
}
*/
void func_shift(int** px, int line, int row, int shift, int side) {
	while (shift>0) {
		for (int i = 0; i < line; i++)
		{
			int temp = pc[i][row - 1];
			for (int j = row-1; j >=0; j--)
			{
				if (j == 0) {
					px[i][j] = temp;
				}
				else
				{
					px[i][j] = px[i][j - 1];
				}

			}

		}
	}
}

int main()
{
	int line{ 0 };
	int row{ 0 };
	int shift{ 0 };
	int side{ 0 };
	cout << "Enter how many lines must have array" << endl;
	cin >> line;
	cout << "Enter how many rows must have array" << endl;
	cin >> row;
	int** px = new int* [line];
	for (int i = 0; i < line; i++) {
		px[i] = new int[row];
	}
	for (int i = 0; i < line; i++) {
		for (int j = 0; j < row; j++) {
			px[i][j] = rand() % 50;
		}
	}
	cout << "\tMATRIX\n";
	for (int i = 0; i < line; i++) {
		for (int j = 0; j < row; j++) {
			cout << px[i][j] << '\t';
		}
		cout << endl;
	}
	cout << "Enter shift\n";
	cin >> shift;
	if (shift > row * line)
	{
		cout << "the Efect of this shifting you can get the same if you enter less number \n";
		return 0;
	}
	cout << "Press 1 to make shift to right side\nPress 2 to make shift to left side\nPress 3 to make shift to Up\nPress 4 to make shift to down\n ";
	cin >> side;
	if (side>4||side<=0)
	{
		cout << "You enter wrong menu item\n";
		return 0;
	}
	func_shift(px,line,row,shift,side);
	cout << endl;
	cout <<"\tMATRIX after shifting\n";
	for (int i = 0; i < line; i++) {
		for (int j = 0; j < row; j++) {
			cout << px[i][j] << '\t';
		}
		cout << endl;
	}

	for (int i = 0; i < line; i++) {
		delete[] px[i];
	}
	delete[] px;
	return 0;
}

