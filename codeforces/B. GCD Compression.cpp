

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
    int n,k,cnt=0,f=0;
    vector<int> v1;
    vector<int> v2;
    cin>>n;
    int arr[n*2];
    for(int i=0; i<n*2; i++)
    {
        cin>>arr[i];
        k=arr[i];
        if(k%2==0)
            v2.push_back(i+1);
        else
            v1.push_back(i+1);
    }
    int s1=v1.size();
    int s2=v2.size();
    //cout<<s1<<s2<<endl;
    for(int i=0; i<s1; i++)
    {
        if(i==(s1-1))
            break;
        else
        {
            cout<<v1[i]<<" "<<v1[i+1]<<endl;
            cnt++;
        }
        i++;
        if(cnt==n-1)
        {
            f=1;

            break;
        }

    }
    if(f==0)
    {


        for(int i=0; i<s2; i++)
        {
            if(i==(s2-1))
                break;
            else
            {
                cout<<v2[i]<<" "<<v2[i+1]<<endl;
                cnt++;

            }
            i++;
            if(cnt==n-1)
                break;

        }
    }
    //cout<<endl;

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


