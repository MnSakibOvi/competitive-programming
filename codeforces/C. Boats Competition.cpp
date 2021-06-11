#include<bits/stdc++.h>
using namespace std;

int main()
{
    int o;
    cin>>o;
       while(o--)
    {
        int n;
        cin>>n;
        int a[100]= {0};
        for(int i=1; i<=n; i++)cin>>a[i];
        int ans=0;
        for(int i=2; i<=2*n; i++)
        {
            int temp=0,b[100]= {0};
            for(int j=1; j<=n-1; j++)
            {
                for(int k=j+1; k<=n&&a[j]<i; k++)
                {
                    if(a[j]+a[k]==i&&b[k]==0&&b[j]==0)
                    {
                        b[k]=1;
                        temp++;
                        break;
                    }
                }
            }
            ans=max(ans,temp);
        }
        printf("%d\n",ans);
    }

}
