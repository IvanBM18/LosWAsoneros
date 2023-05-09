//Conjuntos disjuntos
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

struct dsu{
    vi parent; //A que conjunto pertenece
    vi z; //Tamaño del conjunto

    void init(int n){
        parent = vi(n);
        z = vi(n,1);
        fore(i,0,n) parent[i] = i;
    }

    int get(int v){
        if(parent[v] == v) return v;
        parent[v] = get(parent[v]);
        return parent[v];
    }

    //True: Ambos nodos pertenecen a distintos conjuntos antes de la union,
    bool unite(int v1, int v2){
        v1 = get(v1);
        v2 = get(v2);
        if(v1 == v2) return true;
        if(z[v1] > z[v2]){
            parent[v2] = v1;
            z[v1] += z[v2];
        } 
        else{
            parent[v1] = v2;
            z[v2] += v1;
        } 
        return false;
    }

    
};

//Example
int main(){ 
    dsu d;
    d.init(1000);
    for(int i = 0; i < 10; i++){
        int a,b;
        cin >> a >> b; 
        if(d.get(a) == d.get(b) ){
            cout << "Estan el mismo componente";
        }else 
            cout << "No estan en el mismo componente";
    }
    return 0;
}