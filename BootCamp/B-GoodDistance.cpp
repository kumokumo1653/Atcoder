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
    int n,d;
    cin >> n >> d;
    int ans = 0;
    vector< vector<int>> x(n, vector<int>(d));
    REP(i,n){
        REP(j,d){
            cin >> x[i][j];
        }
    }

    REP(i,n){
        FOR(j,i + 1,n){
            int r = 0;
            int num = 0;
            REP(k,d){
                r += (x[i][k] - x[j][k]) * (x[i][k] - x[j][k]);
            }
            while(num < 200){
                if(r == num * num) ans++;
                num++;
            }
        }
    }
    println(ans);
    return 0;
}