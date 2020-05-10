#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n - 1; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define FORR(i,m,n) for(int i = m - 1; i >= n; i--)
#define ALL(v) v.begin(), v.end()
#define CMAX(m, x)  m = max(m,x)
#define CMIN(m, x)  m = min(m,x)
#define itn int
#define Yes() cout << "Yes" << endl
#define No() cout << "No" << endl
#define YES() cout << "YES" << endl
#define NO() cout << "NO" << endl
typedef long long lint;
typedef long double ldouble;
const int INF = 1e9;
const lint LINF = 1e18;

int cnt = 0;
void dfs(int i,vector<vector<int> > &g, vector<vector<int> > &ans){
    if(ans[i][0] == 0){
        cnt++; 
        ans[i][0] = cnt;
        REP(j,g[i].size()){
            dfs(g[i][j] - 1,g,ans);  
        }
        cnt++;

        ans[i][1] = cnt;
    }
}
int main(){
    int n;
    cin >> n;
    int u,k;
    vector<vector<int> > g(n);
    vector<vector<int> > ans(n,vector<int>(2,0));
    REP(i,n){
        cin >> u >> k;
        g[u - 1] = vector<int>(k);
        REP(j,k)
            cin >> g[u - 1][j];
    }
    REP(i,n)
        dfs(i,g,ans);
    REP(i,n){
        printf("%d %d %d\n",i + 1, ans[i][0],ans[i][1]);
    }

    return 0;
}