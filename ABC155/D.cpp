#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n - 1; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define FORR(i,m,n) for(int i = m - 1; i >= n; i--)
#define ALL(v) v.begin(), v.end()
#define itn int
#define enld endl
#define eldn endl
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
const lint LINF = lint(1e18) + 1;
const int MOD = 1e9+7;
int main(){
    int n;
    lint k;
    cin >> n >> k;
    vector<lint> a(n);
    REP(i,n) cin >> a[i];
    sort(ALL(a));
    lint l = -INF;
    lint r = INF;
    while(l + 1 < r){
        lint m = (l + r) / 2;
        lint cnt = 0;
        REP(i,n){
            if(a[i] < 0){
                int l = -1;
                int r = n;
                while(l + 1 < r){
                    int c = (l + r) / 2;
                    if(a[i] * a[c] < m) r = c; else l = c;
                }
                cnt += n - r;
            }else{
                int l = -1;
                int r = n;
                while(l + 1 < r){
                    int c = (l + r) / 2;
                    if(a[i] * a[c] < m) l = c; else r = c;
                }
                cnt += r;
            }
            if(a[i] * a[i] < m) cnt--;
        }
        cnt /= 2;
        if(k > cnt) l = m; else r = m;
    }
    cout << l << endl;
    cout << r << endl;
    return 0;
}