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
    lint sum = 0;
    vector<int> a(n);
    vector<int> b(n);
    vector<int> c(n);

    REP(i,n)
        cin >> a[i]; 
    REP(i,n)
        cin >> b[i]; 
    REP(i,n)
        cin >> c[i]; 
    
    sort(ALL(a));
    sort(ALL(b));
    sort(ALL(c));
    
    REP(i,n){
        lint csize = distance(upper_bound(ALL(c),b[i]),c.end());
        lint asize = distance(a.begin(),lower_bound(ALL(a),b[i]));
        sum += csize * asize;
    }
    cout << sum << endl;
    return 0;
   }