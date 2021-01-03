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
    int n,m;
    int sum = 0;
    cin >> n >> m;
    vector<int> a(m);
    if(m == 0){
        println(1);
        return 0;
    }
    REP(i, m)
        cin >> a[i];
    sort(ALL(a));
    int k = n;
    int pos = 1;
    int diff = 0;
    REP(i, m){
        diff = a[i] - pos;
        if(diff == 0){
            pos = a[i] + 1;
             continue;
        }
        CMIN(k, diff);
        pos = a[i] + 1;
    }
    diff = n - a[m - 1];
    if(diff != 0)
        CMIN(k, diff);
    pos = 1;
    REP(i,m){
        int diff = a[i] - pos;
        sum += int(ceil(diff / double(k)));
        pos = a[i] + 1;
    }
    diff = n - a[m - 1];
    sum += int(ceil(diff / double(k)));
    println(sum);
    return 0;
}