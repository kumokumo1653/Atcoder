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
    itn h,w;
    cin >> h >> w;
    vector<vector<char>> c(h, vector<char>(w));
    vector<vector<char>> p(h * 2, vector<char>(w));
    REP(i,h){
        REP(j,w){
            cin >> c[i][j];
        }
    }
    REP(i,2 * h){
        REP(j,w){
            p[i][j] = c[((i + 2) / 2) - 1][j];
        }
    }
    
    REP(i,2 * h){
        REP(j,w){
            cout << p[i][j];
        }
        cout << endl;
    }
    return 0;
}