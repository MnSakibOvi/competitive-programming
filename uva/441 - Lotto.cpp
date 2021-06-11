

/// ***********************************************T
/// O *                                           *A
/// O *    Solved By : mn_sakib_ovi(DIU)          *S
/// v *      Be Positive,be Happy.                *I
/// I *                                           *I
/// ***********************************************N
#include<bits/stdc++.h>
using namespace std;
int fact(int n)
{
    if(n > 1)
        return n * fact(n - 1);
    else
        return 1;
}
int main()
{
    int n;

    //t=1;
    while(cin>>n)
    {
    	if(n==0)
		break;
    	int arr[n];
    	int s=(fact(n)/(720*fact(n-6)));
    	cout<<s<<endl;
    	for(int i=0;i<n;i++)
		cin>>arr[i];
	while(s--)
	{

		for(int i=0;i<6;i++)
		{
			cout<<arr[i];
		}


	}
    }
}


