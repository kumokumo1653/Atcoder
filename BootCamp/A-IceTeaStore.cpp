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
    int q,h,s,d;
    ldouble n;
    cin >> q >> h >> s >> d >> n;
    lint cnt = 0;
    int i = 0;
    vector<pair<int,char>> c(4);
    c[0] = make_pair( q * 8,'q');
    c[1] = make_pair( h * 4,'h');
    c[2] = make_pair( s * 2,'s');
    c[3] = make_pair(d,'d');

    sort(ALL(c));
    while(n > 0.2){
        int cost;
        ldouble l;
        if(c[i].second == 'q'){
            cost = c[i].first / 8;
            l = 0.25;
        }
        if(c[i].second == 'h'){
            cost = c[i].first / 4;
            l = 0.5;
        }
        if(c[i].second == 's'){
            cost = c[i].first / 2;
            l = 1;
        }
        if(c[i].second == 'd'){
            cost = c[i].first;
            l = 2;
        }
        if(floorl(n / l) >= 1){
            cnt += lint(floorl(n / l) * cost);
            n -= floorl(n / l) * l;
        }
        i++;
    }
    println(cnt);
    return 0;
}