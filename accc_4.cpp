#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum;
    cin>>n>>sum;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    if(n==2)
    {
        cout<<-1<<endl;
    }
    else
    {
       if(arr[0]+arr[1]<sum)
       {
        cout<<arr[0]*arr[1]<<endl;
       }
       else
       {
        cout<<0<<endl;
       }
    }
    return 0;
}