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
    int a, b, w;
    int min = 0;
    int max = 0;
    cin >> a >> b >> w;
    w *= 1000;
    int temp = 0;
    temp += (w / a) * a;
    max += (w / a);

    if(a * 2 <= b){
        if(temp - w >= a ){
            max += (temp - w) / a;
        }
    }else{
        int time = 1;
        while(1){
            if(temp - w > b * time){
                
            }
            if(temp - w >= a * time && temp - w <= b * time){
                max += time;
                break;
            }
            time++;
        }
    }

    return 0;
}