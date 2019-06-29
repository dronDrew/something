#include <iostream>

using namespace std;

int main()
{ long int digit,res=0;
  cout<<"Enter digit for finding summ of it number :"<<endl;
  cin>>digit;
  if(digit<0){
      cout<<"Number can`t be minus"<<endl;
    }else if (digit==0) {
    cout<<"You enter 0 we can`t work with 0 we use the default digit(123456)"<<endl;
    digit=123456;
}
  do{
     res +=digit%10;
     digit/=10;
    }while(digit>0);
  cout<<"The summary of your digit is :"<<res<<endl;
}
