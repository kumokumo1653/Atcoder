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
    int n,m;
    cin >> n >> m;
    lint sum = 0;
    lint tokuten = 0;
    vector<vector<int>> score(n,vector<int>(m));
    REP(i,n){
        REP(j,m){
            cin >> score[i][j];
        }
    }
    REP(i,m){
        FOR(j,i + 1,m){
            REP(k,n){
                sum += max(score[k][i],score[k][j]);
            }
            CMAX(tokuten,sum);
            sum = 0;
        }
    }
    cout << tokuten << endl;
    return 0;
}