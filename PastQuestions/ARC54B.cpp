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

long double f(long double p ,long double x){
    return (x + p * powl(0.5, x/1.5));
}
int main(){
    long double p;
    cin >> p;
    long double left = 0;
    long double right = p;
    long double t1 = (2 * left + right) / 3;
    long double t2 = (left + 2 * right) / 3;

    REP(i,200){

        if(f(p,t1) > f(p, t2)){
            left = t1;
        }else{
            right = t2;
        }
        t1 = (2 * left + right) / 3;
        t2 = (left + 2 * right) / 3;
    }
    if(f(p,left) < 0)
        cout << p << endl;
    else
        cout << std::fixed << std::setprecision(15) << f(p,left) << endl;
}
    