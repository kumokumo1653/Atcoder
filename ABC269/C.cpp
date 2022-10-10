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
    lint n;
    cin >> n;
    vector<int> f(60);
    int one = 0;
    int cnt = 0;
    while(true){

        f[cnt] = n % 2 == 0 ? 0 : 1;
        n /= 2;
        if(f[cnt] == 1){
            one++;
        }
        cnt++;
        if(n == 0)break;
    }
    vector<int> bit(one);
    vector<int> val(one,1);

    while(true){
        //processing
        int onecnt = 0;
        lint ans = 0;
        REP(i,60){
            if(f[i] == 1){
                if(bit[onecnt] == 1)
                    ans += powl(2, i); 
                onecnt++;
            }
        }
        println(ans);

        if(bit == val){
            break;
        }
        bit[0]++;
        REP(i,one){
            if(bit[i] == 2){
                bit[i] = 0;
                bit[i + 1]++;
            }
        }
    }
    return 0;
}