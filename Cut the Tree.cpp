vector<vector<int>> graph;
int ans=INT_MAX;
vector<bool> vis;
int dfs(int total,vector<int> &data,int i)
{
    vis[i]=true;
    int check=data[i-1];
    for(auto x:graph[i])
    {
        if(!vis[x])
        check+=dfs(total,data,x);
    }
    ans=min(ans,abs(total-(2*check)));
    return check;
}
int cutTheTree(vector<int> data, vector<vector<int>> edges) {
    int total=0,n=data.size();
    graph=vector<vector<int>>(n+1);
    for(auto &x:edges)
    {
        graph[x[0]].push_back(x[1]);
        graph[x[1]].push_back(x[0]);
    }
    vis.assign(n+1,false);
    for(int i=0;i<n;i++)
    {
        total+=data[i];
    }
    dfs(total,data,1);
    return ans;
}
