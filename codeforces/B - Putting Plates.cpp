

#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int h,w;
    cin>>h>>w;
    int k=0,l=0,m=0;
    int arr[h][w];
    for(int i=0; i<h; i++)
    {
        for(int j=0; j<w; j++)
        {
            arr[i][j]=0;
        }
    }
    for(int i=0; i<h; i+=2)
    {

        if(i+1 ==h-1)
            i++;
            arr[i][0]=1;
            arr[i][w-1]=1;

    }
    for(int j=0; j<w; j+=2)
    {


    if(j+1 ==w-1)

        j++;

        arr[0][j]=1;
        arr[h-1][j]=1;


    }
    for(int i=0; i<h; i++)
    {
        for(int j=0; j<w; j++)
        {
            cout<<arr[i][j];
        }
        cout<<endl;
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




