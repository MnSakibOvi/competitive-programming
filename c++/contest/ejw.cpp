#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string str;
    string m,s;
    int i=0,n=0,hh,c;
    string ara[1000];
    cin>>hh;
    cout<<":";
    cin>>m;
    cout<<":";
    cin>>s;
    cin>>str;
    if(str =="AM")
    {
        if(hh==12)  {
                cout<<"00";
        }
        else {
                c=hh;
                 cout<<c;
        }
    }
    if(str=="PM")
    {
        if(hh==12) {
                c=hh;
         cout<<c;
        }
        else c=hh+12;
        {
             cout<<c;
        }
    }
    cout<<":"<<m<<":"<<s;

}
