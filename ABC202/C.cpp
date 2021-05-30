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
    vector<int> a(n);
    vector<int> b(n);
    vector<int> c(n);
    REP(i, n){
        cin >> a[i];
    }
    REP(i, n){
        cin >> b[i];
    }
    REP(i, n){
        cin >> c[i];
    }
    vector <int> bc;
    REP(i,n){
        bc.push_back(b[--c[i]]);
    }
    sort(ALL(a));
    sort(ALL(bc));
    lint time = 0;
    REP(i,n){
        auto itr = lower_bound(ALL(bc),a[i]);
        auto temp = upper_bound(ALL(bc), a[i]);
        if(itr != bc.end()){
            int index = distance(bc.begin(), itr);
            int upper = distance(bc.begin(), temp);
            time += (lint)upper - index;
        }
    }
    println(time);
    return 0;
}