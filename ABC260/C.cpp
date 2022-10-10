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

vector<lint> red(10);
vector<lint> blue(10);
void bluej(lint x, lint y){
    REPR(i, 10){
        if(i == 0)break;
        if(blue[i] > 0){
            red[i - 1] += blue[i];
            blue[i - 1] += blue[i] * y;
            blue[i] = 0;
        }
    }
}
void redj(lint x, lint y){
    bool f = false;
    REPR(i,10){
        if(i == 0)break;
        if(red[i] > 0){
            red[i - 1] += red[i];
            blue[i] += red[i] * x;
            red[i] = 0;
        }
    }
    bluej(x, y);
    REP(i,10){
        if(i == 0) continue;
        if(red[i] > 0){
            f = true;
        }
    } 
    if(f){
        redj(x, y);
    }else{
        return;
    }
}
int main(){
    lint n, x, y;
    cin >> n >> x >> y;
    red[n - 1] = 1;
    redj(x, y);
    println(blue[0]);
    return 0;
}