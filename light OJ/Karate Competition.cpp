

#include<bits/stdc++.h>
using namespace std;

void solve(int cas)
{
    int n;
    cin>>n;
    int arr[n],arr2[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(int i=0;i<n;i++)
    {
        cin>>arr2[i];
    }
    cout<<"Case "<<cas<<": ";
    sort(arr,arr+n);
    sort(arr2,arr2+n);
    int cnt=0,k=0;

    for(int i=0;i<n;i++)
    {
        k=-1;
        for(int j=0;j<n;j++)
        {
            if(arr2[j]<arr[i] && arr2[j]!=-1)
            {

                k=j;
            }
            else if(arr2[j]>arr[i])
                break;
        }
        if(k!=-1)
        {
            cnt+=2;
          //  cout<<arr[i]<<" ->"<<arr2[k]<<endl;
            arr[i]=-1;
            arr2[k]=-1;
        }
    }
   // cout<<cnt<<endl;
    for(int i=0;i<n;i++)
    {
        k=-1;
        if(arr[i]!=-1)
        {


        for(int j=0;j<n;j++)
        {
            if(arr[i]==arr2[j])
            {
                cnt++;
                arr2[j]=-1;
            break;
            }
        }
        }

    }


    cout<<cnt<<endl;

}
int main()
{
    int t;
    cin>>t;
for(int i=1;i<=t;i++)
    {
        solve(i);
    }
}



