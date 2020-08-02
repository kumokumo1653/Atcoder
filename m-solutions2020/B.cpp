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
    int a, b, c, k;
    cin >> a >> b >> c >> k;
    bool flag = false;
    int ta = a;
    int tb = b;
    int tc = c;
    vector<int> digit(k,0);
    vector<int> val(k,2);
    while(1){
        REP(i,k){
            if(digit[i] == 0)
                ta *= 2;
            else if(digit[i] == 1)
                tb *= 2;
            else
                tc *= 2;
            if(tb > ta && tc > tb){
                flag = true;
                break;
            }
            
        }
        ta = a;
        tb = b;
        tc = c;
        if(flag)
            break;
        if(digit == val)
            break;
        digit[0]++;
        REP(i,k){
            if(digit[i] == 3){
                digit[i + 1]++;
                digit[i] = 0;
            }
            
        }
    }
    if(flag)
        Yes();
    else No();
    return 0;
}