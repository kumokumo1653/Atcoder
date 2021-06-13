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

int n, m;
vector<vector<int>> a;
vector<vector<int>> city;
vector<int> l;
int dfs(int s, int p){
    if(city[s][p] == 0) city[s][p]++;
    else return 0;
    REP(i,a[p].size()){
        dfs(s,a[p][i]);
    }
    return 0;
}
int main(){
    cin >> n >> m;
    a = vector<vector<int>>(n,vector<int>());
    city = vector<vector<int>>(n,vector<int>(n,0));
    l = vector<int>(n);
    REP(i,m){
        int c,b;
        cin >> c >> b;
        c--;
        b--;
        a[c].push_back(b);
        
    }

    REP(i,n){
        dfs(i,i);
    }

    int sum = 0;
    REP(i,n){
        REP(j,n){
            sum+=city[i][j];
        }
    }
    println(sum);

    
    return 0;
}