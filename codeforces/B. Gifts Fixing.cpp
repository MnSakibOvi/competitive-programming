#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int m;
        cin>>m;
        long long int arr[m],arr2[m],sm1=999999999999999,sm2=99999999999999,sum=0;
        for(int j=0;j<m;j++)
        {
            cin>>arr[j];
            if(arr[j]<sm1)
                sm1=arr[j];
        }
        for(int j=0;j<m;j++)
        {
            cin>>arr2[j];
            if(arr2[j]<sm2)
                sm2=arr2[j];
        }
        //cout<<sm1<<" "<<sm2<<endl;
        for(int k=0;k<m;k++)
        {
            int a=arr[k]-sm1;
            int b=arr2[k]-sm2;
            int c=max(a,b);
            sum=sum+c;
        }
        cout<<sum<<endl;


    }

}
