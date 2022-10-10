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
    int a, b, c, d, mx, my;
    a = 1;
    b = n;
    c = 1;
    d = n;
    bool f = true;

    while(b - a > 0 && d - c > 0){
        mx = (a + b + 1) / 2;
        my = (c + d + 1) / 2;
        if(f){
            int t;
            print("? ");print(mx);print(b);print(c);println(d);

            cin >> t;
            if(t < b - mx + 1 || t < d - c + 1){
                a = mx;
            }else{
                b = mx - 1;
            }
            f = !f;
        }else{
            int t;
            print("? ");print(a);print(b);print(my);println(d);

            cin >> t;
            if(t < b - a + 1 || t < d - my + 1){
                c = my;
            }else{
                d = my - 1;
            }
            f = !f;
        }
        if(a == b && abs(c - d) == 1){
            int t;
            print("? ");print(1);print(n);print(c);println(c);
            cin >> t;
            if(t == 1){
                print("! ");print(a);println(d);
            }else{
                print("! ");print(a);println(c);
            }
            return 0;
        }
        if(abs(a - b) == 1 && c == d){
            int t;
            print("? ");print(a);print(a);print(1);println(n);
            cin >> t;
            if(t == 1){
                print("! ");print(b);println(c);
            }else{
                print("! ");print(a);println(c);
            }
            return 0;
        }
    }
    print("! ");print(a);println(c);
    return 0;
}