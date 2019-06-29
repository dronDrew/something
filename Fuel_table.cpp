//https://ideone.com/wbtOrO
#include <iostream>
using namespace std;
int main()
{
	double dist, cost_1, cost_2, cost_3, F_cons, total_cons, total_1, total_2, total_3;
	cout  << "Hi, I'm your own personal analizator of trip coast\n";
	cout << "Enter distance  of trip : ";
	// Введення відстані
	cin >> dist;
	cout << "Enter Fuel consuption on 100 km: ";
	//Введення витрат палива на 100 км
	cin >> F_cons;
	cout << "Enter prise of A`95 on gas-station ";
	//ціна на 95 бензин введення
	cin >> cost_1;
	cout << "Enter prise of A`92 on gas-station";
	//ціна на 92 бензин введеня
	cin >> cost_2;
	cout << "Enter prise of Diesel on gas-station ";
	//ціна на дизель введення
	cin >> cost_3;
	// розхід палива на дистанцію
	total_cons = (short)(F_cons * dist) / 100;
	cout << "Fuel consu: " << total_cons << endl;
	// розрахунок вартості подорожі згідно цін на пальне
	total_1 = total_cons * cost_1;
	total_2 = total_cons * cost_2;
	total_3 = total_cons * cost_3;
	//побудова таблиці з даними

	cout << endl << (char)201 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 <<(char)205 << (char)205<< (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)187   << endl;
	cout << (char)186 << "\t" << " Table Coast of trip\t\t" << "\t\t\t\t " << (char)186 << endl;
	cout << (char)204 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)203 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 <<(char)203 <<(char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)203 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)185   << endl;
	cout << (char)186 << "  " << "cost of A95   " << "\t" << "  " << (char)186 << "\t" << (float)total_1 << "\t " << " " << (char)186 << "\t" << (int)total_1 << "\t" << " " << (char)186 << "\t" << (double)total_1 << "\t" << " " << (char)186 << endl;
	cout << (char)204 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)206 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205<<(char)206 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)206 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)185   << endl;
	cout << (char)186 << "  " << "cost of A92   " << "\t" << "  " << (char)186 << "\t" << (float)total_2 << "\t " << " " << (char)186 << "\t" << (int)total_2 << "\t" << " " << (char)186 << "\t" << (double)total_2 << "\t" << " " << (char)186 << endl;
	cout << (char)204 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)206 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)206 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)206 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)185   << endl;
	cout << (char)186 << "  " << "cost of Diesel" << "\t" << "  " << (char)186 << "\t" << (float)total_3 << "\t " << " " << (char)186 << "\t" << (int)total_3 << "\t" << " " << (char)186 << "\t" << (double)total_3 << "\t" << " " << (char)186 << endl;
	cout << (char)200 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)202 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205<<(char)202 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)202 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)188   << endl;
	return 0;
}