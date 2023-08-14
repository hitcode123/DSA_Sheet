#include<bits/stdc++.h>
using namespace std;

bool sortbyrowfirst(vector<int> &a,vector<int> &b)
{
  return a[0]<b[0];
}
vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
    sort(intervals.begin(),intervals.end(),sortbyrowfirst);
    deque<pair<int,int>> dq;
    for(int i=0;i<intervals.size();i++)
    {
      // ({intervals[0],intervals[1]});
    }
    return {{1}};
}

int main()
{

   int T;
   cin>>T;
   while(T--)
   {
    int n;
    cin>>n;
    vector<vector<int>> res;
    for(int i=0;i<n;i++)
    {
        vector<int> tempv;
        for(int j=0;j<2;j++)
        {
           int temp;
           cin>>temp;
           tempv.push_back(temp);
        }
        res.push_back(tempv);

   }
  mergeIntervals(res);
    }

    return 0;
}