
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
int k,arr[8];
string str[6]={"BCG","BGC","CBG","CGB","GBC","GCB"};
while(cin>>k)
{
	for(int i=0;i<8;i++)
		cin>>arr[i];
      int arr2[6];
      arr2[0]=arr[0]+arr[1]+arr[2]+arr[3]+arr[5]+arr[7];
      arr2[1]=arr[0]+arr[1]+arr[2]+arr[4]+arr[5]+arr[6];
      arr2[2]=k+arr[0]+arr[4]+arr[3]+arr[5]+arr[7];
      arr2[3]=k+arr[0]+arr[4]+arr[2]+arr[6]+arr[7];
       arr2[4]=k+arr[1]+arr[4]+arr[3]+arr[6]+arr[5];
        arr2[5]=k+arr[1]+arr[2]+arr[3]+arr[6]+arr[7];
        int res=INT_MAX;
        string res2;


        for(int i=0;i<6;i++)
	  {
	  	//cout<<str[i]<<"= "<<arr2[i]<<endl;
	  	if(arr2[i]<res)
		{
			res=arr2[i];
			res2=str[i];
		}
	  }
	  cout<<res2<<" "<<res<<endl;
}



}
int main()
{
//freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
    int t;
    //cin>>t;
    t=1;
    while(t--)
    {
    	solve();
    }
}


