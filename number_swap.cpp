#include <iostream>

using namespace std;

int main()
{ setlocale(LC_ALL,"ukr");
  int num1,swap_num_1,swap_num_2,swap_num_2_2,swap_num_3,swap_num_3_3,swap_num_4,swap_num_4_4;
  cout << "Введіть чотирезначне число : " << endl;
  cin>>num1;
   if(num1<1000||num1<0||num1>9999){
   cout << "Ваше число не відповідає запиту на введеня " << endl;
    }
   else{
      swap_num_1 = num1/1000;
      swap_num_2_2 = (num1/100);
      swap_num_2 = -((swap_num_1*10) -swap_num_2_2);
      swap_num_3_3 = (num1/10);
      swap_num_3 = -((swap_num_2_2*10) -swap_num_3_3);
      swap_num_4_4= (num1/1);
      swap_num_4 = -((swap_num_3_3*10) -swap_num_4_4);
      cout << "я вас правельно зрозумів? ви ввели : "<<swap_num_2<< swap_num_1<<swap_num_4<<swap_num_3<<endl;
     }
  return 0;
}
