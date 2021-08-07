//


#include<bits/stdc++.h>
using namespace std;

//void solve(int cas)
//{
//    int n;
//    cin>>n;
//    int arr[n],arr2[n];
//
//    for(int i=0; i<n; i++)
//    {
//        cin>>arr[i];
//    }
//
//    for(int i=0; i<n; i++)
//    {
//        cin>>arr2[i];
//    }
//    cout<<"Case "<<cas<<": ";
//    sort(arr,arr+n);
//    sort(arr2,arr2+n);
//    int cnt=0,k=0;
//
//    for(int i=0; i<n; i++)
//    {
//        if(arr[i]>arr2[k])
//        {
//            cnt++;
//            cnt++;
//            k++;
//        }
//        else if(arr[i]==arr2[k])
//        {
//
//
//            int l=k+1,cnt2=0;
//            for(int j=i+1; j<n; j++)
//            {
//                if(arr[j]>arr2[l])
//                {
//                    l++;
//                    cnt2++;
//                }
//            }
//            l=k;
//            int cnt3=0;
//            for(int j=i+1; j<n; j++)
//            {
//                if(arr[j]>arr2[l])
//                {
//                    l++;
//                    cnt3++;
//                }
//            }
//
//            cout<<cnt2<<" "<<cnt3<<endl;
//
//
//
//            if(arr[i+1]>arr2[k+1])
//            {
//                cnt++;
//                k++;
//            }
//            else
//            {
//                cnt++;
//                cnt++;
//                i++;
//                k++;
//            }
//        }
//    }
//
//    cout<<cnt<<endl;
//
//}
//int main()
//{
//    vector<vector<int>> vect ;
//
//    for(int i=0; i<3; i++)
//    {
//        vector<int>v;
//        for(int j=0; j<3; j++)
//        {
//
//            int x;
//            cin>>x;
//            v.push_back(x);
//        }
//        vect.push_back(v);
//
//
//    }
//    for(int i=0; i<3; i++)
//    {
//        for(int j=0; j<3; j++)
//        {
//
//           cout<<vect[i][j]<<" ";
//
//        }
//                  cout<<endl;
//
//    }
//
//}
//
typedef unordered_multimap<char, int> Mymap;
int main()
{
    Mymap m;

    m.insert(Mymap::value_type('a', 1));
    m.insert(Mymap::value_type('b', 2));
    m.insert(Mymap::value_type('c', 3));
    m.insert(Mymap::value_type('b', 4));
    m.insert(Mymap::value_type('b', 5));

    cout << m.count('b') << endl;

    return 0;
}
