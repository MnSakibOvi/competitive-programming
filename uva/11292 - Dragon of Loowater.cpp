



#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;

    //t=1;
    while(cin>>n>>m && n!=0 && m!=0)
    {
        int dra[n];
        int arm[m];
        for(int i=0;i<n;i++)
        {
            cin>>dra[i];
        }
    	 for(int i=0;i<m;i++)
        {
            cin>>arm[i];
        }
        if(m<n)
        {
            cout<<"Loowater is doomed!"<<endl;
        }
        else
        {
            sort(dra,dra+n);
            sort(arm,arm+m);
            int cnt=0,k=0,sum=0;
            for(int i=0;i<m;i++)
            {
                if(arm[i]>=dra[k])
                {
                    cnt++;
                    k++;
                    sum+=arm[i];
                }
           if(k==n)
            break;
            }
            if(cnt==n)
            {
               cout<<sum<<endl;
            }
           else
            cout<<"Loowater is doomed!"<<endl;

        }
    }
}


