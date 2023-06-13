#include <bits/stdc++.h>
// #include<iostream>
// #include<vector>
using namespace std;

vector<vector<long long int>> printPascal(int n) 
{
   vector<vector<long long int>> pascal2;
   pascal2.push_back({1});
  //  pascal2.push_back({1,1});
   for(int i=1;i<n;i++)
   {
     vector<long long int> temp;
     int first=0;
     int second=1;
      // cout<<"hellp";
     for(int j=0;j<=i;j++)
     {
       if(j==0||j==i)
       {
         temp.push_back(1);
       }
       else
       {
         temp.push_back(pascal2[i-1][first]+pascal2[i-1][second]);
         first++;
         second++;
         
       }
     }
     cout<<endl;
     pascal2.push_back(temp);
   }
   return pascal2;
  
}


int main()
{
    vector<vector<long long int>> res=printPascal(4);
    for(int i=0;i<4;i++)
    {
      for(int j=0;j<=i;j++)
      {
        cout<<res[i][j]<<" ";
      }
    cout<<endl;
    }
    return 0;
}