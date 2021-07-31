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
    vector<int> x(4);
    int n;
    cin >> n;
    REPR(i,4){
        x[i] = n % 10;
        n /= 10;
    }
    bool f = true;
    REP(i,4){
        if(x[i] != x[0]){
            f = false;
        }


    }
    if(f){
        println("Weak");
        return 0;
    }
    f = true;
    REP(i,3){
        if(x[i] <= 8){
            if(x[i] + 1 != x[i + 1]){
                f = false;
            }
        }else{
            if(x[i + 1] != 0){
                f = false;
            }
        }
    }
    if(f){
        println("Weak");
        return 0;
    }
    println("Strong");
    return 0;
}