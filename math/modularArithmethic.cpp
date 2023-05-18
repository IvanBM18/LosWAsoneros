//g++ -std=c++17 a.cpp && a < in.txt > out.txt
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

const int m = 93875262;

lli sum(lli a, lli b){
    return ((a % m) + (b % m)) % m;
}

lli substraction(lli a, lli b){
    return ((a-b)+m)%m;
}

lli mul(lli a, lli b){
    return ((a % m) * (b % m)) % m;
}

lli div(lli a, lli b){
    return mul(a, inv(b));
}

lli inv(lli a){
    return modpow(a, m-2,m);
}

lli modpow(lli x, lli n, lli m){
    if(n == 0) return 1%m;
    lli u = modpow(x, n/2, m);
    u = mul(u, u);
    if(n%2 == 1) u = mul(u, x);
    return u;
}
