

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
        if(arr[i]>arr2[k])
        {
            cnt++;
            cnt++;
            k++;
        }
        else if(arr[i]==arr2[k])
        {


            int l=k+1,cnt2=0;
            for(int j=i+1;j<n;j++)
            {
                if(arr[j]>arr2[l])
                {
                    l++;
                    cnt2++;
                }
            }
             l=k;int cnt3=0;
            for(int j=i+1;j<n;j++)
            {
                if(arr[j]>arr2[l])
                {
                    l++;
                    cnt3++;
                }
            }

         // cout<<cnt2<<" "<<cnt3<<endl;



            if(cnt2>=cnt3)
            {
                cnt++;
                k++;
            }
            else
            {
                cnt++;
                cnt++;
                i++;
                k++;
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


