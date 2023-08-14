#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,T; // first for n,second energy
    cin>>n>>T;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int energy[n-1];
    for(int i=0;i<n-1;i++)
    {
        cin>>energy[i];
    }

    vector<int> minarr;
    int hour_sum=0;
    for(int i=0;i<n;i++)
    {
        if(i==0)
        {
        minarr.push_back(ceil(T/arr[i]));
        }
        else if(i>0)
        {

            if(energy[i-1]>arr[i-1])
            {   
                hour_sum+=ceil(energy[i-1]/arr[i-1]);
                int energyleft=abs(energy[i-1]-hour_sum*arr[i-1]);
                hour_sum+=1;
                hour_sum+=ceil((T-energyleft)/arr[i]);
            }
            else
            {
                 int energyleft=abs(energy[i-1]-arr[i-1]);
                 hour_sum+=1;
                 hour_sum+=ceil((T-energyleft)/arr[i]);
            }
            cout<<hour_sum<<endl;
            if(i==1)
            {
            minarr[i-1]=min(minarr[i-1],hour_sum);
            }
        }
    } 

    int minSum=INT_MAX;

    for(int i=0;i<n;i++)
    {
        minSum=min(minarr[i],minSum);
    }
    cout<<minSum<<endl;

    return 0;
}