

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
    int n,k,flag=0,sum=0,m=0,p=0,z=-1;
    cin>>n;
    int arr[n],arr2[n];
    for(int i=0; i<n; i++)

        cin>>arr[i];


    for(int i=0; i<n; i++)

        cin>>arr2[i];

    if(arr[0]!=arr2[0])
        flag=1;

    for(int i=0; i<n; i++)
    {
    	if(arr[i]!=arr2[i])
	{



        if(arr2[i]>0 && i!=0)
        {

            if( p==0 )
                flag=1;


        }

        if(arr2[i]<0 && i!=0)
        {

             if( m==0  )
                flag=1;


        }
        if(arr2[i]==0 && i!=0)
        {

                if(arr[i]<0 && p==0)
                    flag=1;
               else if(arr[i]>0 && m==0)
                    flag=1;


        }




        //for 0 er porer sonkha
        if(p==0 && m==0 && i!=0 )
        {
            flag=1;

        }
	}


        if(arr[i]>0)
            p=1;
        if(arr[i]<0)
            m=-1;
        if(arr[i]==0)
            z=0;
    }
    if(flag==1)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;





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

