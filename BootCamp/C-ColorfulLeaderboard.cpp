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
    cin >> n;
    vector<int> ranks(9);
    int colors = 0;
    REP(i,n){
        int r;
        cin >> r;
        if(r > 3200)
            r = 3200;
        ranks[r / 400]++;
    }

    REP(i,8){
        if(ranks[i] != 0){
            colors++;
        }
    }
    if(ranks[8] == 0){
        print(colors);println(colors);
    }else{
        if(colors == 0){
            print(1);println(ranks[8]);
        }else{
            print(colors);println(ranks[8] + colors);
        }
    }
    return 0;
}