#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define ALL(v) v.begin(), v.end()
#define CMAX(m, x)  m = max(m,x);
#define CMIN(m, x)  m = min(m,x);
#define itn int
typedef long long lint;
const int INF = 1e9;
const lint LINF = 1e18;
int main(){
    int a,b;
    cin >> a >> b;
    double anuki = a / 0.08;
    double bnuki = b / 0.1;
    if(b == int(anuki * 0.1)){
        cout << anuki << endl;
        return 0;
    }
    if(a == int(bnuki * 0.08)){
        cout << bnuki << endl;
        return 0;
    }
    cout << -1 << endl;
    return 0;
}