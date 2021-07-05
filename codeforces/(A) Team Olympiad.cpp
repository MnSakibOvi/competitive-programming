//
//#include<bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//    int t,cnt=0,cnt1=0,cnt2=0,k;
//    cin>>t;
//    int v[t];
//    vector<int> v1;
//    for(int h=0; h<t; h++)
//    {
//        cin>>v[h];
//        if(v[h]==1)
//            cnt++;
//        if(v[h]==2)
//            cnt1++;
//        if(v[h] == 3)
//            cnt2++;
//    }
//    v1.push_back(cnt);
//    v1.push_back(cnt1);
//    v1.push_back(cnt2);
//    sort(v1.begin(),v1.end());
//    cout<<v1[0]<<endl;
//    for(int i=0; i<v1[0]; i++)
//    {
//
//        int res =0, res1 =0, res2= 0;
//        for(int j=0; j<t; j++)
//        {
//            if(v[j]==1 && res == 0)
//            {
//                cout<<j+1<<" ";
//                v[j]=-1;
//                res++;
//
//            }
//             if(v[j]==2 && res1 ==0)
//            {
//                cout<<j+1<<" ";
//                v[j]=-1;
//                res1++;
//            }
//             if(v[j]==3 && res2 == 0)
//            {
//                cout<<j+1<<" ";
//                v[j]=-1;
//                res2++;
//            }
//        }
//        cout<<endl;
//    }
//
//}
// CPP program to illustrate using
// std :: upper_bound with arrays
#include <bits/stdc++.h>
using namespace std;

// Main Function
int main()
{
	int arr[] = { 10, 20, 30, 30, 50 };

	// Print elements of array
	cout << "Array contains :";
	for (int i = 0; i < 5; i++)
		cout << " " << arr[i];
	cout << "\n";

	// using upper_bound
	int upper1 = upper_bound(arr, arr+5, 30) - arr;
	int upper2 = lower_bound(arr, arr+5, 30) - arr;

	cout << "\nupper_bound for element 35 is at position : "
			<< (upper1);
	cout << "\nupper_bound for element 45 is at position : "
			<< (upper2);

	return 0;
}
