#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n,m,i;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>m;
        int arr[m];
         for(int j=0;j<m;j++)
         {
             cin>>arr[j];
         }
         int flag=0;

//         if(m==1)
//           flag=0;
            sort(arr, arr+m);
        for(int k=0;k<m-1;k++)
        {
            int s=abs(arr[k]-arr[k+1]);
            if(s>1)
            {
               cout<<"NO"<<endl;
               flag=1;
               break;
            }

        }
        if(flag==0)
            cout<<"YES"<<endl;


    }

}
