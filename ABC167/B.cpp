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
    int a,b,c,k;
    cin >> a >> b >> c >> k;
    int max = 0;
    if(k > a){
        max = a;
        k -= a;
    }else{
        max = k;
        cout << max << endl;
        return 0;
    }
    if(k > b){
        k -= b;
    }else{
        cout << max << endl;
        return 0;
    }
    cout << max - k << endl;
    return 0;
}