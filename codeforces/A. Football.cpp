#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,flag=0;
    string str;
    cin>>str;
    for(i=0; i<str.size(); i++)
    {
        if(str[i]==str[i+1] && str[i+1]==str[i+2] && str[i+2]==str[i+3] && str[i+3]==str[i+4] && str[i+4]==str[i+5] && str[i+5]==str[i+6])
        {

            cout<<"YES";
            flag=1;
            break;

        }


    }
    if(flag==0)
        cout<<"NO";
}
