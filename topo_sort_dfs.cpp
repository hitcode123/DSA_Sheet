#include <bits/stdc++.h> 
using namespace std;
stack<int> st;
void dfs(int src,vector<int> adj[],vector<int> &vis)
{
    vis[src]=1;

    for(auto i:adj[src])
    {
        if(vis[i]!=1)
        {

            dfs(i,adj,vis);
        }
    }
    st.push(src);
    

}
vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e)  {
    
    vector<int> vis(v,-1);
    vector<int> adj[v];
    for(auto i:edges)
    {
        adj[i[0]].push_back(i[1]);
    }
    
    for(int i=0;i<v;i++)
    {
      if(vis[i]!=1)
      {
          dfs(i,adj,vis);
      }
    }
    vector<int> res;
    while(!st.empty())
    {
        int top=st.top();
        st.pop();
        res.push_back(top);

    }
    // reverse(res.begin(),res.end());
    return res;
}

int main()
{
    return 0;
}