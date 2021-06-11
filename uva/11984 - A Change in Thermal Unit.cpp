#include<bits/stdc++.h>
using namespace std;


int main()
{
  //  freopen("input.txt", "r", stdin);
 // freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
    	float c,f;
    	float ff,sum,cc;
    	cin>>c>>f;
    	ff=((c*9)/5)+32;
    	sum=ff+f;
    	cc=((sum-32)*5)/9;
    	//cout<<"Case "<<i<<": ";
    	printf("Case %d: %.2f\n",i,cc);



    }


}

