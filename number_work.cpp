#include <iostream>
//https://ideone.com/jczGPM

using namespace std;

int main()
{ setlocale(LC_ALL,"ukr");
  int a,b;
  cout << "Вас вітає програма роботи з числами користувача" << endl;
  cout << "Введіть два числа для порівняння: " << endl;
  cin>>a>>b;
  //визначення меншого числа
  (a>b)?cout<<"Менше число :"<<b<<endl:cout<<"Менше число :"<<a<<endl;
  // визначення рівності
  (a==b)?cout<<"Вони рівні"<<"\n":cout<<"\n";
  //визначення числа а згідно завдання
  if(a==0)cout<<"Число "<< a <<" дорівнює нулю"<<endl;
  else if (a<0)cout<<"Число "<< a <<" менше нуля"<<endl;
  else cout<<"Число "<< a <<" більше нуля"<<endl;
  //визначення числа b згідно завдання
  if(b==0)cout<<"Число "<< b <<" дорівнює нулю"<<endl;
  else if (b<0)cout<<"Число "<< b <<" менше нуля"<<endl;
  else cout<<"Число "<< b <<" більше нуля"<<endl;
  return 0;
}
