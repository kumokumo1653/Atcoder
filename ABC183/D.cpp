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
    lint w;
    cin >> n >> w;
    lint mx = 0;
    vector<tuple<int, int, int>> a(n);
    REP(i, n) cin >> get<0>(a[i]) >> get<1>(a[i]) >> get<2>(a[i]);

    vector<lint> table(2 * 1e5 + 3, 0);
    REP(i,n){
        table[get<0>(a[i])] += lint(get<2>(a[i]));
        table[get<1>(a[i])] -= lint(get<2>(a[i]));
    }

    REP(i, 2 * 1e5 + 3){
        if(i != 0) table[i] += table[i - 1];
    }

    REP(i, 2 * 1e5 + 3) CMAX(mx, table[i]);

    if(mx > w) No();
    else Yes();
    return 0;
}