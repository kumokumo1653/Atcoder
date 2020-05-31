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
    int n,m;
    cin >> n >> m;
    vector<int> num(n,-1);
    
    REP(i,m){
        int keta,val;
        cin >> keta >> val;
        if(num[keta - 1] != -1 && num[keta - 1] != val){
            cout << -1 << endl;
            return 0;
        }
        if(n != 1 && keta == 1 && val == 0){
            cout << -1 << endl;
            return 0;
        }
        num[keta - 1] = val;
    }
    if(n == 1){
        if(num[0] == -1)
            num[0] = 0;
        cout << num[0] << endl;
    }else if(n == 2){
        if(num[0] == -1)
            num[0] = 1;
        if(num[1] == -1)
            num[1] = 0;
        cout << num[0] << num[1] << endl;
    }else if(n == 3){
        if(num[0] == -1)
            num[0] = 1;
        if(num[1] == -1)
            num[1] = 0;
        if(num[2] == -1)
            num[2] = 0;
        cout <<num[0] << num[1] <<num[2] << endl;
    }
    return 0;
}