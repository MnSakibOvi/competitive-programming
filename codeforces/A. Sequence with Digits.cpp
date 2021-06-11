

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
    unsigned long long int n,k,mn=INT_MAX,mx=0,mod,clone;
    cin>>n>>k;
    clone=n;
    if(k==1)
        cout<<n<<endl;
    else
    {
        for(int i=1; i<k; i++)
        {

            n=clone;
            mn=INT_MAX;
            mx=0;
            for(int i=0; n!=0; i++)
            {
                mod=n%10;
                mn=min(mn,mod);
                mx=max(mx,mod);
                //cout<<mod<<endl;
                n=n/10;
                if(mn==0 && mx==9)
                    break;

            }

            clone=clone+(mn*mx);
            //cout<<clone<<endl;
             if (mn==0)
		 {
		 	break;
		 }

        }
        cout<<clone<<endl;
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


