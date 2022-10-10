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

vector<vector<pair<int,int>>> res(1000);
void dfs(vector<pair<int,int>> &p, int c, int index, vector<bool> &flag){
    vector<int> x = {-1, -1, 0, 0, 1 ,1};
    vector<int> y = {-1, 0, -1, 1, 0, 1};
    if(flag[c]) return;
    REP(i,p.size()){
        REP(t,6){
            if(p[i].first == p[c].first + x[t] && p[i].second == p[c].second + y[t]){
                flag[c] = true;
                res[index].push_back(p[i]);
                dfs(p, i, index, flag);
            }
        }
    }
}
int main(){
    int n;
    cin >> n;
    vector<pair<int,int>> p(n);
    vector<bool>flag(n, false);
    int index = 0;
    REP(i,n){
        cin >> p[i].first >> p[i].second;
    }
    
    REP(i,n){
        if(!flag[i]){
            dfs(p, i, index, flag);
            index++;
        }
    }
    //REP(i,1000){
        //if(!res[i].empty()){
            //REP(j,res[i].size()){
                //print(res[i][j].first);println(res[i][j].second);
            //}
        //}
    //}
    println(index);


    
    return 0;

}