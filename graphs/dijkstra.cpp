//DIJKSTRA PARA CAMINOS CORTOS EN UN GRAFO CON PESOS
//Tiempo de ejecución: O(AlogV) Aristas log Vertices
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

vector<ii> adj[100005]; // graph
int dist[100005]; // distances

//Dijkstra
void dijkstra(int start){
    priority_queue<ii> q;
    dist[start] = 0;
    q.push({0,start});
    while(!q.empty()){
        ii curr = q.top(); q.pop();
        dist[curr.s] = -curr.f;
        for(auto u : adj[curr.s]){
            if(dist[u.s] == -1 or dist[u.f] > (curr.f+u.s))
                dist[u.s] = curr.f+u.s;
            q.push({dist[u.f], u.s});
        }
    }
}

//Example
#define INF 1e14
const int n = 10;
int vis[n];
vector<ii> g[n];
vector<int> dis(n,INF);
void dijksrta(int v, int c){
    priority_queue<ii> q;
    vis[v] = c;
    dis[v] = 0; 
    q.push({0,v});
    while(q.size() > 0){
        int weight = q.top().first; //peso
        int v = q.top().second; //vector
        q.pop();
        //Si tenia un par con distancia no minima pero obtenible por otro camino
        //se ignora
        if(dis[v] != weight)
            continue;
        for(ii u : g[v]){
            int w = u.f; //peso de la arista
            int y = u.s; //vector al que se llega
            int peso = weight + w;
            if(peso <  dis[y]){
                dis[y] = peso;
                q.push({dis[y],y});
            }
        }
    }
}