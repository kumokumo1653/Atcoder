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
    int cnt = 1;
    while(1){
        int anuki = cnt * 0.08;
        int bnuki = cnt * 0.1;
        if(anuki == a && bnuki == b)
            break;
        if(bnuki > 100){
            cout << -1 << endl;
            return 0;
        }
        cnt++;
    }
    cout << cnt << endl;
}