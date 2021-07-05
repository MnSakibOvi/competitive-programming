

#include<bits/stdc++.h>
using namespace std;
int check(string s)
{
    int mn=INT_MAX;
    for(int i=0;i<s.size()-1;i++)
    {
     int g=abs((int)s[i]-(int) s[i+1]);
     mn=min(g,mn);
    }
    return mn;
}
int main()
{
   string str;
   while(cin>>str)
   {
       string ans=str,str2=ans;

       int mx=INT_MIN;
       mx=max(check(str),mx);
       for(int i=0;i<10;i++)
       {
         prev_permutation(str.begin(), str.end());
         int len =check(str);
         if(len>mx)
         {
             mx=len;
             ans=str;
           //  cout<<str<< " "<<len<<endl;
         }
         if(len==mx)
         {
             ans=min(str,ans);
           //  cout<<str<< " "<<len<<endl;
         }
         //cout<<str<< " "<<len<<endl;
       }
        for(int i=0;i<10;i++)
       {
         next_permutation(str2.begin(), str2.end());
         int len=check(str2);
         if(len>mx)
         {
             mx=len;
             ans=str2;
              //   cout<<str2<< " n   "<<len<<endl;
         }
         if(len==mx)
         {
             ans=min(str2,ans);
         }
        // cout<<str2<< " "<<len<<endl;
       }
       cout<<ans<<mx<<endl;
   }
}




