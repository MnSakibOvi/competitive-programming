#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int cnt0=0,cnt1=0,res=0;
        string str;
        cin>>str;
        for(int i=0;i<str.size();i++)
        {
            if(str[i]=='1')
                cnt1++;
            if(str[i]=='0')
                cnt0++;

        }
       // cout<<cnt1<<" "<<cnt0<<endl;
        if(cnt1>0 || cnt0>0)
        {
            res=min(cnt1,cnt0);
            if(res%2==0)
                cout<<"NET"<<endl;
            else
                cout<<"DA"<<endl;
        }
        else
            cout<<"DA"<<endl;



    }
}

