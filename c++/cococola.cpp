#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int  inputNumber,a,b,c,d,e,i,t,r,last,store1=0,store2=0;
    cin>>inputNumber;
    if(inputNumber%3==0)
    {
        a=inputNumber;
    }
    else if(inputNumber%3==2)
    {
        a=inputNumber+1;
    }
    else
    {
        a=inputNumber+2;
    }
    cout<<a<<endl;
    t=a-inputNumber;

    for(i=1;i<=a;i++)
    {    r=a%3;
        c=a/3;
        store1=store1+c;
        store2=store2+r;
        a=c;

    }
    last=a+store2;

   e=last/3;
    d=inputNumber+store1+e;
    cout<<d<<endl<<e<<endl<<last<<endl<<a<<endl;
    if(store2>=t){
        cout<<"method 2 ok"<<endl;
    }
}
