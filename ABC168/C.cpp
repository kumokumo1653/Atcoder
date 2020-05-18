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
template<typename T, typename U>
inline bool CMAX(T &m, U x) { if (m < x) { m = x; return true; } return false; }
template<typename T, typename U>
inline bool CMIN(T &m, U x) { if (m > x) { m = x; return true; } return false; }

typedef long long lint;
typedef long double ldouble;
const int INF = 1e9;
const lint LINF = 1e18;
const ldouble pi = acosl(-1);
int main(){
    int h,m;
    ldouble a,b;
    cin >> a >> b >> h >> m;
    ldouble tansin = ((ldouble)h * 60 + (ldouble)m) * 0.5;
    ldouble tyosin = 6.0 * (ldouble)m;
    ldouble kakudo = tansin-tyosin;
    ldouble c = powl(a,2) + powl(b,2) - 2.0 * a * b * cosl(kakudo * (pi/180.0));
    
    cout << std::fixed << std::setprecision(20) << powl(c,0.5) << endl;
    return 0;
}