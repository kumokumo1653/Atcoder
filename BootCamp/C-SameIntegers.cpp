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
    vector<int>n(3);
    REP(i,3){
        cin >> n[i];
    } 
    int ans = 0;
    int even = 0;
    int odd = 0;        
    REP(i,3){
        if(n[i] % 2 == 0){
            even ++;
        }else{
            odd ++;
        }
    }
    if(even == 2){
        ans++;
        REP(i,3){
            if(n[i] % 2 == 0){
                n[i]++;
            }
        }
    }else if(odd == 2){
        ans++;
        REP(i,3){
            if(n[i] % 2 == 1){
                n[i]++;
            }
        }

    }

    while(!(n[0] == n[1] && n[1] == n[2])){
        REP(i,3){
            if(*max_element(ALL(n)) != n[i]){
                n[i] += 2;
                ans++;
            }
        }
    }

    println(ans);



    return 0;
}