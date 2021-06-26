


#include<bits/stdc++.h>
using namespace std;
vector<int >v;
int check(int k)
{
  // cout<<"k="<<k<<" sum= ";
    int cnt=0,sum=0,flag=0;
    for(int i=0;i<v.size();i++)
    {
        sum+=v[i];
        if(sum+v[i+1]>k && i<v.size()-1)
        {
            //cout<<sum<<" ";
           // cout<<v[i]<<endl;
            cnt++;
            sum=0;
        }

    }
cnt++;
    return cnt;
}
int main()
{
    int t;

    scanf("%d", &t);
    for (int k = 1; k <= t; k++)
    {
        int n,m,x,mx=INT_MIN,sum=0;

        cin>>n>>m;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            v.push_back(x);
            mx=max(mx,x);
            sum+=x;
        }
        int low=mx;
      long long   high=sum,g=0,mid,ans=INT_MAX,cn=100;
       while(low<=high)
        {
            mid=(low+high)/2;
           g=check(mid);

//           cout<<"->"<<hiacgh<<" "<<low<<endl;
//            cout<<mid<<" a= "<<g<<endl<<endl;;
            if(g<=m)
            {


                high=mid-1;

                    ans=min(mid,ans);
            }
            else if(g>m)
               low=mid+1;

        }






            printf("Case %d: ", k);
            cout<<ans<<endl;
            //cout<<mx<<" "<<sum<<endl;

  v.clear();

    }
    return 0;
}
