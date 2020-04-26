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
    vector<vector<int>> pos(n,vector<int>(2));
    REP(i,n)
        cin >> pos[i][0] >> pos[i][1];
    
    REP(i,n){
        FOR(j, i + 1, n){
            int len = sqrt(pow(2,pos[i][0] - pos[j][0]) + pow(2, pos[i][1] - pos[j][1]));
            double a = pos[i][0] - pos[j][0] / pos[i][1] - pos[j][1];
            double b = - 1 / a;
            int centerx = 
        }
    }

    return 0;
}