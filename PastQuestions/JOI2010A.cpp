#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n - 1; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define FORR(i,m,n) for(int i = m - 1; i >= n; i--)
#define ALL(v) v.begin(), v.end()
#define CMAX(m, x)  m = max(m,x)
#define CMIN(m, x)  m = min(m,x)
#define itn int
#define Yes() cout << "Yes" << endl
#define No() cout << "No" << endl
#define YES() cout << "YES" << endl
#define NO() cout << "NO" << endl
typedef long long lint;
typedef long double ldouble;
const int INF = 1e9;
const lint LINF = 1e18;
int main(){
    int n,m;
    cin >> n >> m;
    int p = 0;
    lint keiro = 0;
    vector<int> a(n);
    a[0] = 0;
    FOR(i,1,n){
        int d;
        cin >> d;
        a[i] = a[i - 1] + d;
    }
    REP(i,m){
        int d;
        cin >> d;
        if(d > 0){
            keiro += a[p + d] - a[p];
            p = p + d;
        }else{
            keiro += a[p] - a[p + d];
            p = p + d;
        }
    }
    cout << keiro % 100000 << endl;
    return 0;
}