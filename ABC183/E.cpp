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
    int h ,w;
    cin >> h >> w;
    vector<vector<char>> map(h, vector<char>(w));
    vector<vector<int>> keiro(h + 2, vector<int>(w + 2, 0));

    REP(i, h){
        keiro[i][0] = -1;
        keiro[i][w + 1] = -1;
    }
    REP(i, w){
        keiro[0][i] = -1;
        keiro[h + 1][0] = -1;
    }
    REP(i, h){
        REP(j, w){
            char c;
            cin >> c;
            map[i][j] = c;
            if(c == '#') keiro[i + 1][j + 1] = -1;
        }
    }
    
    return 0;
}