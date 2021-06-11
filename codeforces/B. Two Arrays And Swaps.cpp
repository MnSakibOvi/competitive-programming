#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int m,k;
        cin>>m>>k;
        int a[m],b[m];
        for(int j=0;j<m;j++)
        {
            cin>>a[j];
        }
        for(int j=0;j<m;j++)
        {
            cin>>b[j];
        }
        sort(a, a+m);
        sort(b, b+m);
        reverse(b, b+m);
        for(int l=0;l<k;l++)
        {
            if(a[l]<b[l])
                a[l]=b[l];
        }
        for(int j=0;j<m;j++)
        {
            sum=sum+a[j];
        }
         cout<<sum<<endl;
         sum=0;
    }

}
