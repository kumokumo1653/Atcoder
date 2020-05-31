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
    cin >> n;
    string s;
    int cnt = 0;
    vector<vector<int>> a(n,vector<int>(26));
    REP(i,n){
        REP(j,n){
            char c;
            cin >> c;
            a[i][c - 'a']++;
        }
    }
    REP(i,n/2){
        cnt = s.size();
        REP(j,26){
            if(a[i][j] > 0 && a[n - i - 1][j] > 0){
                s.push_back('a' + j);
                break;
            }
        }
        if(cnt == s.size()){
            cout << -1 << endl;
            return 0;
        }
    }
    if(n % 2 == 1){
        REP(i,26){
            if(a[(n - 1)/2][i] > 0){
                s.push_back('a' + i);
                break;
            }
        }
    }
    FORR(i,n/2,0) s.push_back(s[i]);
    cout << s <<endl;
    return 0;
}