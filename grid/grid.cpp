//g++ -std=c++17 a.cpp && a < in.txt > out.txt
#include <bits/stdc++.h>
#define f first
#define s second
#define fore(i,a,b) for(int i = (a), ThxMK = (b); i < ThxMK; ++i)
#define pb push_back
#define all(s) begin(s), end(s)
#define _ ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define sz(s) int(s.size())
#define ENDL '\n'
#define deb(x) cout << #x": " << (x) << endl;
using namespace std;
typedef long double ld;
typedef long long lli;
typedef pair<lli,lli> ii;
typedef vector<lli> vi;

int main(){_
    vector<string>c(8);
    fore(i,0,8){
        cin>>c[i];
    }
    fore(i,0,8){
        fore(j,0,8){
            if(c[i][j]=='*'){
                cout<<"abcdefgh"[j]<<8-i<<ENDL;
                return 0;
            }
        }
    }
    return 0;
}
