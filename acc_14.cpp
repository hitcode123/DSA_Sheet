#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int ndiv_m=0;
    int div_m=0;
    for(int i=1;i<=m;i++)
    {
        if(i%n==0)
        {
            div_m+=i;
        }
        else{
            ndiv_m+=i;
        }
    }
    // cout<<div_m<<" "<<ndiv_m<<endl;
    cout<<"hence the required answer is :"<<ndiv_m-div_m;
    return 0;
}