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
    int n;
    cin >> n;
    vector<int> a(n);
    REP(i,n)
        cin >> a[i];
    
    FOR(i,1,n + 1){
        int cnt = 0;
        int x = i;
        while(1){
            cnt++;
            x = a[x - 1];
            if(i == x)
                break;
        }
        cout << cnt << " ";
    }
    cout << endl;
    return 0;
}