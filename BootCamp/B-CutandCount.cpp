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
    string s;
    cin >> n >> s;
    itn max = 0;
    REP(i,n){
        string x,y;
        x = s.substr(0, i);
        y = s.substr(i, s.size());
        vector<bool> f(30, false);
        itn sum = 0;
        REP(j, x.size()){
            REP(k, y.size()){
                if(x[j] == y[k] && !f[x[j] - 'a']){
                    f[x[j] - 'a'] = true;
                    sum++;
                }
            }
        } 
        CMAX(max, sum);
    }
    println(max);
    return 0;
}