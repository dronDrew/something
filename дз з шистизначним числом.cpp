
#include <iostream>
#include <math.h>

int main()

{
	setlocale(LC_ALL, "ukr");
	using namespace std;
	int a, res_right, res_left ;
	float b,c,c_1,c_2, d,d_1,d_2, e,e_1,e_2, f, f_1, f_2 ,i, i_1, i_2, j,j_1, j_2;
    cout << "Введіть шистезначне число : ";
        cin >> a;
        if (a < 100000) {
                cout << "Ваше число не шистезначне повторіть від! ";
        }
        else if (a > 1000000) {
                cout << "я не вмію працювати з такими великими числами! ";
        }
        else
        {	// version 1
                b = a / 100000;
                c=(a / 10000);
                //c_1 = c / 10;
                //c_2 = round (((c_1- ((int)c_1))*10));
                d = a / 1000;
                //d_1 = d / 10;
                //d_2 = round((d_1 - ((int)d_1)) * 10);
                e = a / 100;
                //e_1 = e / 10;
                //e_2 = round((e_1 - ((int)e_1)) * 10);
                f = a / 10;
                //f_1 = f/ 10;
                //f_2 = round((f_1 - ((int)f_1)) * 10);
                i = a / 1;
                //i_1 = i / 10;
                //i_2 = round((i_1 - ((int)i_1)) * 10);
                 //version 2
                  c_2=-(b*10-c);
                  d_2=-(c*10-d);
                  e_2=-(d*10-e);
                  f_2=-(e*10-f);
                  i_2=-(f*10-i);


		cout << b << endl;
		cout << c_2 << endl;
		cout << d_2 << endl;
		cout << e_2<< endl;
		cout << f_2 << endl;
		cout << i_2 << endl;
		res_right = b + c_2 + d_2;
		res_left = e_2 + f_2 + i_2;
		cout << "сума перших трьох чисел склала : " << res_right << "сума других трьох чисел склала : " << res_left << endl;
		if (res_right > res_left)
		{
			cout << "Сума перших трьох чисел більша";
		}
		else if (res_right <res_left)
		{
			cout << "Сума других трьох чисел більша";
		}
		else if(res_right== res_left)
		{
			cout << "вони рівні";
		}

	}
}

