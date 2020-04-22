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
    lint n,a,b;
    cin >> n >> a >> b;
    lint sum = 0;
    sum = (n / (a + b)) * a;
    lint remain = n % (a + b);
    if(remain > a)
        sum += a;
    else
        sum += remain;
    
    cout << sum << endl;
    
    return 0;
}