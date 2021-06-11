
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int m=(n)+1;//size of squre
    int g=n,mid=0,cn=1,flag2=0;
    /*g for gap before count start.
    mid for row increasing and decreasing limit
    */

    for(int i=1; i<=(n*2)+1; i++)
    {
        int flag=0;
        int cnt=0;
        int mn=0;
        for(int j=1; j<=m; j++)
        {


            if(j>g  )//for first gap
            {
            	if(j<m)
                cout<<mn<<" ";
                else
			cout<<mn;//main count
                if(mn==mid)//for decreasing limit of main count
                {
                    flag=1;
                }
                if(flag==1)//deecresing main count
                    mn--;
                else
                    mn++;
            }
            else
                cout<<"  ";
        }

        cout<<endl;
        if(m==(n*2)+1)//when first half will be done
            flag2=1;
        if(flag2==0)
        {
            g--;
            mid++;
            m++;
        }
        else
        {
            g++;
            mid--;
            m--;
        }
        //kkkkkkkkkkkkkkk

    }
}
int main()
{
	freopen("output.txt", "w", stdout);
    int t;
    // cin>>t;
    t=1;
    while(t--)
    {
        solve();
    }
}
