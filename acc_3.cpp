#include<iostream>
#include<map>
using namespace std;
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    map<char,int> mp1;
    map<char,int> mp2;
    if(s1.length()!=s2.length())
    {
        cout<<"no";
        return 0;
    }
    for(int i=0;i<s1.length();i++)
    {
        mp1[s1[i]]++;
        mp2[s2[i]]++;
    }
    for(auto i:mp1)
    {
        if(mp1[i.first]==mp2[i.first])
        {
          continue;
        }
        else{
            cout<<"no";
            return 0;
        }
    }
    cout<<"yes"<<endl;

}