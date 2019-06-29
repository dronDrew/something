

#include <iostream>
#include <math.h>
using namespace std;
int main() {

    setlocale(LC_ALL,"ukr");
    double ab,bc,ac,weight,cons_ac,cons_bc,fuel_refuse;
    int cons_500 = 1, cons_1000 = 4,cons_1500 = 7,cons_2000 = 9, fuel_tank = 300;
    cout <<"Введіть протяжність маршруту від точки А до точки В :\n";
    cin>> ab;
    if(ab<0){
        cout<<"Відстань не може бути від'ємною\n";
    }else if(ab==0){
        cout<<"Ваша подорож закінчена \n";
    }else{
        cout<<"Введіть протяжність маршруту від точки Б(проміжна точка) до точки В\n";
        cin>>bc;
        if(bc<=0){
            cout<<"Ця відстань не може бути менше нуля або дорівнювати нулю\n";
        }else{
            cout<<"Введіть вагу вантажу :\n";
            cin>> weight;
            if(weight<=0&&weight>=2000){
                cout<<"Недопустимі величини ваги\n";
            }else{
                if(weight>0&&weight<500){
                    ac=sqrt(pow(ab,2)-pow(bc,2));
                    cout<<"відстань від точки А до точки Б складатиме : "<<ac<<endl;
                    cout<<"Загальна відстань маршруту через точку Б складатиме  : "<<ac+bc<<endl;
                    cons_ac = ac *cons_500;
                    cons_bc = bc *cons_500;
                    if(cons_ac>fuel_tank){
                        cout<<"ви не можете добратися до точки Б\n";
                    }else{
                        if(cons_bc>fuel_tank){
                        cout<<"ви не можете добратися до точки В\n";
                        }else{
                        fuel_refuse=cons_bc-(fuel_tank-cons_ac);
                        (fuel_refuse==0)?cout<<"нам не потрібно заправлятися ":cout<<"нам потрібно заправитись на : "<<fuel_refuse<<endl;

                        }

                    }

                }
                if(weight>=500&&weight<1000){
                    ac=sqrt(pow(ab,2)-pow(bc,2));
                    cout<<"відстань від точки А до точки Б складатиме : "<<ac<<endl;
                    cout<<"Загальна відстань маршруту через точку Б складатиме  : "<<ac+bc<<endl;
                    cons_ac = ac *cons_1000;
                    cons_bc = bc *cons_1000;
                    if(cons_ac>fuel_tank){
                        cout<<"ви не можете добратися до точки Б\n";
                    }else{
                        if(cons_bc>fuel_tank){
                        cout<<"ви не можете добратися до точки В\n";
                        }else{
                         fuel_refuse=cons_bc-(fuel_tank-cons_ac);
                        (fuel_refuse==0)?cout<<"нам не потрібно заправлятися ":cout<<"нам потрібно заправитись на : "<<fuel_refuse<<endl;

                        }

                    }

                }
                if(weight>=1000&&weight<1500){
                    ac=sqrt(pow(ab,2)-pow(bc,2));
                    cout<<"відстань від точки А до точки Б складатиме : "<<ac<<endl;
                    cout<<"Загальна відстань маршруту через точку Б складатиме  : "<<ac+bc<<endl;
                    cons_ac = ac *cons_1500;
                    cons_bc = bc *cons_1500;
                    if(cons_ac>fuel_tank){
                        cout<<"ви не можете добратися до точки Б\n";
                    }else{
                        if(cons_bc>fuel_tank){
                        cout<<"ви не можете добратися до точки В\n";
                        }else{
                          fuel_refuse=cons_bc-(fuel_tank-cons_ac);
                        (fuel_refuse==0)?cout<<"нам не потрібно заправлятися ":cout<<"нам потрібно заправитись на : "<<fuel_refuse<<endl;

                        }

                    }

                }
                if(weight>=1500&&weight<2000){
                    ac=sqrt(pow(ab,2)-pow(bc,2));
                    cout<<"відстань від точки А до точки Б складатиме : "<<ac<<endl;
                    cout<<"Загальна відстань маршруту через точку Б складатиме  : "<<ac+bc<<endl;
                    cons_ac = ac *cons_2000;
                    cons_bc = bc *cons_2000;
                    if(cons_ac>fuel_tank){
                        cout<<"ви не можете добратися до точки Б\n";
                    }else{
                        if(cons_bc>fuel_tank){
                        cout<<"ви не можете добратися до точки В\n";
                        }else{
                        fuel_refuse=cons_bc-(fuel_tank-cons_ac);
                        (fuel_refuse==0)?cout<<"нам не потрібно заправлятися ":cout<<"нам потрібно заправитись на : "<<fuel_refuse<<endl;

                        }

                    }

                }
            }
        }
    }
    return 0;
}
