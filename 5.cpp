#include <bits/stdc++.h> 
using namespace std;
// Buy and sell profit by simple tecnique to track profit
int maximumProfit(vector<int> &prices){
    int n=prices.size();
    int maxi=INT_MIN;
    int result=INT_MIN;
    for(int i=n-2;i>=0;i--)
    {
       maxi=max(prices[i+1],maxi);
       if(maxi-prices[i]<0)
       {
            continue;
       }
       else
       {
           result=max(result,maxi-prices[i]);
       }

    }
   return  result==INT_MIN?0:result;
    // Write your code here.
}

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        vector<int> prices(n);
        for(int i=0;i<n;i++)
        {
            int val;
            cin>>val;
            prices.push_back(val);
        }
        cout<<maximumProfit(prices)<<endl;


    }
}