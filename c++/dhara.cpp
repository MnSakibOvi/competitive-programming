
#include<iostream>
using namespace std;
int main()
{
    int n,i,j,m=0,s=0,sum=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        s=0;
        for(j=1;j<=i;j++)
        {
            m=m+1;
           // cout<<m;

         s=s+m;

        }

        cout<<s<<"+";
         sum=sum+s;
    }
    cout<<endl;
    cout<<sum;
}
