#include<bits/stdc++.h>
using namespace std;
int solve(int hour,int index,vector<int> &city,vector<int> &energy,int currEnergy,int requiredEnergy){
    if(index>=city.size()){
        return INT_MAX;
    }
    if( currEnergy>=requiredEnergy){
        return hour;
    }
    if(currEnergy>=energy[index]){
        //jumping city
        int ans1=INT_MAX;
        if(index<energy.size()){
            ans1=solve(hour+1,index+1,city,energy,currEnergy-energy[index],requiredEnergy);
        }
        //not jumping city
        int ans2=solve(hour+1,index,city,energy,currEnergy+city[index],requiredEnergy);
        return min(ans1,ans2);
    }
    //not jumping city
    int ans3=solve(hour+1,index,city,energy,currEnergy+city[index],requiredEnergy);
    return ans3;
}
int main(){
    int n,t;
    cin>>n>>t;
    vector<int> city(n);
    for(int i=0;i<n;i++){
        cin>>city[i];
    }
    vector<int> energy(n-1);
    for(int i=0;i<n-1;i++){
        cin>>energy[i];
    }
    int hour=0;
    int index=0;
    int currEnergy=0;
    cout<<solve(hour,index,city,energy,currEnergy,t)<<endl;
    return 0;
}