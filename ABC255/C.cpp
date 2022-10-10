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
    lint x, a, d, n;
    cin >> x >> a >> d >> n;
    if(d == 0){
        println(llabs(x - a));
        return 0;
    }
    if((d < 0 && x > a) || (d > 0 && x < a)){
        println(llabs(x - a));
        return 0;
    }
    lint y = (x - a) / d + 1;
    if(y > n){
        y = n;
        println(llabs((a + d * (y - 1)) - x));
        return 0;
    }
    lint sx = a + d * (y - 1);
    lint bx = a + d * y;
    println((llabs(sx - x) < llabs(bx - x) ? llabs(sx - x) : llabs(bx - x)));

    return 0;
}