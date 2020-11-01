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
    vector<pair<int,int>> a(n);
    REP(i,n){
        cin >> a[i].first >> a[i].second;
    }
    REP(i,n){
        REP(j,n){
            REP(k,n){
                if(i == j || j == k || i == k) continue;
                int dx1 = a[j].first - a[i].first;
                int dx2 = a[k].first - a[i].first;
                int dy1 = a[j].second - a[i].second;
                int dy2 = a[k].second - a[i].second;
                if(dx1 * dx2 < 0 || dy1 * dy2 < 0){
                    if(dx1 * dy2 == dx2 * dy1){
                        println("Yes");
                        return 0;
                    }
                }
                if(dx1 * dx1 + dy1 * dy1 < dx2 * dx2 + dy2 * dy2){
                    if(dx1 * dy2 == dx2 * dy1){
                        println("Yes");
                        return 0;
                    }
                }

                if(dx1 * dx1 + dy1 * dy1 > dx2 * dx2 + dy2 * dy2){
                    if(dx1 * dy2 == dx2 * dy1){
                        println("Yes");
                        return 0;
                    }
                }
            }
        }
    }
    println("No");
    return 0;
}