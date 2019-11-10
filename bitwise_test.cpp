#include <iostream>
#include <string>


using namespace std;

struct student
{
	string Info_student;
	int course;
	unsigned char test : 6;
	void Construct(string Info,int course) {
		Info_student = Info;
		this ->course = course;
		test = 0;
	}
	void Show_bit() {
		for (int i = 7; i >= 0; i--)
		{
			cout << ((this->test >> i)&0x01);
		}
		cout << endl;
	}
};
void Test_result(student *&arr, int stud) {
	int result{ 2 };
	for (int i = 0; i < stud; i++)
	{
		for (int j = 0; j < 6;j++) {
			while (result<1||result<0)
			{
				cout << "Enter result for test " << j + 1 << " for student " << arr[i].Info_student << " Press 1 if pass and 0 if fail\n";
				cin >> result;
			}
			arr[i].test ^= result << j;
		}
	}

}

int main()
{
	int stud{ 0 };
    cout << "Hi i am class-journal!\n Please Enter how many studint do you Have \n";
	cin >> stud;
	student *arr = new (nothrow) student[stud];
	if (arr == nullptr) {
		cout << "error no memory to work\n";
		return 0;
	}
	for (int i = 0; i < stud; i++)
	{
		string info;
		int corse;
		cout << "Enter info about " << i + 1 << " student\n";
		cin.get();
		getline(cin, info);
		cout << "Enter student course\n";
		cin >> corse;
		arr[i].Construct(info, corse);

	}
	Test_result( arr, stud);
	/*for (int i = 0; i < stud; i++)
	{
		cout << arr[i].Info_student << endl << arr[i].course << endl;
		//arr[i].Show_bit();
		cout << endl << endl;
	}*/
	cout << "The reasults of test : \n" << endl;
	for ( int i = 0; i < 6; i++)
	{
		cout << "___________TEST#" << i + 1 << "______________" << endl;
		unsigned char res{ 0 };
		for (int j = 0; j < stud; j++) {
				res = (arr[j].test << (7-i));
				if (res >> (7))
				{
					//arr[j].Show_bit();
					cout <<"The student : "<< arr[j].Info_student << "\tOf course : " << arr[j].course << endl << "Pass the " << i + 1 << " test\n";
				}
				else
				{
					//arr[j].Show_bit();
					cout << "The student : " << arr[j].Info_student << "\tOf course : " << arr[j].course << endl << "Fail the " << i + 1 << " test\n";
				}
		}
	}
	delete[] arr;
}
