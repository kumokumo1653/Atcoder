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
int main(){
    int n,m;
    cin >> n>>m;
    vector<int> ans(n,-1);
    vector<vector<int>> g(n,vector<int>(n,INF));
    REP(i,m){
        int a,b,c;
        cin >> a >> b >> c;
        a--;b--;
        g[a][b] = c;
        g[b][a] = c;
    }
    REP(i,n){
        REP(j,n){
            if(i == j)g[i][j] = 0;
        }
    }
    REP(k,n){
        REP(i,n){
            REP(j,n){
                g[i][j] = min(g[i][j],g[i][k]+g[k][j]);
            }
        }
    }
    REP(i,n){
        REP(j,n){
            if(g[i][j] != INF) CMAX(ans[i],g[i][j]);
        }
    }
    println(*(min_element(ALL(ans))));
    return 0;
}