//LA DFS ES LA MEJOR SI QUIERES RECORRER UN GRAFO
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


//DFS for trees
void dfs(int v, int fthr){
    for(auto u : adj[v]){
        if(u != fthr){
            //Do something
            dfs(u, v); //Continue with the next node
        }
    }
}

//DFS for Graphs
void dfs(int v){
    vis[v] = true;
    for(auto u : adj[v]){
        if(!vis[u]){
            //Do something
            dfs(u); //Continue with the next node
        }
    }
}

//DFS on a matrix
const ii steps[] ={ // 8 directions(Diagonals included)
    {-1,-1}, {-1,0},{-1,1},
    {0,-1},{0,1},
    {1,-1},{1,0},{1,1}
};
const ii steps[] = { // 4 directions(Diagonals not included)
    {-1,0},{0,-1},{0,1},{1,0}
};
vector<vector<bool>> visited(1005, vector<bool>(1005, false));
void dfs(ii startingPoint){
    visited[(int)startingPoint.f][(int)startingPoint.s] = true;
    for(auto step : steps){ // Por cada direccion posible desde v
        ii u = {startingPoint.f + step.f, startingPoint.s + step.s}; //Obtenemos el nuevo punto
        //Do something
        if(!visited[u.f][u.s])dfs(u);
    }
}

//Example: contar elementos conexos en un grafo
int componentes = 0;
int main(){
    int n; cin >> n;
    for(int i = 0; i<= n; i++){
        if(!vis[i]){
            dfs(i);
            componentes++;
        }
    }
    return 0;
}