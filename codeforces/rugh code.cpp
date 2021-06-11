#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string str;
    int n;cin>>n;
    char ara[n],ara2[n],ara3[n];
    for(int i=1;i<=n;i++)
    {
    cin>>str;

ara[i-1]=str[0];
ara2[i-1]=str.length()-2;
ara3[i-1]=str[str.length()-1];
    }
    for (int i=0;i<n;i++)
    {
        cout<<ara[i]<<ara2[i]<<ara3[i]<<endl;
    }
}
