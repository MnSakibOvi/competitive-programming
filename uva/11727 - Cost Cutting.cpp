#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
    int t,cnt=1;
    cin>>t;
    if(t<=0 && t>20)
        return 0;
    while(t--)
    {
        int arr[3];
        for(int i=0;i<3;i++)
        {
            cin>>arr[i];
        }
     sort(arr,arr+3);
     cout<<"Case "<<cnt<<": "<<arr[1]<<endl;
     cnt++;
    }

}
