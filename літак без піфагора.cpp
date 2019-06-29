#include <iostream>
#include <math.h>

using namespace std;

int main()
{  setlocale(LC_ALL,"ukr");
   double cons_weight,res_dist,res_dist_2;
   int AB,CB,AC,weight,fuel_refuse,cunsum_1,cunsum_2;
   int fuel_tank=300,cons_500=1,cons_1000=4,cons_1500=7,cons_2000=9;
  cout << "Введіть протяжність маршруту для літака :" << endl;
   cin>>AB;
    //перевірка основної дистанції
    //перевірка на від'ємність
    if(AB<0){
        cout<<"ви неможете пролитіти менше нуля відстань"<<endl;
      }
    //Перевірка на рівність нулю основної дистанції
    else if (AB==0) {
        cout<<"Ви вже на місці пілот не запускав двигун"<<endl;
      }
    //перевірка дистанції більше нуля
    else {
  cout << "Введіть довжину від проміжної точки до кінечної :" << endl;
   cin>>CB;
   //Перевірка відстані від проміжної точки до кінечної
   //Перевірка на меншість нулю
   if(CB<0){
       cout<<"Проміжна точка не може мати відємну дистанцію"<<endl;
     }
   //перевірка дистанції нарівність з нулем
   else if (CB==0) {
       cout<<"Проміжна точка не може дорівнювати нулю"<<endl;
     }
   //перевірка дистанції на значення більше нуля
   else {
   cout << "Введіть вагу вантажу(вантажопідйомність не більше 2000кг) :" << endl;
   cin>> weight;
   //перевірка ваги
   //перевірка на перевантаженість
   if(weight>2000){
     cout << "Ви перевищили масу вантажопідємності,залиште щось за бортом літака" << endl;
     }
   //перевірка ваги на від'ємне значення
   else if (weight<0) {
     cout << "Вага не може містити від'ємне значення" << endl;
     }
  //перевырка ваги в проміжку від 0 до 500 кг
   else if (weight>=0&&weight<=500){
           AC=AB-CB;
           cons_weight = fuel_tank/cons_500;
           res_dist =  cons_weight - AC;
           if(res_dist<0){
               cout<<"Ви недосягаєте проміжної точки"<<endl;
             }else {
            res_dist_2 = cons_weight - CB;
            if(res_dist_2<0){
                cout<<"Ми неможемо долитіти до кінечної точки"<<endl;
              }
            else {
                cunsum_1=(fuel_tank -(res_dist*cons_500));
                cunsum_2=(fuel_tank -(res_dist_2*cons_500));
                fuel_refuse =(cunsum_1+cunsum_2);
                (fuel_refuse>fuel_tank)?cout<<"ми досягаємо кінечнох точки але в проміжній точці заправляємось на : "<<fuel_refuse-fuel_tank <<" Л.(за теоремою Піфагора)"<<endl:cout<<"ми досягаємо кінечнох точки але в проміжній точці заправляємось на : "<<fuel_refuse <<endl;}
}


}
   //перевірка ваги в проміжку від 500 до 1000кг
   else if (weight>=500&&weight<=1000){
       AC=AB-CB;
       cons_weight = fuel_tank/cons_1000;
       res_dist =  cons_weight -AC;
       if(res_dist<0){
           cout<<"Ви недосягаєте проміжної точки"<<endl;
         }else {
        res_dist_2 = cons_weight - CB;
        if(res_dist_2<0){
            cout<<"Ми неможемо долитіти до кінечної точки"<<endl;
          }
        else {
            fuel_refuse =-(fuel_tank-((fuel_tank -(res_dist*cons_1000))+(fuel_tank -(res_dist_2*cons_1000))));
             cout<<"ми досягаємо кінечнох точки але в проміжній точці заправляємось на : "<<fuel_refuse <<" Л."<<endl;}
         }}
   //перевірка ваги в проміжку від 1000 до 1500 кг
   else if (weight>=1000&&weight<=1500){
       AC=AB-CB;
       cons_weight = fuel_tank/cons_1500;
       res_dist =  cons_weight -AC;
       if(res_dist<0){
           cout<<"Ви недосягаєте проміжної точки"<<endl;
         }else {
        res_dist_2 = cons_weight - CB;
        if(res_dist_2<0){
            cout<<"Ми неможемо долитіти до кінечної точки"<<endl;
          }
        else {
            cunsum_1=(fuel_tank -(res_dist*cons_1500));
            cunsum_2=(fuel_tank -(res_dist_2*cons_1500));
            fuel_refuse =(cunsum_1+cunsum_2);
            (fuel_refuse>fuel_tank)?cout<<"ми досягаємо кінечнох точки але в проміжній точці заправляємось на : "<<fuel_refuse-fuel_tank <<" Л.(за теоремою Піфагора)"<<endl:cout<<"ми досягаємо кінечнох точки але в проміжній точці заправляємось на : "<<fuel_refuse <<endl;}
     }}
   //перевірка ваги від 1500 до 2000кг
   else if (weight>1500&&weight<2000){
       AC=AB-CB;
       cons_weight = fuel_tank/cons_2000;
       res_dist =  cons_weight -AC;
       if(res_dist<0){
           cout<<"Ви недосягаєте проміжної точки"<<endl;
         }else {
        res_dist_2 = cons_weight - CB;
        if(res_dist_2<0){
            cout<<"Ми неможемо долитіти до кінечної точки"<<endl;
          }
        else {
            cunsum_1=(fuel_tank -(res_dist*cons_2000));
            cunsum_2=(fuel_tank -(res_dist_2*cons_2000));
            fuel_refuse =(cunsum_1+cunsum_2);
            (fuel_refuse>fuel_tank)?cout<<"ми досягаємо кінечнох точки але в проміжній точці заправляємось на : "<<fuel_refuse-fuel_tank <<" Л.(за теоремою Піфагора)"<<endl:cout<<"ми досягаємо кінечнох точки але в проміжній точці заправляємось на : "<<fuel_refuse <<endl;
          }
}}}}
  return 0;
}
