#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define ALL(v) v.begin(), v.end()
#define CMAX(m, x) if (x > m) m = x;
#define CMIN(m, x) if (x < m) m = x;
#define itn int
typedef long long lint;
const int INF = 1e9;
const lint LINF = 1e18;
int main(){
    int n;
    cin >> n;
    lint sum = -LINF;
    vector<vector<int>> a(n - 1,vector<int>(n));
    vector<int> group(n);
    REP(i,n - 1){
        FOR(j,i + 1,n){
            int c;
            cin >> c;
            a[i][j] = c;
        }
    }   

    REP(i,int(pow(3,n))){
        int num = i;
        lint add = 0;
        REP(j,n){
            group[j] = num % 3;
            num /= 3;
        }
        REP(j,n - 1){
            FOR(k, j + 1, n){
                if(group[k] == group[j])
                    add += a[j][k];
            }
        } 
        CMAX(sum,add);
    }
    cout << sum << endl;
    return 0;
}
