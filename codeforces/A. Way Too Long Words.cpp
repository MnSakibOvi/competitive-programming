#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string str;
    int n,i,m=0;cin>>n;
    int ara2[n],ara4[n];
    char ara[n],ara3[n];
    string ara5[n];
    for( i=0;i<n;i++)
    {
    cin>>str;
    m=str.length();
ara[i]=str[0];
ara2[i]=m-2;
ara3[i]=str[m-1];
ara4[i]=m;
ara5[i]=str;
    }
for (int i=0;i<n;i++)
    {
        if(ara4[i]>10)
        {
        cout<<ara[i]<<ara2[i]<<ara3[i]<<endl;
        }
        else
        {
            cout<<ara5[i]<<endl;
        }
    }

}
