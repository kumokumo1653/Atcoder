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
    lint x;
    cin >> x; 
    lint a = 0;
    while(1){
        lint b  = lint(pow(a, 5)) - x;
        b = pow(b,0.2);
        cout << b << endl;
        if(pow(a,5) - pow(b,5) == x){
            cout << a << " " << b << endl;
            break;
        }
    }
}