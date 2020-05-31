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

int g = 1;
void dfs(int i, vector<vector<int>> & ketugou,vector<int> &gru){
    if(gru[i] != 0) return;
    gru[i] = g;
    REP(j,ketugou[i].size())    dfs(ketugou[i][j],ketugou,gru);
}
int main(){
    int n,m,q;
    cin >> n >> m >> q;
    vector<vector<int>> ketugou(n);
    vector<int> color(n);
    vector<int> gru(n,0);
    vector<int>ans(q);
    REP(i,m){
        int a,b;
        cin >> a >> b;
        a--;b--;
        ketugou[a].push_back(b);
        ketugou[b].push_back(a);
    }
    REP(i,n){
        cin >> color[i];
    }
    //REP(i,n){
        //dfs(i,ketugou,gru);
        //g++;
    //}
    REP(i,q){
        int a;
        cin >> a;
        if(a ==1){
            int b;
            cin >> b;
            b--;
            ans[i] = color[b];
            REP(j,ketugou[b].size()){
                color[ketugou[b][j]] = color[b];
            }
        }else{
            int x,y;
            cin >> x >> y;
            x--;
            ans[i] = color[x];
            color[x] = y;
        }
    }
    REP(i,q) cout << ans[i] << endl;
    return 0;
}