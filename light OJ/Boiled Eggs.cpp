

#include<bits/stdc++.h>
using namespace std;
//int main()
//{
//    int t;
//    cin>>t;
//
//    for(int k=1; k<=t; k++)
//    {
//    	int n,cn,cw,cnt=0,sum=0;
//    	cin>>n>>cn>>cw;
//    	int arr[n];
//    	for(int i=0;i<n;i++)
//	{
//		cin>>arr[i];
//
//
//
//	}
//	for(int i=0;i<n;i++)
//	{
//		sum=sum+arr[i];
//		if(sum<=cw)
//		cnt++;
//		else
//			break;
//		if(cnt==cn)
//			break;
//	}
//
//
//
//       cout<<"Case "<<k<<": "<<cnt<<endl;
//
//
//
//    }
//    return 0;
//}
//
//
//
int main()
{
    int t;
    long n, m, w;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        scanf("%ld", &w);
        if (w % 2 == 0)
        {
            n = w / 2;
            m = 2;
            while (n % 2 == 0)
            {
                cout<<n<<" "<<m<<endl;
                n /= 2;
                m *= 2;
            }
            printf("Case %d: %ld %ld\n", i, n, m);
        }
        else
            printf("Case %d: Impossible\n", i);
    }
    return 0;
}
