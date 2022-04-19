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
    int n, m;
    cin >> n >> m;
    vector<pair<lint,lint>> p(n);
    vector<pair<lint,lint>> c(m);
    REP(i,n){
        lint x, y;
        cin >> x >> y;
        p[i].first = x;
        p[i].second = y;
    }
    REP(i,m){
        lint x, y;
        cin >> x >> y;
        c[i].first = x;
        c[i].second = y;
    }

    REP(i,n) {
        lint min = LINF;
        int point = INF;
        REP(j,m){
            if (CMIN(min, llabs(p[i].first - c[j].first) + llabs(p[i].second - c[j].second))){
                point = j;
            }
        }
        REP(j,m){
            if(llabs(p[i].first - c[j].first) + llabs(p[i].second - c[j].second) == llabs(p[i].first - c[point].first) + llabs(p[i].second - c[point].second)){
                println(point + 1);
                break;
            }
        }
    }
    return 0;
}