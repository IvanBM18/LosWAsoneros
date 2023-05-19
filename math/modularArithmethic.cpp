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

const lli mod = 1e9+7;

lli sum(lli a, lli b){
    return ((a%mod) + (b%mod))%mod;
}

lli mul(lli a, lli b){
    return ((a % mod) * (b % mod)) % mod;
}

lli sub(lli a, lli b){
    return ((a - b)+mod)%mod;
}

lli modpow(lli x, lli n){
    if(n == 1) return x%mod;    
    if(n == 0) return 1%mod;
    lli u = modpow(x, n/2);
    u = mul(u, u);
    if(n%2 == 1) u = mul(u, x);
    return u;
}
lli inv(lli a){
    return modpow(a, mod-2);
}

lli division(lli a, lli b){
    return mul(a, inv(b));
}
