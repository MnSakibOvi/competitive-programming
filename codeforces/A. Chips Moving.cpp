

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,s=1,cl;
    cin>>n;
    vector<int> v;
    map<int, int> mp;
    int arr[n],cnt1=0,cnt2=0;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        if(arr[i]%2==0)
            cnt2++;
        else
            cnt1++;
//        mp[arr[i]]++;
//        if(mp[arr[i]]>s)
//        {
//            cl=arr[i];
//            s=mp[arr[i]];
//        }

    }

    sort(arr, arr + n);



//    if(s>1)
//    {
//        if(cl%2==0)
//        {
//            cout<<cnt1<<endl;
//        }
//        else
//            cout<<cnt2<<endl;
//    }
//
//    else
        cout<<min(cnt1,cnt2)<<endl;









}
