/// ***********************************************T
/// O *                                           *A
/// O *    Solved By : mn_sakib_ovi(DIU)          *S
/// v *      Be Positive,be Happy.                *I
/// I *                                           *I
/// ***********************************************N
#include<bits/stdc++.h>
using namespace std;
void solve()
{
		long long int n,res=9999999999999;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)
			cin>>arr[i];
			sort(arr,arr+n);
		for(int k=arr[0];k<=arr[n-1];k++)
		{
			long long int sum=0;
                  for(int j=0;j<n;j++)
			{

					int r=abs(k-arr[j]);
					sum=sum+r;

			}
			if(sum<res)
				res=sum;

			sum=0;
		}
		cout<<res<<endl;
}
int main()
{
 //freopen("input.txt", "r", stdin);
//freopen("output.txt", "w", stdout);
    int t;
    cin>>t;
    // t=1;
    while(t--)
    {
    	solve();
    }
}




