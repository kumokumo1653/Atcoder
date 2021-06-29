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

typedef std::tuple<string, int, int> mytuple;
int main(){
    itn n;
    cin >> n;
    vector<tuple<string,int,int>> b(n);
    REP(i,n){
        string s;
        int p;
        cin >> s >> p;
        b[i] = make_tuple(s, p, i);

    }
    sort(ALL(b),
        [](mytuple const &lhs, mytuple const &rhs) {
            if (std::get<0>(lhs) != std::get<0>(rhs)) return std::get<0>(lhs) < std::get<0>(rhs);
            if (std::get<1>(lhs) != std::get<1>(rhs)) return std::get<1>(lhs) > std::get<1>(rhs);
            return std::get<2>(lhs) < std::get<2>(rhs);
        }
    );
    REP(i,n){
        println(++get<2>(b[i]));
    }
    
    return 0;
}