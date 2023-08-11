#include<bits/stdc++.h>
using namespace std;
int main()
{

    int a,b;
    cin>>a>>b;
    set<int> s;
    int sum=0;
    for(int i=a+1;i<b;i++)
    {
        if(i%3==0&&i%5==0)
        {   
            if(s.find(i)==s.end())
            {
            s.insert(i);
            sum+=i;

            }
        }
    }
    cout<<"hence the sum is"<<" "<<sum;

    return 0;
}