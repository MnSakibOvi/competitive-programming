


/// *********************************************** T
/// O *                                           * A
/// O *    Solved By : mn_sakib_ovi(DIU)          * S
/// v *      Be Positive,be Happy.                * I
/// I *                                           * N
/// *********************************************** N
#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int n,k;
	cin>>n;
	int cnt=n-1;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int j=0;j<n-1;j++)
	{
		if(arr[j]>1 )
		{
			cnt=j;
			break;
		}



	}
	if(cnt%2==0)
	{
		cout<<"First"<<endl;
	}
	else
		cout<<"Second"<<endl;






}
int main()
{
    int t;
    cin>>t;
    //t=1;
    while(t--)
    {
    	solve();
    }
}


