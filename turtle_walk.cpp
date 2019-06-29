
#include <iostream>
using namespace std;

int main()
{
	int N, dist=150;
	cout << "Enter how many days turtle will go" << endl;
	cin >> N;
	if (N < 0) {
		cout << "Days can`t be minus" << endl;
	}
	else if (N == 0) {
		N = 21;
	}else if (N==1) {
	cout <<"Turtle went "<< dist <<" cm."<< endl;
}
	while (N > 1) {
		--N;
		dist += 20;
	}

	cout <<"Turtle went "<< dist <<" cm."<< endl;
}
