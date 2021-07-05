
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;

    vector<vector<char>> v;
    while(cin>>str && str!="#")
    {
        if(str[0]!='e')
        {
            vector<char>vv;
            char arr[5];
            for(int i=0; i<str.size(); i++)
            {
                if(str[i]=='r')
                    arr[0]=str[i+2];
                else if(str[i]=='o')
                    arr[1]=str[i+2];
                else if(str[i]=='y')
                    arr[2]=str[i+2];
                else if(str[i]=='g')
                    arr[3]=str[i+2];
                else if(str[i]=='b')
                    arr[4]=str[i+2];

            }
            for(int i=0; i<5; i++)
            {
                // cout<<arr[i]<<" ";
                vv.push_back(arr[i]);
            }
            v.push_back(vv);

        }
        else
        {
            int mx=INT_MIN,ans=0;
            for (int i = 0; i < v.size(); i++)
            {
                int cnt=0;
                for (int j = 0; j < v[i].size(); j++)
                {
                    char c=v[i][j];
                    for(int k=0; k<v.size(); k++)
                    {
                        if(c==v[k][j])
                            cnt++;
                    }
                }
                //cout<<cnt<<endl;
                if(cnt>mx)
                {
                    mx=cnt;
                    ans=i;

                }



            }
            cout<<ans+1<<endl;
 v.clear();
        }
    }
}
