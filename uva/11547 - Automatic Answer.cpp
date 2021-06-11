#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

      freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int t;
    cin>>t;
    if(t<=0)
        return 0;
    while(t--)
    {
     long long int n,m1,m2,d,a,d2,s,res;
        cin>>n;
        m1=n*567;
        d=m1/9;
        a=d+7492;
        m2=a*235;
        d2=m2/47;
        s=d2-498;
        res=abs((s/10)%10);
        cout<<res<<endl;
    }

}

//int main()
//{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
////    freopen("input.txt", "r", stdin);
////    freopen("output.txt", "w", stdout);
//    solve();
//    return 0;
//}
