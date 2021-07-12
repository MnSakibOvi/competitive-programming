

#include <bits/stdc++.h>
using namespace std;

// Main Function
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int k,n,m;
        cin>>k>>n>>m;
        vector<int>v,v1;
        int zero=0,x;
        for(int i=0; i<n; i++)
        {
            cin>>x;
            if(x==0)
                zero++;
            else
                v.push_back(x);
        }
        for(int i=0; i<m; i++)
        {
            cin>>x;
            if(x==0)
                zero++;
            else
                v.push_back(x);
        }
    sort(v.begin(), v.end());
    int j=0,flag=0;
    for(int i=0;i<v.size();i++)
    {
        if(v[i]<=k)
          {
              v1.push_back(v[i]);
          }
        else
        {
            if(zero>0)
            {
                int g=v[i]-k;
                  //  cout<<v[i]<<" = g ="<<g;
                if(g<=zero)
                {
                    while(g--)
                    {
                        v1.push_back(0);
                        zero--;
                    }
                    v1.push_back(v[i]);
                    k=v[i];
                  //  cout<<"zero ="<<zero<<" k ="<<k<<endl;
                }
                else
                {
                    flag=1;
                    break;
                }
            }
            else
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
            break;



    }
    if(flag==1 || (v1.size()+zero)!=(n+m))
        cout<<"-1"<<endl;
    else
    {

        for(int i=0;i<v1.size();i++)
        {
            cout<<v1[i]<<" ";

        }
        while(zero--)
        {
            cout<<"0 ";
        }

        cout<<endl;
    }

    }
    return 0;
}
