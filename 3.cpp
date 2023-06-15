#include <bits/stdc++.h> 
using namespace std;
long long maxSubarraySum(int arr[], int n)
{
   long long sum=0;
   long long max_value=-(1e18);
   for(int i=0;i<n;i++)
   {
       sum+=arr[i];
       if(sum<0)
       {
           sum=0;
       }
       max_value=max(sum,max_value);
       
   }
   return max_value;


}

int main()
{   
    int arr[]={1,2,7,-4,3,2,4,-10,9,1};
    long long value= maxSubarraySum(arr,sizeof(arr)/sizeof(int));
    cout<<value<<endl;
    return 0;
}