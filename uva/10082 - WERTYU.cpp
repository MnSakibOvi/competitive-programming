#include<bits/stdc++.h>
using namespace std;

int main()
{
   //freopen("input.txt", "r", stdin);
   //freopen("output.txt", "w", stdout);
     string str1="`1234567890-=QWERTYUIOP[]";
   string str2="\\";
   string str3="ASDFGHJKL;'ZXCVBNM,./";
   str1=str1+str2+str3;
 // cout<<str1<<endl;
   string str;
while(getline(cin,str))
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
       cout<<str<<endl;

}

}
