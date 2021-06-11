#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,c=0;
    string str;
    cin>>str;
  sort(str.begin(),str.end());

    for(i=0; i<str.size(); i++)
    {
       if(str[i]==str[i+1])
       {
           c++;
       }
    }

j=str.size()-c;


    if(j%2!=0)
    {
        cout<<"IGNORE HIM!";
    }
    else
        cout<<"CHAT WITH HER!";


        return 0;
}
