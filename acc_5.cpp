#include<bits/stdc++.h>
using namespace std;
int main(){




    int n,num;
    cin>>num>>n;
    int temp=n;
    while(num>temp)
    {
              temp=temp*n;
    }

    temp=temp/n;

    vector<char> res;
    
    while(temp>0)
    { 
        // cout<<temp<<endl;
       int rem=num%temp;
       int val=num/temp;
       temp/=n;
       num=rem;
       if(val>9)
       {
          res.push_back('a'-32+(val-9)-1);
       }
       else
       {
        res.push_back(char(48+val));
       }
       
    }

    for(int i=0;i<res.size();i++)
    {
        cout<<res[i];
    }
    cout<<endl;
    return 0;
}