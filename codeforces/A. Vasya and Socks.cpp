#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int m,n,i,d,k,s,o=0;
    cin>>m>>n;
    s=m/n;
    for(i=1;m!=0;i++)
    {
        d=m/n;
        o=o+d;
        m=d;
        //cout<<m;
    }
    cout<<m+s;

}
