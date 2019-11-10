#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct student
{
	string info;
	int num_group{};
	unsigned char tests : 8;
	void Inisial(string temp, int num) {
		info = temp;
		num_group = num;
		tests = 0;
	}

};
void test_inisial(student& test);
void Create(student*& a, int& iter) {
	student* temp = new student[iter];
	string temp1;
	int choose{ 0 };
	for (int i = 0; i < iter; i++)
	{
		temp[i].info = a[i].info;
		temp[i].num_group = a[i].num_group;
		temp[i].tests = a[i].tests;
	}
	delete[]a;
	a = new student[iter + 1];
	for (int i = 0; i < iter; i++)
	{
		a[i].info = temp[i].info;
		a[i].num_group = temp[i].num_group;
		a[i].tests = temp[i].tests;
	}
	delete[]temp;
	cout << "Enter Name and Sername of student\n";
	cin.get();
	getline(cin, temp1);
	cout << "Enter Number of group \n";
	cin >> choose;
	a[iter].Inisial(temp1, choose);
	test_inisial(a[iter]);
	++iter;
}
void test_inisial(student& test) {
	unsigned int result{ 3 };
	for (int i = 0; i < 8; i++)
	{
		cout << "Enter rusult of test " << i + 1 << " for student " << test.info << endl;
		while (result > 1 || result < 0)
		{
			cout << " Press 1 to Pass and 0 if Fail\n";
			cin >> result;
		}
		test.tests ^= (result << i);
		result = 3;
	}

}

void test_enc(unsigned char controll) {
	for (int i = 7; i >= 0; i--)
	{
		((controll >> i) & 0x01) ? cout << 1 : cout << 0;
	}
	cout << endl;
}
int main()
{
	ifstream from;
	ofstream to;
	student* parr;
	char tmp2[256];
	string temp ="carefull";
	unsigned char wh{ 0 };
	int numb{ 0 };
	unsigned char result = 0;
	unsigned char numb1 = 0;
	bool menu_run = true;
	int choose{ 0 };
	int iter = 0;
	parr = new (nothrow) student[iter + 1];
	if (parr == nullptr) {
		cout << "Problem with memory" << endl;
		return 0;
	}
	from.open("Grade.txt");
	if (!from.is_open()) {
		cout << "You ran this program at first it automaticly create your data base dont wory!!\n" << endl;
	}
	else
	{
		while (!from.eof()) {
			if (iter == 0)
			{
				getline(from, temp);
				from >> numb;
				from >> wh;
				if (temp == "carefull"|| temp == "") {
					break;
				}
				parr[iter].info = temp;
				temp = "carefull";
				parr[iter].num_group = numb;
				parr[iter].tests = wh;
				++iter;
			}
			else {
				student* temp1 = new student[iter];
				for (int i = 0; i < iter; i++)
				{
					temp1[i].info = parr[i].info;
					temp1[i].num_group = parr[i].num_group;
					temp1[i].tests = parr[i].tests;
				}
				delete[]parr;
				parr = new student[iter + 1];
				for (int i = 0; i < iter; i++)
				{
					parr[i].info = temp1[i].info;
					parr[i].num_group = temp1[i].num_group;
					parr[i].tests = temp1[i].tests;
				}
				delete[]temp1;
				from.get();
				getline(from, temp);
				from >> numb;
				from >> wh;
				if (temp == "carefull"|| temp == "") {
					temp1 = new student[iter];
					for (int i = 0; i < iter; i++)
					{
						temp1[i].info = parr[i].info;
						temp1[i].num_group = parr[i].num_group;
						temp1[i].tests = parr[i].tests;

					}
					delete[]parr;
					parr = new student[iter];
					for (int i = 0; i < iter; i++)
					{
						parr[i].info = temp1[i].info;
						parr[i].num_group = temp1[i].num_group;
						parr[i].tests = temp1[i].tests;
					}
					delete[]temp1;
					break;
				}
				parr[iter].info = temp;
				temp = "carefull";
				parr[iter].num_group = numb;
				parr[iter].tests = wh;
				++iter;
				
			}
		}

	}
	from.close();

	while (menu_run)
	{
		cout << "Press 1 to create a student\t Press 2  to see who pass exam or tests\t Press 3 to see who fail exam or tests\n Press 0 to Exit\n";
		cin >> choose;
		switch (choose)
		{
		case 1:
			to.open("Grade.txt");
			if (iter == 0) {
				choose = 0;
				cout << "Enter Name and Sername of student\n";
				cin.get();
				getline(cin, temp);
				cout << "Enter Number of group \n";
				cin >> choose;
				parr[iter].Inisial(temp, choose);
				test_inisial(parr[iter]);
				to << parr[iter].info << endl;
				to << parr[iter].num_group << endl;
				to << parr[iter].tests << endl;
				++iter;
				to.close();
			}
			else
			{
				Create(parr, iter);
				for (int i = 0; i < iter; i++)
				{
					to << parr[i].info << endl;
					to << parr[i].num_group << endl;
					to << parr[i].tests << endl;
				}
				to.close();
			}

			break;
		case 2:
			if (iter == 0)
			{
				cout << "no info about student\n";
				break;
			}
			for (int i = 0; i < iter; i++)
			{
				cout << "The student " << parr[i].info << " from group " << parr[i].num_group << " Have next Grade: " << endl;
				for (int j = 0; j < 8; j++)
				{
					if (j==0) {
						result = ((parr[i].tests << 7));
						if ((result >> 7)) {
							cout << " Exam or Test #" << j + 1<<" Pass "<<endl;
						}
					}
					else
					{
						numb1 = (parr[i].tests>>j);
						result = (numb1 << 7);
						if ((result >> 7)) {
							cout << " Exam or Test #" << j + 1 << " Pass " << endl;
						}
					}

				}

			}
			break;
		case 3:
			if (iter == 0)
			{
				cout << "no info about student\n";
				break;
			}
			for (int i = 0; i < iter; i++)
			{
				cout << "The student " << parr[i].info << " from group " << parr[i].num_group << " Have next Grade: " << endl;
				for (int j = 0; j < 8; j++)
				{
					if (j == 0) {
						result = ((parr[i].tests << 7));
						if (!(result >> 7)) {
							cout << " Exam or Test #" << j + 1 << " Fail " << endl;
						}
					}
					else
					{
						numb1 = (parr[i].tests >> j);
						result = (numb1 << 7);
						if (!(result >> 7)) {
							cout << " Exam or Test #" << j + 1 << " Fail " << endl;
						}
					}

				}

			}
			break;
		case 0:
			cout << "Bye hame a nice day\n";
			menu_run = false;
			break;
		default:
			choose = 0;
			cout << "Please enter corect menu item!";
			break;
		}
	}
	delete[]parr;
}

