#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    // aA1_67
    // a987 abC012
    cout<<s<<endl;

    if(s.length()<4&&s[0]>='0'&&s[0]<='9')
    {
        cout<<"not a valid password";
        return 0;
    }
    int count_09=0;
    int count_AB=0;
    int count_sl=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]>='0'&&s[i]<='9')
        {
            count_09++;
        }
        else if(s[i]=='/')
        {
            count_sl++;
        }
        else if(s[i]>='A'&&s[i]<='Z')
        {
            count_AB++;
        }
    }
    if(count_09==0||count_AB==0||count_sl>0)
    {
        cout<<"Not a valid Password"<<endl;
    }
    else
    {
        cout<<"It is a valid password"<<endl;
    }
    return 0;
}