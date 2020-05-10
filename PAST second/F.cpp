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
    itn n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    vector<vector<int>> ab(n,vector<int>(100));
    vector<vector<int>> task(n);
    REP(i,n){
        cin >> a[i] >> b[i];
    }
    REP(i,n)
        task[a[i] - 1].push_back(b[i]);

    REP(i,task[0].size())
        ab[0][task[0][i] - 1]++;
    
    FOR(i,1,n){
        REP(j,100){
            ab[i][j] = ab[i - 1][j];
        }
        REP(j,task[i].size())
            ab[i][task[i][j] - 1]++;
    }

    lint sum = 0;
    vector<int> d(100);
    REP(i,n){
        for(int j = 99; j >= 0; j--){
            if(ab[i][j] - d[j] > 0){
                sum += j + 1;
                d[j]++;
                break;
            }
        }
        cout << sum << endl;
    }
    
    return 0;
}