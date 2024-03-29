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
    itn n;
    cin >> n;
    lint min = LINF;

    vector<lint> a(n);
    vector<lint> sigma(n + 1);
    REP(i,n){
        cin >> a[i];
    }
    sigma[0] = 0;
    REP(i, n){
        sigma[i + 1] = sigma[i] + a[i];
    }
    REP(i,n + 1){
        lint a = sigma[i] - sigma[0];
        lint b = sigma[n] - sigma[i];
        CMIN(min, llabs(a - b));
    }
    println(min);

    return 0;
}