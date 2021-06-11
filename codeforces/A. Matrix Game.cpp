#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t ;
    cin>>t;
    while(t--)
    {
        int n,m,cntj=0,cnti=0;
        cin>>n>>m;
        int arr[n][m];
        for(int i=0;i<n;i++)
        {
            int cnt=0;
            for(int j=0;j<m;j++)
            {
                cin>>arr[i][j];
                if(arr[i][j]==0)
                    cnt++;
            }
            if(cnt==m)
                cntj++;

        }
         for(int i=0;i<m;i++)
        {
            int cnt2=0;
            for(int j=0;j<n;j++)
            {

                if(arr[j][i]==0)
                    cnt2++;
            }
            if(cnt2==n)
                cnti++;

        }
       // cout<<"  cnti= "<<cnti<<endl;
        // cout<<"  cntj= "<<cntj<<endl;
        int res=min(cnti,cntj);
        if(res%2==0)
            cout<<"Vivek"<<endl;
        else
            cout<<"Ashish"<<endl;


    }

}
