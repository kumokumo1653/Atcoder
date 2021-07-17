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
    vector<int> a(n);
    vector<int> t(200005);
    int min = INF;
    int cnt = 0;
    bool f = true;
    REP(i,n){
        int b;
        cin >> b;
        a[i] = b;
        if(n % 2 != 0){
            if(i == n / 2)continue;
        }
        t[b]++;
    }
    REP(i, n / 2){
        if(a[i] != a[n - 1 - i])f = false;
    }
    if(f){
        println(0);
        return 0;
    }
    REP(i,n / 2){
        if(a[i] != a[n - 1 - i])cnt++;
        else t[a[i]] -= 2;
    }
    CMIN(min, cnt);
    cnt = 0;
    REP(i,200005){
        if(t[i] != 0)cnt++;
    }
    CMIN(min, cnt - 1);

    println(min);

    return 0;
}