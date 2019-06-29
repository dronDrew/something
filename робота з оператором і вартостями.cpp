#include <iostream>
//https://ideone.com/jk4d32
using namespace std;

int main()
{
  setlocale(LC_ALL,"ukr");
    int operm ;
      double res,res_1, min,sec;
        double min_tock_v =1.2;
        double min_tock_k =1.1;
        double min_tock_l =1.05;
      cout << "Програма для підрахунку вартості розмов згідно операторськіх тарифів\n";
      cout << "-1-Vodafon (коди оператора :66,99,95,50) (1,2 гр/хв) \n";
      cout << "-2-Kyivstar (коди оператора :67,68,96,97,98) (1,1 гр/хв) \n";
      cout << "-3-Life (коди оператора :63,73,93) (1,05 гр/хв) \n";
      cout<<"Введіть код вашого оператора: \n";
      cin >> operm;
      switch (operm) {
        case 66:
        case 99:
        case 95:
        case 50:
          cout<<"Введіть тривалість розмови: \n";
          cout<<"Введіть хвилини : \n";
          cin >> min;
          if(min<0){
              cout<<"хвилини не можуть бути менше нуля! "<<endl;
              break;
            }
          else if (min>=0) {


          cout<<"Введіть секунди : \n";
          cin >> sec;
          if(sec == 0){
              res = min*min_tock_v;
              cout<<"вартість розмови склала : "<< res <<"грн."<<endl;
            }else if (sec>0&&sec<60) {
              res = (((min*60)+sec)/60)*min_tock_v;
              cout<<"вартість розмови склала : "<< res <<"грн."<<endl;}
             else if (sec>60) {
                res_1 = min*60;
                res = ((res_1+sec)/60)*min_tock_v;
                cout<<"вартість розмови склала : "<< res <<"грн."<<endl;
            }
          else if (sec<0) {
              cout<<"секунди не можуть бути менше нуля! "<<endl;
              break;
            }
           }
          break;
        case 67:
        case 68:
        case 96:
        case 97:
        case 98:
          cout<<"Введіть тривалість розмови: \n";
          cout<<"Введіть хвилини : \n";
          cin >> min;
          if(min<0){
              cout<<"хвилини не можуть бути менше нуля! "<<endl;
              break;
            }
          else if (min>=0) {


          cout<<"Введіть секунди : \n";
          cin >> sec;
          if(sec == 0){
              res = min*min_tock_k;
              cout<<"вартість розмови склала : "<< res <<"грн."<<endl;
            }else if (sec>0&&sec<60) {
              res = (((min*60)+sec)/60)*min_tock_k;
              cout<<"вартість розмови склала : "<< res <<"грн."<<endl;}
             else if (sec>60) {
                res_1 = min*60;
                res = ((res_1+sec)/60)*min_tock_k;
                cout<<"вартість розмови склала : "<< res <<"грн."<<endl;
            }
          else if (sec<0) {
              cout<<"секунди не можуть бути менше нуля! "<<endl;
              break;
            }
           }
          break;
        case 63:
        case 73:
        case 93:
          cout<<"Введіть тривалість розмови: \n";
          cout<<"Введіть хвилини : \n";
          cin >> min;
          if(min<0){
              cout<<"хвилини не можуть бути менше нуля! "<<endl;
              break;
            }
          else if (min>=0) {


          cout<<"Введіть секунди : \n";
          cin >> sec;
          if(sec == 0){
              res = min*min_tock_l;
              cout<<"вартість розмови склала : "<< res <<"грн."<<endl;
            }else if (sec>0&&sec<60) {
              res = (((min*60)+sec)/60)*min_tock_l;
              cout<<"вартість розмови склала : "<< res <<"грн."<<endl;}
             else if (sec>60) {
                res_1 = min*60;
                res = ((res_1+sec)/60)*min_tock_l;
                cout<<"вартість розмови склала : "<< res <<"грн."<<endl;
            }
          else if (sec<0) {
              cout<<"секунди не можуть бути менше нуля! "<<endl;
              break;
            }
           }
          break;
        default:
            cout<<"В базі даних відсутній даний код оператора, будь-те уважні при вводі коду!"<<endl;
          break;
        }
      return 0;
}
