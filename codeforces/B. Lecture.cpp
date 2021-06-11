
#include<bits/stdc++.h>
using namespace std;

void solve();

void multipleTestCase()
{
    int t;
    t=1;
    while(t--)
        solve();
}


int main()
{
    multipleTestCase();
    return 0;
}

void solve()
{
    int n,m;
    cin>>n>>m;
    string str1[m],str2[m];
    string s1,s2;
    for(int i=0; i<m; i++)
    {
        cin>>str1[i]>>str2[i];
    }
    string  chek[n];
    for(int i=0; i<n; i++)
        cin>>chek[i];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(chek[i]==str1[j])
            {

                s1=str1[j];
                s2=str2[j];
                if(s1.size()<=s2.size())
                    cout<<s1<<" ";
                else
                    cout<<s2<<" ";
            }

        }

    }


}
