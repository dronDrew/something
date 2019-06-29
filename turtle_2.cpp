#include <iostream>
using namespace std;
/*з умови завдання мені не зрозуміло чи включати перший день в загальну відстань чи ні,
  тому я краще буду питати у користувача для точності підрахунків*/
int main()
{  int N, dist=0;
   char incl;
  cout<<"Turtle walk greeting you: "<<endl;
  cout << "Enter how many days turtle will go" << endl;
  cin >> N;
   if(N<0){
       cout << "Days can`t be minus" << endl;
       }else if (N == 0) {
       cout<<"You enter 0 by default we use 21 days"<<endl;
           N = 21;}
  cout<<"In a first day she went 150cm you want include this distace as a first day? y/n "<<endl;
  cin >>incl;
   switch (incl) {
     case 'y':
     case 'Y':
          for (int j = 1;j<=N;j++) {
                  if(j==1){
                      dist+=150;
                      }else {
                dist+=20;
               }
              }cout <<"Turtle went "<< dist <<" cm."<< endl;
       break;
    case 'n':
    case 'N':
      dist=150;
      while(N>0){
          N--;
          dist+=20;
        }cout <<"Turtle went "<< dist <<" cm."<< endl;

      break;
    default:
      cout<<"You have just (y) Yes or (n) No! "<<endl;
     break;
     }
}
