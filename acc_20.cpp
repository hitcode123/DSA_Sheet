#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int max_num=INT_MIN;
    for(int i=0;i<n;i++)
    {
        max_num=max(max_num,arr[i]);
    }
    int smax=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(smax<arr[i]&&arr[i]<max_num)
        {
            smax=arr[i];
        }
    }
    int count1st=0;
    int count2nd=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==smax)
        {
            count2nd++;
        }
        else if(arr[i]==max_num)
        {
            count1st++;
        }
    }
    cout<<"hence the number of removed candidates :"<<" "<<(count1st+count2nd-2)<<endl;

    return 0;
}