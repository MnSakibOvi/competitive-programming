
#include <bits/stdc++.h>
using namespace std;



int main()
{
    int t;
    cin>>t;
    for(int cas=1; cas<=t; cas++)
    {
        int n,cnt=0;
        cin>>n;
        int arr[n];
        map<int,int>mp;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            mp[arr[i]]=i;

        }

        for(int i=0; i<n; i++)
        {
            if(arr[i]!=i+1)
            {
                cnt++;
                int g=mp[i+1];
                mp[arr[i]]=g;
                swap(arr[i],arr[g]);


            }

            //cout<<arr[i]<<"-";
        }
       // cout<<endl;
        cout<<"Case "<<cas<<": "<<cnt<<endl;
    }
}
