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

void dfs(vector<vector<int>> &m,int parent, int c, vector<int> &x, vector<set<int>>&ans){
    ans[c].insert(x[c]);
    if(m[c].size() == 1){
        return ;
    }
    itn max = 0;
    REP(i,m[c].size()){
        if(m[c][i] == parent) continue;
        ans[c].insert(x[m[c][i]]);
        dfs(m, c, m[c][i], x, ans);
        if(ans[c].size() == 21){
            auto itr = ans[c].end();
            itr--;
            ans[c].erase(itr);
        }
    }
    return ;
}
int main(){
    int n,q;
    cin >> n >> q;
    vector<int> x(n);
    vector<set<int>> ans(n,set<int>());
    vector<pair<int,int>> query();
    REP(i,n - 1) {
        cin >> x[i];
    }
    vector<vector<int>>m(n, vector<int>());
    REP(i, n - 1){
        int a, b;
        cin >> a >> b;
        a--;b--;
        m[a].push_back(b);
        m[b].push_back(a);
    }
    REP(i,q){
        int v,k;
        cin >> v >> k;

    }
    dfs(m, 0, 0, x,ans);

    return 0;
}