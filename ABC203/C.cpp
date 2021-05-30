#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_dec_float.hpp>
#include <boost/multiprecision/cpp_int.hpp>
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

namespace mp = boost::multiprecision;
using Bint = mp::cpp_int;
int main(){
    itn n;
    Bint k;
    cin >> n >> k;
    vector<pair<Bint,Bint>> f(n);
    Bint ans = 0;
    REP(i,n){
        cin >> f[i].first >> f[i].second;
    }
    sort(ALL(f));
    Bint now = 0;
    REP(i,n){
        if(k - ((Bint)f[i].first - now) < 0){
            ans = (Bint)f[i].first -  (((Bint)f[i].first - now) - k);
            println(ans);
            return 0;
        }
        k -= ((Bint)f[i].first - now);
        now = (Bint)f[i].first;
        k += (Bint)f[i].second;
        ans = (Bint)f[i].first;
    }
    ans += k;
    println(ans);
    return 0;
}