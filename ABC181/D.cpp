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
    vector<pair<bool, int>> flag(9);
    REP(i, s.size()){
        flag[s[i] - '0' - 1] = make_pair(true, flag[s[i] - '0' - 1].second + 1);
    }
    if(s.size() >= 3){
        REP(i,9){
            REP(j,9){
                REP(k,9){
                    if(flag[i].first && flag[j].first && flag[k].first){
                        if(i == j){
                            if(flag[i].second < 2) continue;
                        }
                        if(i == k){
                            if(flag[i].second < 2) continue;
                        }
                        if(k == j){
                            if(flag[k].second < 2) continue;
                        }
                        if(k == j && i == k){
                            if(flag[i].second < 3) continue;
                        }
                        int num = (i + 1) * 100 + (j + 1) * 10 + (k + 1);
                        if(num % 8 == 0){
                            println("Yes");
                            return 0;
                        }
                    }
                }
            }
        }
    }else if(s.size() == 2){
        int num = (s[0] - '0') * 10 + (s[1] - '0');
        if(num % 8 == 0){
            println("Yes");
            return 0;
        }
        num = (s[1] - '0') * 10 + (s[0] - '0');
        if(num % 8 == 0){
            println("Yes");
            return 0;
        }
    }else{
        int num = (s[0] - '0');
        if(num % 8 == 0){
            println("Yes");
            return 0;
        }
    }
    println("No");
    return 0;
}