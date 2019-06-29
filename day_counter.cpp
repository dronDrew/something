#include <iostream>
//https://ideone.com/3A8NnJ
using namespace std;

int main()
{
  int data_begin,data_finish;
    double a,b,a1,b1;
    int res_1yb,res_1yf,res_1mb,res_1mf,res_1db,res_1df,day_y1=0;
    const int data_first = 15051980,data_second = 7062012;
     cout<<"Hi it`s days calculator period pass "<<endl;
    cout<<"Insert data for begin counting(without spaces): "<<endl;
    cin>>data_begin;
    if(data_begin<0){
      cout<<"Data can`t have minus value "<<endl;
      }else if (data_begin==0) {
        data_begin = data_first;
      }else {
        data_begin=data_begin;
      }
    cout<<"Insert data for finish counting(without spaces): "<<endl;
    cin>>data_finish;
    if(data_finish<0){
      cout<<"Data can`t have minus value "<<endl;
      }else if (data_finish == 0) {
        data_finish = data_second;
      }else {
        data_finish = data_finish;
      }
    a=data_begin/1000000;
    b=data_begin/10000;
    res_1db = a;
    res_1mb = b-(a*100);
    res_1yb = data_begin-(int(b)*10000);
    a1=data_finish/1000000;
    b1=data_finish/10000;
    res_1df = a1;
    res_1mf =b1-(a1*100);
    res_1yf = data_finish-(int(b1)*10000);
     //checking mounth
    if(res_1mb>12&&res_1mf>12){
        cout<<"wrong quantity of mounth"<<endl;
      }else if(res_1mb<13&&res_1mf<13){
  // checking days in mounth
    if(res_1mb == 1||res_1mb == 3||res_1mb == 5||res_1mb == 7||res_1mb == 8||res_1mb == 10||res_1mb == 12){
      if(res_1db>31){cout<<"Wrong quantity of days in month"<<endl;return 0;}else{res_1db=res_1db;}
      }else if (res_1mb==2) {
        if(res_1yb%4 == 0 && res_1yb%100 !=0 ||res_1yb % 400 == 0){
           if(res_1db>29){cout<<"Wrong quantity of days in month"<<endl;return 0;}else{res_1db=res_1db;}
          }else {
            if(res_1db>28){cout<<"Wrong quantity of days in month"<<endl;return 0;}else{res_1db=res_1db;}
              }
       }else if (res_1db==4||res_1db==6||res_1db==9||res_1db==11) {
          if(res_1db>30){cout<<"Wrong quantity of days in month"<<endl;return 0;}else{res_1db=res_1db;}
        }
    if(res_1mf == 1||res_1mf == 3||res_1mf == 5||res_1mf == 7||res_1mf == 8||res_1mf == 10||res_1mf == 12){
      if(res_1df>31){cout<<"Wrong quantity of days in month"<<endl;return 0;}else{res_1df=res_1df;}
      }else if (res_1mf==2) {
        if(res_1yf%4 == 0 && res_1yf%100 !=0 ||res_1yf % 400 == 0){
           if(res_1df>29){cout<<"Wrong quantity of days in month"<<endl;return 0;}else{res_1df=res_1df;}
          }else {
            if(res_1df>28){cout<<"Wrong quantity of days in month"<<endl;return 0;}else{res_1df=res_1df;}
              }
       }else if (res_1df==4||res_1df==6||res_1df==9||res_1df==11) {
          if(res_1df>30){cout<<"Wrong quantity of days in month"<<endl;return 0;}else{res_1df=res_1df;}
        }}
// counter of year
    if(res_1yb>res_1yf){
        for (int i =res_1yf;i<res_1yb;i++) {
        if(i%4 == 0 && i%100 !=0 ||i % 400 == 0){
            day_y1+=-(366);
          }else {
            day_y1+=-(365);
    }}
      }
    for (int i =res_1yb;i<res_1yf;i++) {
    if(i%4 == 0 && i%100 !=0 ||i % 400 == 0){
        day_y1+=366;
      }else {
        day_y1+=365;
}}
//counter mounth
        for (int j = 0;j<res_1mf;j++) {
            switch (j) {
               case 1:
                day_y1+=31;
                break;
               case 2:
                if(res_1yf%4 == 0 && res_1yf%100 !=0 ||res_1yf % 400 == 0){
                    day_y1+=29;
                  }else {
                    day_y1+=28;
                      }
                break;
               case 3:
                day_y1+=31;
                break;
               case 4:
                day_y1+=30;
                break;
               case 5:
                day_y1+=31;
                break;
               case 6:
                day_y1+=30;
                break;
               case 7:
                day_y1+=31;
                break;
               case 8:
                day_y1+=31;
                break;
               case 9:
                day_y1+=30;
                break;
               case 10:
                day_y1+=31;
                break;
               case 11:
                day_y1+=30;
                break;
               case 12:
                day_y1+=31;
                break;
  }}
//counter mounth
            for (int i = 0;i<res_1mb;i++) {
                switch (i) {
                   case 1:
                    day_y1-=31;
                    break;
                   case 2:
                    if(res_1yb%4 == 0 && res_1yb%100 !=0 ||res_1yb % 400 == 0){
                        day_y1-=29;
                      }else {
                        day_y1-=28;
                          }
                    break;
                   case 3:
                    day_y1-=31;
                    break;
                   case 4:
                    day_y1-=30;
                    break;
                   case 5:
                    day_y1-=31;
                    break;
                   case 6:
                    day_y1-=30;
                    break;
                   case 7:
                    day_y1-=31;
                    break;
                   case 8:
                    day_y1-=31;
                    break;
                   case 9:
                    day_y1-=30;
                    break;
                   case 10:
                    day_y1-=31;
                    break;
                   case 11:
                    day_y1-=30;
                    break;
                   case 12:
                    day_y1-=31;
                    break;
      }
          }
            //finall counting
     day_y1-=res_1db;
     day_y1+=res_1df;
     (day_y1<0)?cout<<"I cant show minus period"<<endl:cout<<day_y1<<endl;
  return 0;
}
