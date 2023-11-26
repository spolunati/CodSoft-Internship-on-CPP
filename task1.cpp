#include<iostream>
#include<cstdlib>
#include<ctime>
#include<string>
#include<windows.h>   
using namespace std;
HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
void s(){
srand((unsigned int) time(NULL));
    int n1 = (rand()%10)+1;
    cout<<n1;
    int g1;
    do{ 
        SetConsoleTextAttribute(h,FOREGROUND_BLUE|FOREGROUND_INTENSITY);
        cout<<"\n \nYOU GOT THIS";
        cout<<"\n Enter any number between 0 to 10 : ";
        cin>>g1;
        if(g1>n1+1){
          SetConsoleTextAttribute(h,FOREGROUND_BLUE);
          cout<<"\n The number is Too High";
          cout<<"\n Try Again";
        }else if(g1== (n1+1)){
          SetConsoleTextAttribute(h,FOREGROUND_BLUE);
          cout<<"\n The number is Too Close";
          cout<<"\n Try Again";
        }else if(g1==(n1-1)){
           SetConsoleTextAttribute(h,FOREGROUND_BLUE);
            cout<<"\n The number is Too Close";
          cout<<"\n Try Again";
        }else if(g1<n1-1){
          SetConsoleTextAttribute(h,FOREGROUND_BLUE);
          cout<<"\n The number is Too Low";
          cout<<"\n Try Again";
        }else if(g1==n1){
          SetConsoleTextAttribute(h,FOREGROUND_GREEN|FOREGROUND_INTENSITY)  ;
          cout<<"\n Congratulations You Guessed It Correct ";
        }else{
          SetConsoleTextAttribute(h,FOREGROUND_RED)  ;
          cout<<"\n You Have Guessed The Wrong Input";
        }
    }while(g1!=n1);
}

void m(){
srand((unsigned int) time(NULL));
    int n2 = (rand()%50)+1;
    cout<<n2;
    int g2;
    do{
        SetConsoleTextAttribute(h,FOREGROUND_BLUE|FOREGROUND_INTENSITY);
        cout<<"\n \nYOU GOT THIS";
        cout<<"\nEnter any number between 0 to 50 : ";
        cin>>g2;
        if(g2>n2+1){
          SetConsoleTextAttribute(h,FOREGROUND_BLUE);
          cout<<"\nThe number is Too High";
          cout<<"\nTry Again";
        }else if(g2== (n2+1)){
          SetConsoleTextAttribute(h,FOREGROUND_BLUE);
          cout<<"\nThe number is Too Close";
          cout<<"\nTry Again";
        }else if(g2 == (n2-1)){
          SetConsoleTextAttribute(h,FOREGROUND_BLUE);
            cout<<"\nThe number is Too Close";
          cout<<"\nTry Again";
        }else if(g2<(n2-1)){
          SetConsoleTextAttribute(h,FOREGROUND_BLUE);
          cout<<"\nThe number is Too Low";
          cout<<"\nTry Again";
        }else if(g2==n2){
          SetConsoleTextAttribute(h,FOREGROUND_GREEN|FOREGROUND_INTENSITY)  ;
          cout<<"\nCongratulations You Guessed It Correct ";
        }else{
          SetConsoleTextAttribute(h,FOREGROUND_RED)  ;
          cout<<"\nYou Have Guessed The Wrong Input";
        }
    }while(g2!=n2);
}

void ha(){
    srand((unsigned int) time(NULL));
    int n3 = (rand()%100)+1;
    cout<<n3;
    int g3;
    do{
        SetConsoleTextAttribute(h,FOREGROUND_BLUE|FOREGROUND_INTENSITY);
        cout<<"\n \nYOU GOT THIS";
        cout<<"\nEnter any number between 0 to 100 : ";
        cin>>g3;
        if(g3>n3+1){
          SetConsoleTextAttribute(h,FOREGROUND_BLUE);
          cout<<"\nThe number is Too High";
          cout<<"\nTry Again";
        }else if(g3== (n3+1)){
          SetConsoleTextAttribute(h,FOREGROUND_BLUE);
          cout<<"\nThe number is Too Close";
          cout<<"\nTry Again";
        }else if(g3 == (n3-1)){
          SetConsoleTextAttribute(h,FOREGROUND_BLUE);
            cout<<"\nThe number is Too Close";
          cout<<"\nTry Again";
        } else if(g3<n3-1){
          SetConsoleTextAttribute(h,FOREGROUND_BLUE);
          cout<<"\nThe number is Too Low";
          cout<<"\nTry Again";
        }else if(g3==n3){
          SetConsoleTextAttribute(h,FOREGROUND_GREEN|FOREGROUND_INTENSITY)  ;
          cout<<"\nCongratulations You Guessed It Correct ";
        }else{
          SetConsoleTextAttribute(h,FOREGROUND_RED)  ;
          cout<<"\nYou Have Guessed The Wrong Input";
        }
    }while(g3!=n3);
}
int main(){
    int input;
    SetConsoleTextAttribute(h,FOREGROUND_RED|FOREGROUND_INTENSITY)  ;
    cout<<"\n \n \n \t \t \t Welcome To The World Of Guessing Numbers \n \n \n";
    do{
        SetConsoleTextAttribute(h,FOREGROUND_RED|FOREGROUND_INTENSITY)  ;
        cout<<"\n \n Levels Available are : \n Level - 1 (To Guess The Numbers Between 0 to 10) \n Level - 2 (To Guess The Numbers Between 0 to 50) \n Level - 3 (To Guess The Numbers Between 0 to 100) \n";
        cout<<"\n \nFor LEVEL - 1 Choose 1 \nFor LEVEL - 2 Choose 2 \nFor LEVEL - 3 Choose 3 \nTo EXIT Choose 0 \n Select Anyone Of The Following : ";
        cin>>input;
        switch(input){
            case 1:
              s();
              break;
            case 2:
              m();
          break;
            case 3:
               ha();
              break;
            case 0:
              break;
            default:
              SetConsoleTextAttribute(h,FOREGROUND_RED)  ;
              cout<<"Invalid Input";
              break;
        }

    }while(input!=0);
}