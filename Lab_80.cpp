#include <iostream>
#include <string>

using namespace std;
int main()
{
	int Begin{ 0 };
	int End{ 0 };
	int Dif{ 0 };
	string Temp;
	cout << "Enter some prease \n";
	getline(cin, Temp);
	Temp += '\0';
	char *arr_char = new (nothrow) char[Temp.length()];
	if (arr_char == nullptr) {
		cout << "You Enter very long prase!!!\n";
		return 0;
	}
	for (int i = 0; i < Temp.length(); i++)
	{
		arr_char[i] = Temp[i];
		
	}
	cout << "Enter index symbol from wich you want to delete info in string(spaces counting too)\n";
	cin >> Begin;
	cout << "Enter index symbol to wich you want to delete info in string(spaces counting too)\n";
	cin >> End;
	Dif = End - Begin;
	int size = (Temp.length() - Dif) + 1;
	char* arr_char_temp = new (nothrow) char[size];
	if (!arr_char_temp) {
		cout << "You Enter very long prase!!!\n";
		return 0;
	}
	for (int i = 0, j=0; i < size; i++,j++)
	{
		if (j == Begin-1) {
			j = End;
		}
		arr_char_temp[i] = arr_char[j];

	}
	arr_char_temp[size - 1] = '\0';
	//cout << arr_char_temp << endl;
	delete[]arr_char;
	arr_char = arr_char_temp;
	arr_char_temp = nullptr;
	cout << arr_char<< endl;
	delete[]arr_char;

		return 0;
	}
	
	


