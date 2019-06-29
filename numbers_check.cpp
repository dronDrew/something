#include <iostream>

using namespace std;

int main()
{ setlocale(LC_ALL,"ukr");
  // при розрахунку чисел з дробною чатиною не коректно працює.
  //int num1,num2,num3,num4,num5,num6,num7;
  float num1,num2,num3,num4,num5,num6,num7;
  cout << "введіть сім довільних чисел : " << endl;
  cin>>num1>>num2>>num3>>num4>>num5>>num6>>num7;
  if(num1<num2&&num1<num3&&num1<num4&&num1<num5&&num1<num6&&num1<num7){
      cout<<"Число "<<num1<<" менше"<<endl;
    }
  else if (num2<num1&&num2<num3&&num2<num4&&num2<num5&&num2<num6&&num2<num7) {
      cout<<"Число "<<num2<<" менше"<<endl;
    }
  else if (num3<num1&&num3<num2&&num3<num4&&num3<num5&&num3<num6&&num3<num7) {
      cout<<"Число "<<num3<<" менше"<<endl;
    }
  else if (num4<num1&&num4<num3&&num4<num2&&num4<num5&&num4<num6&&num4<num7) {
      cout<<"Число "<<num4<<" менше"<<endl;
    }
  else if (num5<num1&&num5<num3&&num5<num2&&num5<num4&&num5<num6&&num5<num7) {
      cout<<"Число "<<num5<<" менше"<<endl;
    }
  else if (num6<num1&&num6<num3&&num6<num2&&num6<num4&&num6<num5&&num6<num7) {
          cout<<"Число "<<num6<<" менше"<<endl;
    }
  else if (num7<num1&&num7<num3&&num7<num2&&num7<num4&&num7<num5&&num7<num6) {
          cout<<"Число "<<num7<<" менше"<<endl;
    }
 if(num1>num2&&num1>num3&&num1>num4&&num1>num5&&num1>num6&&num1>num7){
      cout<<"Число "<<num1<<" більше"<<endl;
    }
  else if (num2>num1&&num2>num3&&num2>num4&&num2>num5&&num2>num6&&num2>num7) {
      cout<<"Число "<<num2<<" більше"<<endl;
    }
  else if (num3>num1&&num3>num2&&num3>num4&&num3>num5&&num3>num6&&num3>num7) {
      cout<<"Число "<<num3<<" більше"<<endl;
    }
  else if (num4>num1&&num4>num3&&num4>num2&&num4>num5&&num4>num6&&num4>num7) {
      cout<<"Число "<<num4<<" більше"<<endl;
    }
  else if (num5>num1&&num5>num3&&num5>num2&&num5>num4&&num5>num6&&num5>num7) {
      cout<<"Число "<<num5<<" більше"<<endl;
    }
  else if (num6>num1&&num6>num3&&num6>num2&&num6>num4&&num6>num5&&num6>num7) {
          cout<<"Число "<<num6<<" більше"<<endl;
    }
  else if (num7>num1&&num7>num3&&num7>num2&&num7>num4&&num7>num5&&num7>num6) {
          cout<<"Число "<<num7<<" більше"<<endl;
    }
  return 0;
}
