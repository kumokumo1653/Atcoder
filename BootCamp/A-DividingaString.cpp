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
    string m = "";
    string k;
    int ans = 0;
    int r = 0;
    REPR(i,s.size()){
        if(s[i] == s[s.size() - 1]){
            r++;
        }else break;
    }
    REP(i,s.size()){
        k = string{s[i]};
        if(i >= s.size() - r){
            itn l = s.size() - i;
            ans += (l / 3) * 2;
            if(l % 3 != 0){
                ans++;
            }
            break;
        }
        if(m == k){
            k += string{s[i + 1]};
            i++;
        }
        m = k;
        ans++;
    }
    println(ans);
    return 0;
}