#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,c=0;
    string str;
    cin>>str;
    for(i=0;i<str.size();i++)
    {
        if(str[i]=='H' || str[i]=='Q' || str[i]=='9')
        {
            c++;
        }
    }
    if(c>0)
    {
        cout<<"YES";
    }
    else
        cout<<"NO";
}
