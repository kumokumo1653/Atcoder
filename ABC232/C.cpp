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
vector<int> p;
void dfs(int current, vector<vector<int>> &taka, vector<vector<int>> &ao){

}
int main(){
    int n,m;
    cin >> n >> m;
    vector<vector<int>> taka(n, vector<int>());
    vector<vector<int>> ao(n, vector<int>());
    REP(i,m){
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        taka[a].push_back(b);
        taka[b].push_back(a);
    }
    REP(i, m){
        int c,d;
        cin >> c >> d;
        c--;
        d--;
        ao[c].push_back(d);
        ao[d].push_back(c);
    }
    REP(i,n){
        if(taka[0].size() == ao[i].size()){
            p.push_back(i);
        }
    }
    return 0;
}