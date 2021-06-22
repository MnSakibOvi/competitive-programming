


#include<bits/stdc++.h>
using namespace std;
int main()
{

//     freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n,greater<int>());
        int sum=0;
        for(int i=2;i<n;i+=3)
        {
            sum+=arr[i];
            //cout<<arr[i]<<" ";
        }
        cout<<sum<<endl;

    }



}

