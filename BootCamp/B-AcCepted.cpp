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
    cin >> s;
    bool f = false;
    REP(i,s.size()){
        if(i == 0){
            if(s[i] != 'A'){
                println("WA");
                return 0;
            }
        } else if(i >= 2 && i <= s.size() - 2){
            if(s[i] == 'C'){
                if(f){
                    println("WA");
                    return 0;
                }
                f  = true;
            }else{
                if(s[i] < 'a' || s[i] > 'z'){
                    println("WA");
                    return 0;
                }
            }
        }else{
            if(s[i] < 'a' || s[i] > 'z'){
                println("WA");
                return 0;
            }
        }
    }
    if(!f){
        println("WA");
        return 0;
    }
    println("AC");
    return 0;
}