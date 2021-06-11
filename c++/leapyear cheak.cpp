#include<iostream>
using namespace std;
int main()
{
    int m;
    cin>>m;
    if(m%4==0){
        if(m%100==0){
            if(m%400==0){
                cout<<"leapyear";}
            else{cout<<"not leap year";}
        }
        else{cout<<"leap year";}
    }
    else{cout<<"not leap year";}


}
