// gcd_solving one way

#include<bits/stdc++.h>
using namespace std;
int findgcd(int a,int b)
{
    if(a==0)
    {
        return b;
    }
    int x=findgcd(b%a,a);
    return x;
}
int main()
{        
    int a,b;
    cin>>a>>b;
    int num1=findgcd(a,b);
    cout<<num1<<endl;
    return 0;
}