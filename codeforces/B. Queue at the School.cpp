#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,i,j;
    cin>>n>>t;
    string str;
    cin>>str;
    char ch[2]= {'B','G'},c;
    for(i=0; i<t; i++)
    {
        for(j=0; j<n; j++)
        {
            if(str[j]==ch[0] && str[j+1]==ch[1])
            {
                c=str[j];
                str[j]=str[j+1];
                str[j+1]=c;
                j++;
            }

        }
    }
    cout<<str;
}
