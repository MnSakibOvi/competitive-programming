#include<bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int n,cnt=0,cnt2=0;
        cin>>n;
        int arr[n];
        for(int k=0; k<n; k++)
        {
            cin>>arr[k];
        }
        for(int j=0; j<n; j=j+2)
        {
            if(arr[j]%2!=0)
                cnt++;
        }
        for(int j=1; j<n; j=j+2)
        {
            if(arr[j]%2!=1)
                cnt2++;
        }

        //cout<<cnt<<" "<<cnt2<<endl;
        if(cnt==cnt2)
            cout<<cnt<<endl;
        else
            cout<<"-1"<<endl;

    }

}
