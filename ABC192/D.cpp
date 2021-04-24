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
    string s;
    lint m;
    cin >> s >> m;
    vector<int> x(s.size());
    int min = 100;
    int time =0;
    REP(i,s.size()){
        x[i] = s[i] - '0';
        CMIN(min, x[i]);
    }

    while(1){
        min++;
        lint val = 0;
        bool flag = true;
        REP(i,x.size()){
            lint a = x[i] * powl(min, i);
            if(a < 0){
                flag = false;
                break;
            } 
            if (val <= LLONG_MAX - a)
                val += a;
        }

        if(flag){
            if(val <= m)
                time++;
            else break;
        }else break;
    }
    println(time);
    return 0;
}