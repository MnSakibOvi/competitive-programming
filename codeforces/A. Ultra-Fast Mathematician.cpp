#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i;
    string str,str2,str3;
    cin>>str>>str2;
    for(i=0;i<str.size();i++)
    {
        if(str[i]==str2[i])
           cout<<0;
        else
            cout<<1;
    }
}
