


#include<bits/stdc++.h>
using namespace std;

void solve()
{
    string str,str2;
    cin>>str>>str2;
    int k=0,g;
    for(int i=0; i<str.size(); i++)
    {
        if(str[i]==str2[k])
        {
            k++;
             g=k;
             cout<<"k="<<k<<"->";
            for(int j=i-1;j>=0;j--)
            {
                cout<<j<<" ";
                if(str[j]==str2[k])
                {
                    cout<<str[j]<<" "<<str2[k]<<endl;
                    k++;
                }
                else
                {
                    k=g;
                    break;
                }

                if(k==str2.size())
                {
                    cout<<"YES"<<endl;
                    return;
                }

            }
            cout<<endl;
             if(k==str2.size())
                {
                    cout<<"YES"<<endl;
                    return;
                }
        }
        else
        {
            k=0;
        }


    }

    cout<<"NO"<<endl;
    return;
}

////////////////////1
////////////////////baaaa
////////////////////aab
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



