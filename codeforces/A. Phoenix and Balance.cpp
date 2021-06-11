#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v;
    for(int i=1;i<=n;i++)
    {
        int s;
        cin>>s;
        for(int j=1;j<=s;j++)
        {

        int sum=pow(2,j);
        v.push_back(sum);
        }
        int len=v.size(),sum=0,sum2=0;
        sum=v[s-1];
        for(int k=0;k<(len/2)-1;k++)
        {
            sum=sum+v[k];
        }
        for(int k=(len/2)-1;k<=len-2;k++)
        {
            sum2=sum2+v[k];
        }
        cout<<sum-sum2<<endl;
        v.clear();


    }
}
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,sum =0;
        cin>>a;
        for(int i=1; i<=(a/2); i++)
        {
            sum = sum + pow(2,i);
        }
        cout<<sum<<endl;

    }


}
