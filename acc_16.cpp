#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int sum=0;
    int num=1;
    for(int i=s.length()-1;i>=0;i--)
    {
        sum+=int(s[i]-'A'+1)*num;
        num*=5;
    }
    cout<<sum<<endl;

}