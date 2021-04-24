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
    string s;
    int q;
    cin >> n >> s >> q;
    bool turn = false;
    REP(i,q){
        int t, a, b;
        cin >> t >> a >> b;
        if(t == 1){
            if(turn){
                if(a <= n){
                    a = a + n;
                }else{
                    a = a - n;
                }
                if(b <= n){
                    b = b + n;
                }else{
                    b = b - n;
                }
            }
            a--;
            b--;
            char temp = s[a];
            s[a] = s[b];
            s[b] = temp;
        }else if(t == 2){
            turn = !turn;
        }
    }
    if(turn){
        string a;
        string b;
        REP(i,2 * n){
            if(i < n){
                a.push_back(s[i]);
            }else{
                b.push_back(s[i]);
            }
        }

        println(b+a);
        return 0;
    }
    println(s);
    return 0;
}