
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
  long long int n,k;
  cin>>n>>k;
  if(n==k)
{
	cout<<"="<<endl;
}
else if(n<k)
{
	cout<<"<"<<endl;
}
else
{
	cout<<">"<<endl;
}


}


int main()
{
   // ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
   // freopen("output.txt", "w", stdout);
    int t;
    cin>>t;
    while(t--)
        solve();
}
