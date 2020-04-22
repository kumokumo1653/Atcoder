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
    vector<int> buka(n);
    REP(i,n - 1){
        int jousi;
        cin >> jousi;
        (buka[jousi - 1])++;
    }
    REP(i,n){
            cout << buka[i] << endl;
    }
    
    return 0;
}