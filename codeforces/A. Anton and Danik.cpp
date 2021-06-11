#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,c=0,f=0;
    cin>>n;
    string str;
    cin>>str;
    for(i=0; i<str.size(); i++)
    {
        if(str[i] == 'A')
            c++;
        if(str[i] == 'D')
            f++;
    }
    if(c>f)
        cout<<"Anton";
    else if(c<f)
        cout<<"Danik";
    else
        cout<<"Friendship";
}
