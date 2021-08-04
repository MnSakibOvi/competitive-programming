


#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
 string str,str2;
 cin>>str;
 cin>>str2;
 int cnt=0;
 for(int i=0;i<n;i++)
 {
     if(str2[i]=='1')
     {
         if(str[i]=='0')
           {
             cnt++;
             str[i]='2';
           }
         else
         {
             if(i>0 && str[i-1]=='1')
               {
                   cnt++;
                   str[i-1]='2';

               }
             else if(i<n-1 && str[i+1]=='1')
             {
                 cnt++;
                  str[i+1]='2';

             }

         }
     }
 }
 cout<<cnt<<endl;

}
int main()
{

int t;
//t=1;
cin>>t;
while(t--)
solve();
}


