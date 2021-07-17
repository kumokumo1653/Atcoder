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

vector<lint> ans(10000008, -1);

int dfs(int n){
    if(n == 0)return 0;
    if(ans[n] != -1){
        return ans[n];
    }

    lint min= INF;
    lint coin = 1;
    FOR(i,1,11){
        coin *= (lint)i;
        if(n - coin >= 0)
            CMIN(min, dfs(n - coin) + 1);

    }

    return ans[n] = min;
}
int main(){
    lint p;
    cin >> p;
    println(dfs(p));
    return 0;
}