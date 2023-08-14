#include<bits/stdc++.h>
using namespace std;
int findminEnergy(int hour,int i,vector<int> &city,vector<int> &energy,int curEnergy,int reqEnergy)
{
    if(curEnergy>=reqEnergy)
    {
        return hour;
    }

    if(curEnergy>energy[i])
    {
        // jump
        int ans1=INT_MAX;
        if(i<energy.size())
        {
            ans1=findminEnergy(hour+1,i+1,city,energy,curEnergy-energy[i],reqEnergy);
        }
        int ans2=findminEnergy(hour+1,i,city,energy,curEnergy+city[i],reqEnergy);
        return min(ans1,ans2);
    }
    int ans3=findminEnergy(hour+1,i,city,energy,curEnergy+city[i],reqEnergy);
    return ans3;
}
int main()
{
    int n,T;
    cin>>n>>T;
    vector<int> city(n);
    vector<int> energy(n-1);
    for(int i=0;i<n;i++)
    {
        cin>>city[i];
    }
    for(int i=0;i<n-1;i++)
    {
        cin>>energy[i];
    }

    int hour=0;
    int i=0;
    int cEnergy=0;
    int ans=findminEnergy(hour,i,city,energy,cEnergy,T);
    cout<<ans;
    return 0;
}