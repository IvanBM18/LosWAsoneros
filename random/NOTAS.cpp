//codigo para saber si una strings es un palindromo o no
void solve(){
    string s;
    cin>>s;
    set<int>v;
    for(auto i:s){
        v.insert(i);
    }
    if(sz(v)==1){
        cout<<-1<<ENDL;
        return;
    }
    bool o = 1;
    fore(i,0,sz(s)/2){
        if(s[i]!=s[sz(s)-i-1]){
            o = 0;
        }
        }
        if(o){
            cout<<sz(s)-1<<ENDL;
        }
        else{
            cout<<sz(s)<<ENDL;
    }
}

int main(){_
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}


//codigo para imprimir la unica letra diferente que aparece en una string
int main(){
    string s;
    cin>>s;
    map<char,int>mp;
    for(auto &nx : s){
        mp[nx]++;
    }
    for(char i='a';i<='z';i++){
        if(mp[i]==1){
            cout<<i<<ENDL;
            return 0;
        }
    }
    cout<<-1<<endl;
    return 0;
}

//codigo para imprimir una letra minuscula 
int main(){
    int n;
    cin>>n;
    cout<<(char)n<<endl;
    return 0;
}

//Linea para imprimir una cantidad de decimales
int main(){
    int n;
    cin>>n;
    if(n>=42){
        n++;
    }
    cout<<"AGC";
    cout<<setfill('0')<<setw(3)<<n<<ENDL;
    return 0;
}

//imprimir del x posicion a x posicion de una string
int main(){
    int l, r;
    cin>>l>>r;
    string s = "atcoder";
    for(int i=l;i<=r;i++){
        cout<<s[i-1];
    }
    cout<<"\n";
    return 0;
}

//imprimir los ultimos 2 digitos 
int main(){
    int n;
    cin>>n;
    int x = (n % 100)/10;
    int xx = n%10;
    cout<<x<<xx<<ENDL;
    return 0;
}

//contar cuantas veces sale algo en una especie de cuadrado
int main() {
	int h,w,c=0;
	cin>>h>>w;
	string s;
	for(int i=0;i<h;i++){
		cin>>s;
		for(int j=0;j<w;j++){
			if(s[j]=='#'){
                c++;
            }
		}
	}
	cout<<c<<endl;
	return 0;
}

//quitar x posicion de un arreglo k veces y dejar 0 en los lugares
int N, K, A[101];
int main() {
  cin >> N >> K;
  for (int i = 1; i <= N; i++) {
    cin >> A[i];
  }
  for (int loop = 1; loop <= K; loop++) {
    for (int i = 1; i <= N - 1; i++) {
      A[i] = A[i + 1];
    }
    A[N] = 0;
  }
  for (int i = 1; i <= N; i++) {
    cout << A[i] << (i == N ? "\n" : " ");
  }
}

//funcion rara
int fuc(int x){
    return x*x+2*x+3;
}

int main(){
    int t;
    cin>>t;
    cout<<fuc(fuc(fuc(t)+t)+fuc(fuc(t)))<<ENDL;
    return 0;
}

//codigo para ver si en un vector de strings ninguna palabra se repite y si cada palabra empieza con la ultima letra de la anterior
bool solve(const vector<string>w){
    const int n = sz(w);
    fore(i,0,(n-1)){
        if(w[i].back() != w[i+1].front()){
            return false;
        }
    }
    fore(i,0,n){
        fore(j,(i+1),n){
            if(w[i]==w[j]){
                return false;
            }
        }
    }
    return true;
}

vector<string>input(){
    int n; 
    cin>>n;
    vector<string>w(n);
    fore(i,0,n){
        cin>>w[i];
    }
    return w;
}

int main(){_
    const vector<string>w=input();
    if(solve(w)){
        cout<<"Yes"<<ENDL;
    }
    else{
        cout<<"No"<<ENDL;
    }
}

