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
    itn ans = 0;
    vector<int> a(n);
    vector<int> val(n, 0);
    vector<int> e(n, 2);
    REP(i,n){
        cin >> a[i];
    }
    while(true){
        vector<int>temp(n);
        itn p = 1;
        REP(i,n){
            if(val[i] == 0){
                temp[i] = a[i] - 1;
            }else if(val[i] == 1){
                temp[i] = a[i];
            }else if(val[i] == 2){
                temp[i] = a[i] + 1;
            }
            p *= (temp[i]);
        }

        if(p % 2 == 0){
            
            ans++;
        }
        if(val == e)break;
        val[0]++;
        REP(i,n){
            if(val[i] == 3){
                val[i + 1]++;
                val[i] = 0;
            }
        }
    }
    println(ans);

    return 0;
}