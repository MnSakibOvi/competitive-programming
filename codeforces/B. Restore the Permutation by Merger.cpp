
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int k=0; k<t; k++)
    {
        int n;
        cin>>n;
        int arr[n*2];
        for(int i=0; i<n*2; i++)
        {
            cin>>arr[i];
        }
        for(int i=0; i<n*2; i++)
        {

            if(arr[i]>0)
            {

                    for(int j=i+1; j<n*2; j++)
                    {
                        if(arr[i]==arr[j])
                            arr[j]=-5;
                    }

            }
        }
        for(int l=0; l<n*2; l++)
        {
            if(arr[l]>0)
                cout<<arr[l]<<" ";

        }
        cout<<endl;


    }


}
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,x;
    cin>>t;
    map<int,int> mp;
    vector<int> v;
    while(t--)
    {
        cin>>x;
        for(int i=0; i<x*2; i++)
        {
            int n;
            cin>>n;
            if(mp.find(n)== mp.end())
            {
                v.push_back(n);
            }
            mp[n]++;
        }
        for(int i=0; i<x; i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
        mp.clear();
        v.clear();
    }

    return 0;
}
