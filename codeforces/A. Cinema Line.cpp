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
    int n,flag=0,z,flag2=0,o;
    cin>>n;
    string str;
    cin>>str;
    for(int i=0; i<n; i++)
    {
        if(i!=(n-1))
    {
        if(str[i]=='1' && str[i+1]=='0')
            {
                flag=1;

            }
    }
    if(str[i]=='0')
	z=i;
    if(str[i]=='1' && flag2==0)
    {
    	o=i;
    	flag2=1;
    }


    }
    if(flag==1)
    {
    	for(int i=0;i<o;i++)
	{
		cout<<str[i];
	}
	for(int i=z;i<n;i++)
	{
		cout<<str[i];
	}
	cout<<endl;

    }
    else
    {
    	cout<<str<<endl;
    }


}
int main()
{
    int t;
    cin>>t;
    // t=1;
    while(t--)
    {
        solve();
    }
}


