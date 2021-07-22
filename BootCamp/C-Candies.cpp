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
    vector<vector<int>> a(2, vector<int>(n));
    vector<vector<int>> dp(2, vector<int>(n));
    REP(i,2){
        REP(j,n){
            cin >> a[i][j];
        }
    }
    dp[0][0] = a[0][0];
    REP(i,2){
        REP(j,n){
            if(i == 0 && j == 0)continue;
            if(i == 0){
                dp[i][j] = a[i][j] + dp[i][j - 1];
            }else{
                if(j == 0)
                    dp[i][j] = a[i][j] + dp[i - 1][j];
                else{
                    dp[i][j] = a[i][j] + max(dp[i - 1][j], dp[i][j - 1]);
                }
            }
        }
    }
    println(dp[1][n - 1]);
    return 0;
}