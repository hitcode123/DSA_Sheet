#include<bits/stdc++.h>
using namespace std;
int main()
{
// 1C0C1C1A0B1  --> 0C1A1B1C1C1B0A0


    int n;
    // cin>>n;
    string s;
    cin>>s;
    int result=int(s[0])-48;
    for(int i=1;i<s.length();i++)
    {
        if(s[i]=='C')
        {
            result=result^(int(s[i+1])-48);
            i++;
            continue;
        }
        else if(s[i]=='A')
        {
            result=result&(int(s[i+1])-48);
            i++;
            continue;
        }
        else if(s[i]=='B')
        {
            result=result|(int(s[i+1])-48);
            i++;
            continue;
        }
    }
    cout<<result;
        return 0;
}