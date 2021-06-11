
#include<bits/stdc++.h>
using namespace std;


int main()
{

    //freopen("input.txt", "r", stdin);
   // freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;

    cin>>t;
    while(t--)
    {
        double value;
        char ch;
        map<char, double> mp;
        map <char, double>::iterator it;

        int n;
        cin>>n;

        for(int i=1; i<=n ; i++)
        {
            cin>>ch;
            cin>>value;
            mp[ch] = value;
        }
        long int k,len =0;
        double sum = 0;
        cin>>k;
        string str ;
        cin.ignore();
        for(int j=0; j<k; j++)
        {

            getline(cin,str);
            len = str.size();
            for(int i=0; i<len; i++)
            {
                it = mp.find(str[i]);
                if(it != mp.end())
                    sum =sum+ it->second;
            }
        }
        double mn=sum/100.00;

        printf("%.2lf$\n",mn);

    }
}
