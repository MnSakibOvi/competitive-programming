#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,k=0;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        if (arr[i]==1)
        {

            k=1;

        }
    }
    if(k==0)
        cout<<"EASY";
        else
            cout<<"HARD";


}
