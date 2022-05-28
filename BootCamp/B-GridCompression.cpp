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
    int w, h;
    cin >> h >> w;
    vector<vector<char>> a(h, vector<char>(w));
    vector<vector<bool>> f(h, vector<bool>(w, true));
    REP(i,h){
        REP(j,w){
            cin >> a[i][j];
        }
    }

    REP(i,h){
        bool flag = true;
        REP(j,w){
            if(a[i][j] == '#'){
                flag = false;
            }
        }
        if(flag){
            REP(j,w){
                f[i][j] = false;
            }
        }
    }

    REP(i,w){
        bool flag = true;
        REP(j,h){
            if(a[j][i] == '#'){
                flag = false;
            }
        }
        if(flag){
            REP(j,h){
                f[j][i] = false;
            }
        }
    }
    REP(i,h){
        bool flag = false;
        REP(j,w){
            if(f[i][j]){
                flag = true;
                cout << a[i][j];
            }
        }
        if(flag)
            println("");
    }
    return 0;
}