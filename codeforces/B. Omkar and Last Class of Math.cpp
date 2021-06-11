


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
    int n,f,s;
    cin>>n;
    vector<int>v;
    if(n%2==0)
    {


        cout<<n/2<<" "<<n/2<<endl;
        return;
    }


    int limit = sqrt(n);
    for(int i=1; i<=limit; i++)
    {
        if(n % i == 0)
        {
            if(n / i == i)
                v.push_back(i);
            else
            {
                v.push_back(i);
                v.push_back(n / i);
            }
        }
    }
    sort(v.begin(),v.end());

    for(int i=v.size()-2; i>=0; i--)
    {
       // cout<<v[i]<<" ";

        if((n-v[i])%v[i]==0)
        {
            cout<<v[i]<<" "<<n-v[i]<<endl;
            break;
        }
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

