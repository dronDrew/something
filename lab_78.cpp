#include <iostream>
#include <string>
using namespace std;
int main()
{
	int begin_sub{ 0 };
	int end_sub{ 0 };
	int Leng_sub{ 0 };
	char Prease[255]{};
	cout << "Please Enter some Prease(limin is 255 symbols):\n";
	string Temp;
	getline( cin,Temp);
	Temp += '\0';
	strcpy_s(Prease,Temp.c_str());
	cout << Prease << endl;
	cout << "Please enter number of elemen from wich you want to get substring(spaces included)\n";
	cin >> begin_sub;
	if (begin_sub >= Temp.length()) {
		cout << "it`s impossible to create ther no symbols\n ";
		return 0;
	}
	cout << "Please enter number of elemen to wich you want to get substring(spaces included)\n";
	cin >> end_sub;
	Leng_sub = end_sub - begin_sub+1 ;
	char *subPrease = new (nothrow) char[Leng_sub];
	if (!subPrease) {
		cout << "Problem whith creating substring\n";
		return 0;
	}
	for (int i = 0 ,j=begin_sub-1; i < Leng_sub; i++,j++) {
		subPrease[i] = Prease[j];
		cout << subPrease[i];
	}
	delete[] subPrease;




	
}
