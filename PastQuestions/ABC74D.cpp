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
    itn n;
    cin >> n;
    lint ans = 0;
    vector<vector<int>> a(n,vector<int>(n));
    vector<vector<int>> b(n,vector<int>(n));
    bool flag = true;
    REP(i,n){
        REP(j,n) cin >> a[i][j];
    }
    copy(ALL(a),b.begin());
    REP(i,n){
        REP(j,n){
            REP(k,n){
               b[j][k] = min(b[j][k], b[j][i] + b[i][k]); 
            }
        }
    }
    REP(i,n){
        REP(j,n){
            ans += a[i][j];
            if(b[i][j] != a[i][j]){
                flag = false;
                break;
            }
            if(b[i][j] == a[i][j]){
                REP(k,n){
                    if(i == k || j == k) continue;
                    if(b[i][j] == b[i][k] + b[k][j]){
                        ans -= a[i][j];
                        break;
                    }
                }
            }
        }
    }
    if(flag) println(ans/2); else println(-1);
    return 0;
}