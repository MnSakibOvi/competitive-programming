

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
    int n,x,sum=0;
    cin>>n>>x;
    int arr[n];
    vector<int>v;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        sum+=arr[i];
        if(arr[i]%x!=0)
		v.push_back(i+1);


    }
    int d=0,t=n-1;
    int cnt=0;
  //  cout<<"ans =";
    if(sum%x!=0)
        cout<<n<<endl;
    else
    {


    	if(v.size()==0)
		cout<<"-1"<<endl;

	else if(v.size()==1)
	{
		cout<<max(n-v[0],v[0])<<endl;
	}
	else
	{
		int k=v[0];
		int l=v[v.size()-1];
		if(k>n/2)
		{
			k=(n-k)+1;
		}
		if(l>n/2)
		{
			l=(n-l)+1;
		}
		int mx=max((n-k),(n-l));
		cout<<mx<<endl;
	}




}
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





