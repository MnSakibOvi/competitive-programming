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
    int n,k,fif=0,tf=0,flag=0;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(int j=0; j<n; j++)
    {
        if(arr[j]==50)
        {
            if(tf>=1)
            {
                tf=tf-1;
            }
            else
            {
            	flag=1;
            	break;

            }
        }
        if(arr[j]==100)
	  {
	  	if(fif>0)
		{
			if(tf>=1)
			{
				fif--;
				tf=tf-1;
			}
			else
			{
				flag=1;
				break;

			}
		}
		else if(tf>2)
		{
			tf=tf-3;
		}
		else
		{
			flag=1;
			break;
		}



	  }

        if(arr[j]==25)
            tf++;
        if(arr[j]==50)
            fif++;
           // cout<<tf<<" "<<fif<<endl;
    }
    if(flag==0)
    {
    	cout<<"YES"<<endl;
    }
    else
    {
    	cout<<"NO"<<endl;
    }





}
int main()
{
    int t;
    // cin>>t;
    t=1;
    while(t--)
    {
        solve();
    }
}

