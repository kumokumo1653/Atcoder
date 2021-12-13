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
    vector<vector<char>> map(h, vector<char>(w));
    vector<vector<char>> ans(h, vector<char>(w));

    REP(i,h){
        string s;
        cin >> s;
        REP(j,s.size()){
            map[i][j] = s[j];
        }
    }

    REP(i,h){
        REP(j,w){
            if(map[i][j] == '#'){
                ans[i][j] = '#';
            }else{
                int sum = 0;
                FOR(x, -1, 2){
                    FOR(y, -1, 2){
                        if(x == 0 && y == 0) continue;
                        if(j + x >= 0 && j + x < w && i + y >= 0 && i + y < h){
                            if(map[i + y][j + x] == '#')
                                sum++;
                        }
                    }
                }
                ans[i][j] = '0' + sum;
            }
        }
    }
    
    REP(i,h){
        REP(j,w){
            cout << ans[i][j];
        }
        cout << endl;
    }
    return 0;
}