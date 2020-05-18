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
int main(){
    int h,w,k;
    lint v;
    lint temp;
    lint mx = 0;
    cin >> h >> w >> k >> v;
    vector<vector<lint>> a(h,vector<lint>(w));
    vector<vector<lint>> s(h + 1,vector<lint>(w + 1,0));
    REP(i,h){
        REP(j,w){
            cin >> a[i][j];
        }
    }
    FOR(i,1,h + 1){
        FOR(j,1,w + 1){
            s[i][j] = s[i - 1][j] + s[i][j - 1] - s[i - 1][j - 1] + a[i - 1][j - 1];
        }
    }
    FOR(i,0,h + 1){
        FOR(j,0,w + 1){
            FOR(p,i + 1,h + 1){
                FOR(q,j + 1,w + 1){
                    lint t = (q - j)*(p - i);
                    temp = s[p][q] - s[p][j] - s[i][q] + s[i][j];
                    temp += t * k;
                    if(temp <= v)
                        CMAX(mx,t);
                }
            }
        }
    }
    cout << mx << endl;
    return 0;
}