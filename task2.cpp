#include<iostream>
#include<iomanip>
#include<windows.h>
using namespace std;
HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
int an, sn, mn;
float arr[1000];
void add(){
    SetConsoleTextAttribute(h,FOREGROUND_BLUE|FOREGROUND_INTENSITY)  ;
    float are=0;
    cout<<"Enter the number of elements : ";
    cin>>an;
    for(int i=0; i<an; i++){
      cout<<"Enter the "<<i+1<<" element : ";
      cin>>arr[i];
    }
    for(int i=0; i<an; i++){
        are=are+arr[i];
    }
    SetConsoleTextAttribute(h,FOREGROUND_GREEN|FOREGROUND_INTENSITY)  ;
    cout<<"\n The addition of the provided elements is "<<are;
}
void sub(){
  SetConsoleTextAttribute(h,FOREGROUND_BLUE|FOREGROUND_INTENSITY)  ;
  float sre=0;
  cout<<"Enter the number of elements : ";
  cin>>sn;
  for(int i=0; i<sn; i++){
      cout<<"Enter the "<<i+1<<" element : ";
      cin>>arr[i];
    }
    for(int i=0; i<sn; i++){
        sre=sre+arr[i];
    }
    SetConsoleTextAttribute(h,FOREGROUND_GREEN|FOREGROUND_INTENSITY)  ;
    cout<<"\n The subtraction of the provided elements is "<<sre; 
}
void mult(){
  SetConsoleTextAttribute(h,FOREGROUND_BLUE|FOREGROUND_INTENSITY)  ;
  float mre=1;
  cout<<"Enter the number of elements : ";
  cin>>mn;
  for(int i=0; i<mn; i++){
      cout<<"Enter the "<<i+1<<" element : ";
      cin>>arr[i];
    }
    for(int i=0; i<mn; i++){
        mre=mre*arr[i];
    }
    SetConsoleTextAttribute(h,FOREGROUND_GREEN|FOREGROUND_INTENSITY)  ;
    cout<<"\n The multipication of the provided elements is "<<mre; 

  char b;
  int rm;
  SetConsoleTextAttribute(h,FOREGROUND_BLUE|FOREGROUND_INTENSITY);
  cout<<"\n Want to round-off the value (y-yes n-no): ";
  cin>>b;
  if(b=='y'){
    cout<<"Enter the number of digits you want after the point : ";
    cin>>rm;
    cout<<fixed;
    SetConsoleTextAttribute(h,FOREGROUND_GREEN|FOREGROUND_INTENSITY)  ;
    cout<<"The round-off value is "<<setprecision(rm)<<mre;
  }
}
void div(){
  float dre, did, div;
  SetConsoleTextAttribute(h,FOREGROUND_BLUE|FOREGROUND_INTENSITY);
  cout<<"Enter the Divident : ";
  cin>>arr[0];
  did=arr[0];
  cout<<"Enter the divisor : ";
  cin>>arr[1];
  div=arr[1];
  if(arr[1]==0){
    SetConsoleTextAttribute(h,FOREGROUND_GREEN|FOREGROUND_INTENSITY)  ;
    cout<<"\n Divisor cannot be ZERO";
  }else{
    dre= did/div;
    SetConsoleTextAttribute(h,FOREGROUND_GREEN|FOREGROUND_INTENSITY)  ;
    cout<<"The quotient of the provided elements is "<<dre; 
  }
  char a;
  int rn;
  SetConsoleTextAttribute(h,FOREGROUND_BLUE|FOREGROUND_INTENSITY);
  cout<<"\n Want to round-off the value (y-yes n-no): ";
  cin>>a;
  if(a=='y'){
    cout<<"Enter the number of digits you want after the point : ";
    cin>>rn;
    cout<<fixed;
    SetConsoleTextAttribute(h,FOREGROUND_GREEN|FOREGROUND_INTENSITY)  ;
    cout<<"The round-off value is "<<setprecision(rn)<<dre;
  }
}
int main(){
   SetConsoleTextAttribute(h,FOREGROUND_RED|FOREGROUND_INTENSITY)  ;
    cout<<"\n \n \n  \t\t\t Welcome To The World Of Calculations \n \n \n ";
    char op;
    do{
      SetConsoleTextAttribute(h,FOREGROUND_RED|FOREGROUND_INTENSITY)  ;
        cout<<"\n \n Operations avaiable are : \n Addition(+) \n Substraction(-) \n Multiplication(*) \n Division(/) \n  Exit(!) \nEnter any one of the operations you want to perform : ";
        cin>>op;
        switch(op){
            case '+' :
             add();
             break;
            case '-':
              sub();
              break;
            case '*':
              mult();
             break;
            case '/':
             div();
             break;
            case '!':
              break;
            default:
             cout<<"Invalid Input";
             break;
        }
    }while(op!='!');
}