

#include<bits/stdc++.h>
using namespace std;
void solve()
{
    string str;
    cin>>str;
    map<char,int>mp;
    for(int i=0;i<str.size();i++)
        {
            char c=str[i];
            mp[c]++;
        }
        if(mp['a']==str.size())
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
            int flag=0,k=0;
            for(int i=str.size()-1;i>=0;i--)
            {
                if(str[i]!='a' && flag==0)
                {
                    cout<<"a"<<str[k];
                    flag=1;

                }
                else
                {
                    cout<<str[k];
                }
                k++;

            }
            cout<<endl;
        }


}
int main()
{
    int t;
     cin>>t;
    //t=1;
    while(t--)
    {
        solve();
    }
}



