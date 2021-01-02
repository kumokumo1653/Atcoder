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
    int n;
    cin >> n;
    vector< pair<int, int>> a(n);
    lint aoki = 0;
    lint taka = 0;
    REP(i,n){
        int b, c;
        cin >> b >> c;
        aoki += lint(b);
        taka += lint(c);
        a[i].first = b;
        a[i].second = c;
    }

    lint asum = aoki;
    lint tsum = 0;
    sort(ALL(a));
    FOR(i,1, n + 1){
        REP(j,i){
            asum -= a[n - 1 - j].first;
            tsum += a[n - 1 - j].first + a[n - 1 - j].second;
        }
        if(asum < tsum ){
            println(i);
            return 0;
        }
        asum = aoki;
        tsum = 0;
    }
    return 0;
}