#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tst, i;

    scanf("%d", &tst);
    for(i=1; i<=tst; i++)
    {
        int n,sum=0,x;
        cin>>n;
        for(int j=0;j<n;j++)
        {
        	cin>>x;
        	if(x>0)
			sum+=x;

        }

       cout<<"Case "<<i<<": "<<sum<<endl;
    }
    return 0;
}



