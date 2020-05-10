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
    int n;
    cin >> n;
    vector<int> p(n);
    vector<int> q(n);
    int a,b;
    int cnt =0;
    REP(i,n)
        cin >> p[i];
    
    REP(i,n)
        cin >> q[i];
    vector<int> v(n);
    iota(ALL(v),1);
    do{
        cnt++;
        if(p == v)            
            a = cnt;
        if(q == v)
            b = cnt;
    }while(next_permutation(ALL(v)));
    cout << abs(a - b) << endl;
    return 0;
}