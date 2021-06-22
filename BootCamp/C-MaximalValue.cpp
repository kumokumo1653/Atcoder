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
    vector<int>a(n);
    vector<int>b(n - 1);
    REP(i,n - 1){
        cin >> b[i];
    }
    int ans = 0;
    a[0] = b[0];
    FOR(i, 1, n - 1){
        if(b[i - 1] > b[i]){
            a[i] = b[i];
        }else{
            a[i] = b[i - 1];
        }
    }
    a[n - 1] = b[n - 2];
    REP(i,n){
        ans += a[i];
    }
    println(ans);
    return 0;
}