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

int arr[10000];

//SegTree Basico
struct segtree{
    segtree *left, *right;
    int sum; //suma de su rango
    int l,r; //rango

    segtree(int a, int b) : l(a), r(b){
        if(l == r){
            this->sum = arr[l];
        }else {
            int m = (l+r)/2;
            this->left = new segtree(l, m);
            this->right = new segtree(m + 1, r);
            sum = left->sum + right->sum;
        }
    }

    void update(int pos, int x){
        if(l == r){
            this->sum = x;
        }else {
            int m = (l+r)/2;
            if(pos <=m) left->update(pos,x);
            else right->update(pos,x);
            sum = left->sum + right->sum;
        }
    }

    int query(int a, int b){
        if(b < l || a > r){
            return 0; 
        }
        if(a <= l &&  r <= b){
            return sum;
        }
        return left->query(a,b) + right->query(a,b);
    }
};

//Segtree de valores maximos
struct segmtree {
    int l;
    int r;
    int mx;
    segmtree* left;
    segmtree* right;

    segmtree(int a, int b): l(a), r(b) {
        if (a == b) {
            mx = arr[a];
        }
        else {
            int m = (a + b) / 2;
            this->left = new segmtree(l, m);
            this->right = new segmtree(m + 1, r);
            mx = max(left->mx, right->mx);
        }
    }

    int query(int a, int b) {
        if (b<l || a>r) {
            return 0;
        }
        if (a <= l && r <= b) {
            return mx;
        }
        return max(left->query(a, b), right->query(a, b));
    }

};