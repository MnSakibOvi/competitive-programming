#include<bits/stdc++.h>
using namespace std;
void solve()
{
    char h;
    cin>>h;
    string str1="qwertyuiopasdfghjkl;zxcvbnm,./";
    string str;
    cin>>str;
    if(h=='R')
    {
       for (int i=0;i<str.size();i++)
       {
           for(int j=0;j<str1.size();j++)
           {
               if(str[i]==str1[j])
               {
                   str[i]=str1[j-1];
                   break;
               }
           }
       }

    }
    else
        for (int i=0;i<str.size();i++)
       {
           for(int j=0;j<str1.size();j++)
           {
               if(str[i]==str1[j])
               {
                   str[i]=str1[j+1];
                   break;
               }
           }
       }
    cout<<str;

}
int main()
{

    int t;
    t=1;
    while(t--)
        solve();
}

