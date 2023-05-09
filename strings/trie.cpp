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
const int N = 1e5; //Suma longitud de las palabras

int trie[N][26], nodes;
int cnt[N]; //Numero de palabras que pasan por el nodo
int terminal[N]; //Numero de palabras que terminan en el nodo

void add(string &s){
    int at = 0; //Inicio en la raiz
    for(char c : s){
        int x = c-'A'; //Numero entr 0 a 25
        if(trie[at][x] == 0) trie[at][x] = nodes++;
        at = trie[at][x];
        cnt[at]++;
    }
    terminal[at] = terminal[at]++;
}

//SI nos aseguran que la palabra existe, entonces podemos usar remove
void remove(string& s) {
    int at = 0; //Inicio en la raiz
    for (char c : s) {
        int x = c - 'A'; //Numero entr 0 a 25
        if (trie[at][x] == 0) return;
        at = trie[at][x];
        cnt[at]--;
    }
    terminal[at] = terminal[at]--;
}

bool search(string& s) {
    int at = 0; //Inicio en la raiz
    for (char c : s) {
        int x = c - 'A'; //Numero entr 0 a 25
        if (trie[at][x] == 0) return false;
        at = trie[at][x];
    }
    return true;
}