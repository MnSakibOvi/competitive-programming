#include<bits/stdc++.h>
using namespace std;

void solve()
{
    string str,str2;
    cin>>str>>str2;

    for(int i=0; i<str.size(); i++)
    {
        int len=str2.size();
        if(str[i]==str2[0])
        {
            string s="";
            for(int j=i;len>0&& j<str.size();j++ )
            {
                s+=str[j];
                string ss="";
                int len2=len-1;
                for(int k=j-1;len2>0&& k>=0;k-- )
                {
                    ss+=str[k];
                    len2--;
                }

                string res=s+ss;
                if(res==str2)
                {
                    cout<<"YES"<<endl;
                    return;
                }
                //cout<<res<<endl;
                len--;

            }

        }



    }

    cout<<"NO"<<endl;
    return;
}


int main()
{


    int t;
    cin>>t;
//  t=1;
    while(t--)
    {
        solve();
    }
}



