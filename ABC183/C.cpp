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
    int k;
    cin >> n >> k;
    int cnt = 1;
    int temp = 0;
    vector<vector<int>> time(n,vector<int>(n));
    REP(i,n){
        REP(j,n){
            cin >> time[i][j];
        }
    }
    vector<int> tosi(n - 1);
    REP(i,n - 1){
        tosi[i] = cnt;
        cnt++;
    }
    cnt = 0;
    do{
        REP(i,n){
            if(i == 0) temp += time[0][tosi[i]];
            else if(i == n - 1) temp += time[0][tosi[i - 1]];
            else temp += time[tosi[i - 1]][tosi[i]];
        }
        if(temp == k) cnt++;
        temp = 0;
    }while(next_permutation(tosi.begin(),tosi.end()));
    println(cnt);
    return 0;
}