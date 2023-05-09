//UTILIZA BFS PARA ENCONTRAR CAMINOS MÁS CORTOS EN UN GRAFO SIN PESOS
//Tiempo de ejecución: O(V+A) Vertices Aristas
//Memoria: O(2V)
#include<bits/stdc++.h>

using namespace std;

#define _ ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ENDL '\n'
#define f first
#define s second
#define fore(i,a,b) for(int i = (a), ThxMK = (b); i < ThxMK; ++i)
#define pb push_back
#define all(s) begin(s), end(s)
#define sz(s) int(s.size())
#define deb(x) cout << #x": " << (x) << endl;
typedef long double ld;
typedef long long lli;
typedef pair<lli,lli> ii;
typedef vector<lli> vi;

vector<int> adj[100005]; // graph
vector<bool> vis(100005, false); // visited array

//BFS for both trees and graphs
void bfs(int startingNode){
    queue<int> q;
    q.push(startingNode);
    while(!q.empty()){
        int v = q.front(); q.pop();
        vis[v] = true;
        for(auto u : adj[v]){
            //Do something
            if(!vis[u])q.push(u);
        }
    }
}

//BFS on a matrix
const ii steps[] ={ // 8 directions(Diagonals included)
    {-1,-1}, {-1,0},{-1,1},
    {0,-1},{0,1},
    {1,-1},{1,0},{1,1}
};

const ii steps[] = { // 4 directions(Diagonals not included)
    {-1,0},{0,-1},{0,1},{1,0}
};
int visited[1005][1005];

void bfs(ii startingPos){
    queue<ii> q;
    q.push(startingPos);
    while (!q.empty()){
        ii v = q.front(); q.pop();
        visited[(int)v.f][(int)v.s] = true;
        for(auto step : steps){ // Por cada direccion posible desde v
            ii u = {v.f + step.f, v.s + step.s}; //Obtenemos el nuevo punto
            //Do something
            if(!visited[u.f][u.s])q.push(u);
        }
    }
    
}

//Example: BFS para encontrar componentes conexas
const int n = 10;
int visit[n];
vector<int> g[n];
void bfs(int v, int c){
    queue<int> q;
    vis[v] = c;
    q.push(v);
    while(q.size() > 0){
        int x = q.front();
        q.pop();
        for(int y : g[x]){
            if(vis[0] == 0){
                q.push(y);
                visit[y] = c;
            }
        }
    }
}
int componentes = 0;
int main(){
    for(int i = 0; i<= n; i++){
        if(!vis[i]){
            componentes++;
            bfs(i,componentes);
        }
    }
    return 0;
}