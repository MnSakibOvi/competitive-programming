#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,flag=0,flag2=0;
    cin>>n;
    int arr[n],arr2[n-1],arr3[n-2];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    for(int i=0; i<n-1; i++)
        cin>>arr2[i];
    for(int i=0; i<n-2; i++)
        cin>>arr3[i];
    sort(arr, arr+n);
    sort(arr2, arr2+n-1);
    sort(arr3, arr3+n-2);
    for(int i=0; i<n-1; i++)
    {
        if(arr[i]==arr2[i])
            flag=1;
        else
        {
            cout<<arr[i]<<endl;
            flag=0;
            break;
        }
    }

    if(flag==1)
        cout<<arr[n-1]<<endl;

    for(int i=0; i<n-2; i++)
    {
        if(arr2[i]==arr3[i])
            flag=1;
        else
        {
            cout<<arr2[i]<<endl;
            flag=0;
            break;
        }
    }
    if(flag==1)
        cout<<arr2[n-2]<<endl;



}
int main()
{

    solve();

}
