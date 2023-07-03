#include <bits/stdc++.h> 
/*

    intervals[i][0] = start point of i'th interval
    intervals[i][1] = finish point of i'th interval

*/
using namespace std;
bool sortby(vector<int> &a,vector<int> &b)
{
    return a[0]<b[0];
}
vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
    
     sort(intervals.begin(),intervals.end(),sortby);
     queue<pair<int,int>> q;
     for(auto i:intervals)
     {
         q.push({i[0],i[1]});
     }
     vector<vector<int>> res;
     while(!q.empty())
     {
         vector<int> temp;
         int first=q.front().first;
         int second=q.front().second;
         q.pop();
         if(!q.empty()&&second>=q.front().first)
         {
             if(second>=q.front().second)
             {
                 q.front().first=first;
                 q.front().second=second;
             }
             else
             {

                  q.front().first=first;

             }
         }
         else
         {
             temp.push_back(first);
             temp.push_back(second);
             res.push_back(temp);
         }
     }
     return res;

}

int main()
{
    return 0;
}