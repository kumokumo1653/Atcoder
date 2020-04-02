#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define ALL(v) v.begin(), v.end()
#define CMAX(m, x) if (x > m) m = x;
#define CMIN(m, x) if (x < m) m = x;

typedef long long lint;
const int INF = 1e9;
const lint LINF = 1e18;
int main(){
    int n,q;
    int min = INF;
    int kimin = INF;
    lint all = 0;
    lint ki = 0;
    lint sum = 0;
    cin >> n;
    vector<int> c(n);
    REP(i,n)
        cin >> c[i];
    REP(i,n)
        CMIN(min,c[i]);
    for(int i = 0 ;i < n; i += 2)
        CMIN(kimin,c[i]);
    cin >> q;
    REP(i,q){
        int num;
        cin >> num;
        if(num == 1){
            int x,a;
            cin >> x >> a;
            x--;
            if(c[x] < a + all + ((x % 2) ? 0:ki))
                continue;
            c[x] -= a;
            sum += a;
            CMIN(min,c[x]);
            if(x % 2 == 0)
                CMIN(kimin,c[x]);
        }else if(num == 2){
            int a;
            cin >> a;
            if(kimin < a)
                continue;
            sum += a * ((n + 1) / 2);
            ki += a;
            kimin -= a;
            CMIN(min,kimin);
        }else if(num == 3){
            int a;
            cin >> a;
            if(min < a)
                continue;
            sum += a * n;
            all += a;
            min -= a;
            kimin -= a;
        }
    }
    cout << sum << endl;
    return 0;
}