#include <bits/stdc++.h>
using namespace std;
int main()
{
    string x;
    vector<char>v;
    int a[1000];
    int i,j,k,c,n;
    char c1;
    while(cin>>x)
    {
        map<char,int>a;
        if(x=="#")
        {
            break;
        }

        for(i=0;i<x.size();i++)
        {
            a[x[i]]+=1;
        }

        for(j=0;j<=128;j++)
        {
            if(a[j]%2!=0)
            {
                c1=j;
                v.push_back(c1);
            }
        }

        sort(v.begin(),v.end());

        for(k=0;k<v.size();k++)
        {
            if(k!=v.size()-1)
            {
                cout<<v[k];
            }

        }
        printf("\n");
        v.clear();
    }

    return 0;
}
