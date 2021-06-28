
#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long  n,k,x;
    cin>>n>>k>>x;
    unsigned long long  arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];

    sort(arr,arr+n);
    vector< unsigned long long>v;
    long double s=x;
    for(int i=0; i<n-1; i++)
    {
       unsigned long long g=arr[i+1]-arr[i];
        unsigned long long x=ceil(g/s);
        if(x!=0)
            x--;
     //cout<<g<<"-> "<<x<<endl;
        if(x>0)
            v.push_back(x);

    }
    sort(v.begin(), v.end());
    int flag=0,cnt=0;
//    for(int i=0;i<v.size();i++)
//        cout<<v[i]<<" ";
//    cout<<endl;
    for(int i=0; i<v.size(); i++)
    {
        if(flag==0)
        {
            if(v[i]<=k)
            {
                k-=v[i];
            }
            else
            {
                flag=1;
                cnt++;
            }
        }
        else
        {
            cnt++;
        }
//cout<<v[i]<<" ";
    }
    cout<<cnt+1<<endl;
}

