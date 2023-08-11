#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int num,diff;
    cin>>num>>diff;
    int count=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(abs(arr[i]-num)<=diff)
        { 
           count++;     
        }
    }
    cout<<"hence the answer is"<<" :"<<" "<<count<<endl;
    return 0;
}