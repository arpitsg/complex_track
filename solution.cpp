#include <bits/stdc++.h>
using namespace std;

vector <int> adj[100005];
multiset <int>ff,ss;

void dfs(int src,int dest,int restricted,int current,int type)
{
    if(src == restricted)
    return;
    if(src == dest)
    {
        if(type == 1)
        ff.insert(current);
        if(type == 2)
        ss.insert(current);
        return;
    }
    
    for(int i=0;i< adj[src].size();i++) 
    dfs(adj[src][i],dest,restricted,current+1,type);
    
}

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        ff.clear();
        ss.clear();
        for(int i=0;i<100005;i++)
        adj[i].clear();
        
        int n,m;
        cin>>n>>m;
        for(int i=0;i<m;i++)
        {
            int x,y;
            cin>>x>>y;
            adj[x].push_back(y);
        }
        
        int x,y,z,k;
        cin>>x>>y>>z>>k;
        dfs(x,y,z,0,1);
        dfs(y,z,x,0,2);
        
        long long int ans = 0;
        for(multiset<int>::iterator i=ff.begin();i!=ff.end();i++ )
        {
            int temp = k - *i;
            if(ss.find(temp)!= ss.end()) 
            ans = ans+ss.count(temp);
        }
        cout<<ans<<endl;
    }
    return 0;
}
