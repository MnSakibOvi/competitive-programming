#include<bits/stdc++.h>
using namespace std;

void solve();

void multipleTestCase()
{
    int t;
cin>>t;
    while(t--)
        solve();
}


int main()
{
    multipleTestCase();
    return 0;
}

void solve()
{
  long long int n,m,j=1,a=0;
    cin>>n>>m;
    int arr[n],arr2[n];
    for(int i=0;i<n;i++)
    {


        cin>>arr[i];
        arr2[i]=arr[i];
    }


        int low=0;
        int up=n-1;

        for(int k=0;k<m;k++)
        {
            if(k==0 || k%2==0)
            {
                arr2[a]=arr[low];
                low++;
            }
            if(k%2==1)
            {
                arr2[a]=arr[up];
                up--;
            }
            cout<<arr2[a]<<" ";
            a++;

        }
       // cout<<endl;
        if(m%2== 1 || m<n)

            reverse(arr2+low,arr+up);




        for(int i=low;i<up;i++)
            cout<<arr2[i]<<" ";

            cout<<endl;

}



