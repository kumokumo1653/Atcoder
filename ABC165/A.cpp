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
typedef long double ldouble;
const int INF = 1e9;
const lint LINF = 1e18;
int main(){

    int k, a, b;
    cin >> k >> a >> b;
    bool flag = false;
    FOR(i,a,b + 1){
        if(i % k == 0){
            flag = true;
            break;
        }
    }
    if(flag)
        cout << "OK" << endl;
    else
    {
        cout << "NG" << endl;
    }
    
    return 0;
}