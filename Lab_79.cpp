#include <iostream>
#include <string>

using namespace std;

int main()
{
	int leng{ 0 };
	int i{ 0 };
	string Temp;
	char Mass[1000];
	cout << "Enter prase maximum leng is 999 symbols in array\n";
	getline(cin, Temp);
	if (Temp.length() >= 1000) {
		cout << "Your prease longer then array\n";
		return 0;
	}
	Temp += '\0';
	strcpy_s(Mass, Temp.c_str());
	while (Mass[i] != '\0')
	{
		i++;
		leng++;
	}
	cout<<"You enter " << leng <<" Symbols"<< endl;
	cout << "The array have " <<1000-leng <<" free plase for inputing chars"<< endl;
}
