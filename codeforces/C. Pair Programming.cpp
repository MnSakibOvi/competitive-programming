

#include <bits/stdc++.h>
using namespace std;

// Main Function
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int k,n,m,flag=0;
        cin>>k>>n>>m;
        vector<int>v,v1,v2;
        int zero=0,x;
        for(int i=0; i<n; i++)
        {
            cin>>x;
                v.push_back(x);
        }
        for(int i=0; i<m; i++)
        {
            cin>>x;

                v1.push_back(x);
        }
        int a=0,b=0;

        for(int i=0; i<n+m; i++)
        {
            if(a<v.size() && v[a]==0)
            {
                v2.push_back(0);
                k++;
                a++;
            }
            else  if(b<v1.size() && v1[b]==0)
            {
                v2.push_back(0);
                k++;
                b++;
            }
            else  if(a<v.size() && v[a]<=k)
            {
                v2.push_back(v[a]);
                a++;
            }
            else  if(b<v1.size() && v1[b]<=k)
            {
                v2.push_back(v1[b]);
                b++;
            }
            else
            {
                flag=1;
                break;
            }
        }
//         for(int i=0; i<v2.size(); i++)
//                cout<<v2[i]<<"- ";
//            cout<<endl;
        if(flag==1)
            cout<<"-1"<<endl;
        else
        {
            for(int i=0; i<v2.size(); i++)
                cout<<v2[i]<<" ";
            cout<<endl;
        }


    }
    return 0;
}
