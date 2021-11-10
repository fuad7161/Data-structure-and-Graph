#include<bits/stdc++.h>
using namespace std;

vector<int> g[100];
int in[101] , low[101] , vis[101];
int timer = 0; 

void dfs(int node , int par){
    vis[node] = 1;
    in[node] = low[node] = timer;
    timer++;

    for(int child: g[node]){
        if(child == par)continue;
        if(vis[child]){
            low[node] = min(low[node] , in[child]);
        }else{
            dfs(child,node);
            if(low[child] > in[node]){
                cout<<node<<" "<<child<<" is a bridge."<<endl;
            }
            low[node] = min(low[node] , low[child]);
        }
    }
}

int main(){
    cin.tie(0);ios::sync_with_stdio(false);

    int n,m;
    cin>>n>>m;

    int x,y;
    for(int i=0;i<m;i++){
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }

    dfs(1,-1);

    return 0;
}
