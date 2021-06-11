

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
    int n,k,flag=0;
    cin>>n;
    if(n==3)
        cout<<"7"<<endl;
        else if(n==2)
	  {
	  	cout<<"1"<<endl;
	  }
    else
    {

        if(n%2==0)
        {
            k=n/2;


        }
        else
        {
            k=(n/2)-1;
            flag=1;
        }
        if(flag==1)
		cout<<"7";
        for(int i=0; i<k; i++  )
        {
            cout<<"1";
        }

        cout<<endl;
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

