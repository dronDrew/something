#include <iostream>

using namespace std;

void Inisial(int **arr,int col,int row) {
	for (int i = 0; i < col; i++)
	{
		for (int j = 0; j < row; j++)
		{
			arr[i][j] = rand() % 100;
		}

	}
}
void Print(int** arr, int col, int row) {
	for (int i = 0; i < col; i++)
	{
		for (int j = 0; j < row; j++)
		{
			cout << arr[i][j] << '\t';
		}
		cout << endl;
	}
}
void Multi(int **&fin, int	**first,int **second, int col,int row) {
	for (int i = 0; i < col; i++) {
		for (int j = 0; j < row; j++) {
			int	k = i;
			while (k < row) {
				if (k == i) {
					fin[i][j] = first[i][k] * second[k][j];
					++k;
				}
				else {
					fin[i][j] += first[i][k] * second[k][j];
					++k;
				}
				
			}
		}
	}
}

int main()
{
	int col1{ 0 }, col2{ 0 };
	int row1{ 0 }, row2{ 0 };
    cout << "Enter how many columns must have first array\n";
	cin >> col1;
	cout << "Enter how many rows must have first array\n";
	cin >> row1;
	col2 = row1;
	cout << "Enter how many rows must have second array\n";
	cin >> row2;
	int** first = new int* [col1];
	for (int i = 0; i < col1; i++)
	{
		first[i] = new int[row1];

	}
	int** second = new int* [col2];
	for (int i = 0; i < col2; i++)
	{
		second[i] = new int[row2];

	}
	int** finall = new int* [col1];
	for (int i = 0; i < col1; i++)
	{
		finall[i] = new int[row2];
	}
	Inisial(first, col1, row1);
	Inisial(second, col2, row2);
	cout << "First matrix" << endl;
	Print(first, col1, row1);
	cout << "Second matrix" << endl;
	Print(second, col2, row2);
	Multi(finall, first, second, col1, row2);
	cout << "Finall matrix" << endl;
	Print(finall, col1, row2);
	for (int i = 0; i < col1; i++)
	{
		delete[] first[i];
		delete[] finall[i];
	}
	for (int i = 0; i < col2; i++)
	{
		delete[] second[i];
	}
	delete[]first;
	delete[]second;
	delete[] finall;
}

