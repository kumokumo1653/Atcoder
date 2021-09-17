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
    int x;
    cin >>x;
    int a, b, c, d;
    a = x / 1000;
    x %= 1000;
    b = x / 100;
    x %= 100;
    c = x/10;
    d = x % 10;
    vector<int> t = {a, b, c, d};
    vector<int> bit(3,0);
    vector<int> val(3,1);
    while(bit != val){
        itn ans = t[0];
        REP(i,3){
            if(bit[i] == 0){
                ans += t[i + 1];
            }else{
                ans -= t[i + 1];
            }
        }
        if(ans == 7){
            string s = "";
            s += '0' + t[0];
            REP(i,3){
                if(bit[i] == 0){
                    s+="+";
                }else{
                    s+="-";
                }
                s+= '0' + t[i + 1];
            }
            s += "=7";
            println(s);
            return 0;
        }
        bit[0]++;
        REP(i,3){
            if(bit[i] == 2){
                bit[i + 1]++;
                bit[i] = 0;
            }
        }
    }
    return 0;
}