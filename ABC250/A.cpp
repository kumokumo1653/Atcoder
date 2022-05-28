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

    itn h,  w, r, c;
    cin >> h >> w >> r >> c;
    if(h == 1 && w == 1 && r == 1 && c == 1){
        println(0);
        return 0;
    }
    if(r == 1 || r == h) { 
        if(c == 1 || c == w){
            if(h == 1 || w == 1){
                println(1);
            }else {
                println(2);
            }
        }else{
            if(h == 1 || w == 1){
                println(2);
            }else{
                println(3);
            }
        }
    }else if(c == 1 || c == w){
        if(h == 1 || w == 1){
            println(2);
        }else{
            println(3);
        }
    }else{
        println(4);
    }
    return 0;
}