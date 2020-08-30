#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n - 1; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define FORR(i,m,n) for(int i = m - 1; i >= n; i--)
#define ALL(v) v.begin(), v.end()
#define itn int
#define Yes() cout << "Yes" << endl
#define No() cout << "No" << endl
#define YES() cout << "YES" << endl
#define NO() cout << "NO" << endl
#define println(x) cout << x << endl
#define print(x) cout << x << " "
template<typename T, typename U>
inline bool CMAX(T &m, U x) { if (m < x) { m = x; return true; } return false; }
template<typename T, typename U>
inline bool CMIN(T &m, U x) { if (m > x) { m = x; return true; } return false; }

typedef long long lint;
typedef long double ldouble;
const int INF = 1e9;
const lint LINF = 1e18;
const int MOD = 1e9+7;

struct UnionFind{
    vector<lint> g; 
    vector<lint> p; 

    UnionFind(int n):g(n),p(n){
        init(n);
    }
    void init(int n){
        REP(i,n) {g[i] = i; p[i] = 1;}
    }
    int root(int x){
        if(g[x] == x) return x;
        else return g[x] = root(g[x]);
    }
    bool unite(int x,int y){
        x = root(x);
        y = root(y);
        if(x == y) return false;
        if(p[x] < p[y]) swap(x,y);
        p[x] += p[y];
        g[y] = x;
        return true;
        
    }
    int len(int x){
        return p[root(x)];
    }
    bool same(int x,int y){
        return root(x) == root(y);
    }
};
int main(){
    int m,n;
    cin >> n >> m;
    UnionFind tree(n);
    int mx = 0;
    REP(i,m){
        int a,b;
        cin >> a >> b;
        a--;b--;
        tree.unite(a,b);
    }
    REP(i,n){
        CMAX(mx,tree.len(i));
    }
    println(mx);
    return 0;
}