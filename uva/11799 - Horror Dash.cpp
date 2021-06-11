
/// *** T
/// O *                                           * A
/// O *    Solved By : tasin                      * S
/// v *      Be Positive,be Happy.                * I
/// I *                                           * N
/// *** N
#include<bits/stdc++.h>
using namespace std;

void solve(int k)
{
   int n,mx=-1;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
       mx=max(mx,arr[i]);
   }
   cout<<"Case "<<k<<": "<<mx<<endl;



}


int main()
{
//    freopen("input.txt", "r", stdin);
//   freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int j,i;
    cin>>j;
    for(i=1;i<=j;i++)
	solve(i);
}
