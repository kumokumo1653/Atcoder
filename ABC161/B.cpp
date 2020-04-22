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
    itn n,m;
    cin >> n >> m;
    int cnt = 0;
    int sum = 0;
    vector<int> a(n);
    REP(i,n){
        cin >> a[i];
        sum += a[i];
    }
    REP(i,n){
        if(double(a[i]) >= double(sum / (4.0 * m)))
            cnt++;
    }
    if(cnt >= m)
        cout << "Yes" << endl;
    else
    {
        cout << "No" << endl;
    }
    
    return 0;
}