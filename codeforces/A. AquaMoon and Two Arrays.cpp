

#include <bits/stdc++.h>
using namespace std;

// Main Function
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n],arr2[n],sum=0,sum2=0;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            sum+=arr[i];

        }
        for(int i=0; i<n; i++)
        {
            cin>>arr2[i];
            sum2+=arr2[i];

        }
        if(sum!=sum2)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            vector<int>v,v1;
            for(int i=0; i<n; i++)
            {
                if(arr[i]!=arr2[i])
                {
                    if(arr[i]>arr2[i])
                    {
                        int g=arr[i]-arr2[i];
                        for(int j=i+1; j<n; j++)
                        {
                            if(arr2[j]>arr[j])
                            {
                                int f=arr2[j]-arr[j];
                                int mn=min(g,f);
                                arr[i]-=mn;
                                arr[j]+=mn;
                                g-=mn;
                                if(mn!=0)
                                {

                                    while(mn--)
                                    {


                                        v.push_back(i+1);
                                        v1.push_back(j+1);
                                    }
                                }

                            }
                        }
                    }
                    else
                    {
                        int g=arr2[i]-arr[i];
                        for(int j=i+1; j<n; j++)
                        {
                            if(arr2[j]<arr[j])
                            {
                                int f=arr[j]-arr2[j];
                                int mn=min(g,f);
                                arr[i]+=mn;
                                arr[j]-=mn;
                                g-=mn;
                                if(mn!=0)
                                {
                                    while(mn--)
                                    {


                                        v.push_back(j+1);
                                        v1.push_back(i+1);
                                    }
                                }

                            }
                        }
                    }
                }
            }

            cout<<v.size()<<endl;
            for(int i=0; i<v.size(); i++)
                cout<<v[i]<<" "<<v1[i]<<endl;
        }

    }
    return 0;
}
