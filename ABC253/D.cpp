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
    lint n, a, b, c;
    cin >> n >> a >> b;
    c = a * b;
    lint nsum = (1 + n) * n / 2;
    lint asum =  (n / a) * (2 * a + (n / a - 1) * a) / 2;
    lint bsum =  (n / b) * (2 * b + (n / b - 1) * b) / 2;
    lint csum =  (n / c) * (2 * c + (n / c - 1) * c) / 2;
    if( a >= b && a % b == 0){
        println(nsum - bsum);
    }else if (a < b && b % a == 0){
        println(nsum - asum);
    }else {
        println(nsum - asum - bsum + csum);
    }

    return 0;
}