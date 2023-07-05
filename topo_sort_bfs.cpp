#include<bits/stdc++.h>
using namespace std;

queue<int> q;
void bfs(vector<int> &Ind,vector<int> adj[],vector<int>& res)
{

    while(!q.empty())
    {
        int node=q.front();
        q.pop();
        res.push_back(node);
        for(auto adjnode:adj[node])
        {
            Ind[adjnode]--;
            if(!Ind[adjnode])
            {
                q.push(adjnode);
            }
            
        }
    }
}

vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e)  {
    
    vector<int> Ind(v,0);
    vector<int> adj[v];
    // vector<int> vis(v,-1);
    for(auto i:edges)
    {
        adj[i[0]].push_back(i[1]);
        Ind[i[1]]++;

    }
    
    
    for(int i=0;i<v;i++)
    {
        if(Ind[i]==0)
        {
        q.push(i);
        }
    }
    vector<int> res;
    // res.push_back(0);
    bfs(Ind,adj,res);
    return res;
    
}

void main()
{
    return 0;
}