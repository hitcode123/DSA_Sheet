#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int min_odd=INT_MAX;
    int max_even=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            max_even=max(arr[i],max_even);
        }
        else
        {
            min_odd=min(arr[i],min_odd);
        }
    }
    // cout<<min_odd<<" "<<max_even<<endl;
    int sme=INT_MIN;
    int smo=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            if(arr[i]>sme&&arr[i]<max_even)
            {
                sme=arr[i];
            }
            
        }
        else{
            if(smo>arr[i]&&arr[i]>min_odd)
            {
                smo=arr[i];
            }
        }
    }
    cout<<smo+sme<<endl;
    return 0;
}