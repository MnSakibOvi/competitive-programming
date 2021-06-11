
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>>str;
    int k=1,sum=0;
    for(int i=0;i<str.size();i++)
    {
        int r=str[i];
        r=r-96;
        int mx=max(k,r);
        int mn=min(k,r);
      int cw=mx-mn;
      int acw=(26-mx)+mn;
      sum=sum+(min(cw,acw));
      k=r;
    }
    cout<<sum<<endl;



}

