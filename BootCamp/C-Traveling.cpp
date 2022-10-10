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
    vector<tuple<int,int,int>> a(n);
    pair<int,int> pos = make_pair(0,0);
    int t = 0;
    REP(i,n){
        int t, x, y;
        cin >> t >> x >> y;
        tuple<int, int, int> temp = make_tuple(t, x, y);
        a[i] = temp;
    }

    REP(i,n){
        int d = abs(pos.first - get<1>(a[i])) + abs(pos.second - get<2>(a[i]));
        if((get<0>(a[i]) - t - d < 0) || (get<0>(a[i]) - t - d) % 2 != 0){
            No();
            return 0;
        }
        pos = make_pair(get<1>(a[i]),get<2>(a[i]));
        t = get<0>(a[i]);
    }
    Yes(); 
    return 0;
}