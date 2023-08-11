#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1;
    char ch1;
    char ch2;
    cin>>s1;
    cin>>ch1>>ch2;
    vector<char> res;
    for(int i=0;i<s1.length();i++)
    {
        if(s1[i]==ch1)
        {
            res.push_back(ch2);

        }
        else if(s1[i]==ch2)
        {
            res.push_back(ch1);
        }
        else
        {
            res.push_back(s1[i]);
        }
    }

    for(int i=0;i<res.size();i++)
    {
        cout<<res[i];
    }
    return 0;
}