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
    int h,w;
    cin >> h >> w;
    vector<vector<char>> a(h,vector<char>(w));
    vector<vector<int>> f(h,vector<int>(w, 0));
    int sum = 0;
    int t = 0;
    REP(i,h){
        REP(j,w){
            char c;
            cin >> c;
            a[i][j] = c;
        }
    }
    REP(i,h){
        REP(j,w){
            if(a[i][j] == '.'){
                t++;
                if(i != h - 1 && a[i + 1][j] == '.' ){
                    sum++;
                    f[i][j] = t;
                    f[i + 1][j] = t;
                }
                if(j != w - 1 && a[i][j + 1] == '.' ){

                    sum++;
                    f[i][j] = t;
                    f[i][j + 1] = t;
                }
            }
        }
    }
    println(sum);
    return 0;
}