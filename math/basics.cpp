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

int gcd(int a, int b){
    if(b == 0) return a;
    return gcd(b,a%b);
}

lli lcm(lli a, lli b){
    lli gd = gcd(a,b);
    a /= gd;
    a *= b;
    return a;
}