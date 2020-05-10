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
    int n, m;
    cin >> n >> m;
    vector<int> tem(n);
    vector<int> da(n,-1);
    REP(i,n)
        cin >> tem[i];
    int cnt = 0;
    REP(i,m){
        int a,b;
        cin >> a >> b;
        a--;
        b--;
        if(tem[a] > tem[b] && da[a] != 0){
            da[a] = 1;
            da[b] = 0;
        }else if(tem[a] < tem[b] && da[b] != 0){
            da[b] = 1;
            da[a] = 0;
        }else{
            da[a] = 0;
            da[b] = 0;
        }
    }
    REP(i,n){
        if(da[i] != 0)
            cnt++;
    }
    cout << cnt << endl;

    return 0;
}