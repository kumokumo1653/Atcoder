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
template<typename T, typename U>
inline bool CMAX(T &m, U x) { if (m < x) { m = x; return true; } return false; }
template<typename T, typename U>
inline bool CMIN(T &m, U x) { if (m > x) { m = x; return true; } return false; }

typedef long long lint;
typedef long double ldouble;
const int INF = 1e9;
const lint LINF = 1e18;
const int MOD = 1e9+7;

int cnt = 0;
int g = 1;
vector<int> gru;
void dfs(int m,vector<vector<int>> &fri){
    if(gru[m] != 0)return;
    gru[m] = g;
    REP(i,fri[m].size())
        dfs(fri[m][i],fri);
}
int main(){
    int n,m,k;
    cin >> n >> m >> k;
    vector<vector<int>> fri(n,vector<int>());
    vector<vector<int>> blo(n,vector<int>());
    vector<int>his(n,0);
    gru = vector<int>(n + 5);
    vector<int>gcnt(n);
    REP(i,m){
        int a,b;
        cin >> a >> b;
        a--;b--;
        fri[a].push_back(b);
        fri[b].push_back(a);
    }
    REP(i,k){
        int a,b;
        cin >> a >>b;
        a--;b--;
        blo[a].push_back(b);
        blo[b].push_back(a);
    }
    REP(i,n){
        dfs(i,fri);
        g++;
    }
    REP(i,n){gcnt[gru[i]]++;}
    REP(i,n){
        int ans = gcnt[gru[i]] - 1;
        REP(j,fri[i].size()){
            if(gru[i] == gru[fri[i][j]])ans--;
        }
        REP(j,blo[i].size()){
            if(gru[i] == gru[blo[i][j]])ans--;
        }
        cout << max(ans,0) << " ";
    }
    cout << endl;
    return 0;
}