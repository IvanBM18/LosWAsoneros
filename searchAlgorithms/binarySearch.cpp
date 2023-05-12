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

//Lower bound es una binary que retorna el primer elemento que es mayor o igual al valor buscado
//Upper bound es una binary que retorna el primer elemento que es mayor al valor buscado

vector<int> arr(100);

bool binarySearch(int x){
    int l = 0, r = sz(arr)-1;  
    while (l <= r){
        int mid = l + (r-l)/2;
        if(arr[mid] == x) return true;
        if(arr[mid] < x) l = mid+1;
        else r = mid-1;
    }
}

//Aplicar binary Serch en un arreglo ordenado
//Binary Search sobre funciones continuas/cuadraticas