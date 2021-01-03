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
    int n , m, t;
    
    int time = 0;
    cin >> n >> m >> t;
    int init = n;
    vector<pair<int, int>> cafe(m);
    REP(i, m) 
        cin >> cafe[i].first >> cafe[i].second;
    
    REP(i,m){
        int diff = cafe[i].first - time;
        n -= diff;
        if(n <= 0){
            No();
            return 0;
        }
        diff = cafe[i].second - cafe[i].first;
        n += diff;
        if(n >= init)
            n = init;
        time = cafe[i].second;
    }
    int diff = t - time;
    n -= diff;
    if(n <= 0){
        No();
        return 0;
    }
    Yes();
    return 0;
}