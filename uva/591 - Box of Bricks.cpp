

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
	int n,k=0;
	while(cin>>n && n!=0)
	{
		//if(k!=0)

		k++;
		cout<<"Set #"<<k<<endl;
		int sum=0;
		int arr[n];
		for(int i=0;i<n;i++)
		{


			cin>>arr[i];
			sum=sum+arr[i];
		}
		int avrg=sum/n,sum2=0;
            for(int i=0;i<n;i++)
		{
			if(arr[i]>avrg)
			{
				sum2+=(arr[i]-avrg);
			}
		}
		cout<<"The minimum number of moves is "<<sum2<<".";
cout<<endl<<endl;
	}




}
int main()
{
    int t;
  //  cin>>t;
    t=1;
    while(t--)
    {
    	solve();
    }
}





