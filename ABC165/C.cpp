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

int sum = 0;
int len = 0;
int dfs(int i,int n, int m, vector<int> &buf, vector<vector<int>> &q){
    if(i == n){
        REP(i,q.size()){
            if(buf[q[i][1] - 1] - buf[q[i][0] - 1] == q[i][2])
                sum += q[i][3];
        }
        CMAX(len,sum);
        sum = 0;
    }else{
        if(i == 0){
            for(int j = 1;j <= m; j++){
                buf[i] = j;
                dfs(i + 1, n, m, buf, q);
            }
        }else{
            for(int j = buf[i - 1]; j <= m; j++){
                buf[i] = j;
                dfs(i + 1, n, m, buf, q);
            }
        }
    }
    return len;
}
int main(){
    int n,m,q;
    cin >> n >> m >> q;
    vector<vector<int>>qq(q,vector<int>(4));
    vector<int> digit(m);
    vector<int> val(m,1);
    REP(i,q)
        cin  >> qq[i][0] >> qq[i][1] >> qq[i][2] >> qq[i][3];
    vector<int> buf(n,1);

    cout << dfs(0, n, m,buf,qq) << endl;

    return 0;

}