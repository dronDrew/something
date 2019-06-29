#include <iostream>
//https://ideone.com/QTXmRf

using namespace std;

int main()
{ setlocale(LC_ALL,"ukr");
  float h_bg,m_bg,s_bg,h_fn,m_fn,s_fn;
  float total_bg, total_fn, speak_time, money_call;
  //ввід даних від користувача
  cout << "Вас вітає калькулятор переговорів" << endl;
  cout << "Введіть час початку розмови ! " << endl;
  cout << "Введіть годину (від 1 до 24)(форми 00, 01....09 недоступні): ";
  cin >>h_bg;
  cout << "Введіть час хвилини (від 1 до 59): ";
  cin >> m_bg;
  cout << "Введіть секунди (від 1 до 59): ";
  cin >> s_bg;
  cout << "Введіть час закінчення розмови ! " << endl;
  cout << "Введіть годину (від 1 до 24)(форми 00, 01....09 недоступні): ";
  cin >>h_fn;
  cout << "Введіть час хвилини (від 1 до 59): ";
  cin >> m_fn;
 cout << "Введіть секунди (від 1 до 59): ";
  cin >> s_fn;
  //переводимо загальний час в секунди
  total_bg = (h_bg*60*60)+(m_bg*60)+s_bg;
  total_fn = (h_fn*60*60)+(m_fn*60)+s_fn;
  // конструкція іф для правельності розрахунків
  if(total_fn >=total_bg){
      speak_time =(total_fn - total_bg)/60;
      cout << "Ви пророзмовляли - (хв)" << (int)speak_time <<endl;
      // виявлення обсягу витрачених на розмови коштів
      money_call=speak_time * 0.97;
      cout << "ваші витрати склали: " << money_call <<endl;
      // конструкція тернарного оператора на перевірку ліміту на розмови
      (money_call >(7500/100))?cout<<" Ви перевищили ліміт по розмовам(1)"<<endl:cout<<"Ви не перевищили ліміт по розмовам(0)"<<endl;

    }else {
      speak_time =((86400-total_bg)+total_fn)/60;
      cout << "Ви пророзмовляли - (хв)" << (int)speak_time <<endl;
      //виявлення обсягу витрачених на розмови коштів
      money_call=speak_time * 0.97;
      cout << "ваші витрати склали: " << money_call <<endl;
       // конструкція тернарного оператора на перевірку ліміту на розмови
      (money_call > (7500/100))?cout<<"Ви перевищили ліміт по розмовам(1)"<<endl:cout<<"Ви не перевищили ліміт по розмовам(0)"<<endl;
}

  return 0;
}
