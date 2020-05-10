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
    int n,k;
    cin >> n >> k;
    int cnt = 0;
    vector<vector<int>> okasi(k);
    vector<bool> sunuke(n);
    REP(i,k){
        int d;
        cin >> d;
        REP(j,d){
            int a;
            cin >> a;
            sunuke[a - 1] = true;
        }
    }
    REP(i,n){
        if(!sunuke[i])
            cnt++;
    }
    cout << cnt << endl;
    return 0;
}