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
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    sort(arr,arr+n);
   // reverse(arr,arr+n);

        int cnt=0,sum=0, k=1;
        for(int i=0; i<n; i++)
        {
		 if(arr[i]<=k)
		 {


		 	cnt++;
		 	k=1;
		 }
		 else
			k++;
        }
        cout<<cnt<<endl;

}
int main()
{
    int t;
    cin>>t;
    //t=1;
    while(t--)

        solve();

}
