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
    vector<vector<char>> yama(n,vector<char>(2 * n - 1));
    REP(i,n){
        REP(j,yama[0].size()){
            cin >> yama[i][j];
        }
    } 
    for(int i = n - 2; i >= 0;i--){
        for(int j = 1; j <= 2 * n - 3;j++){
            if(yama[i][j] == '#'){
                bool flag = false;
                for(int k = -1; k <= 1; k++){
                    if(yama[i + 1][j + k] == 'X')
                        flag = true;
                }
                if(flag)
                    yama[i][j] = 'X';
            }
        }
    }
    REP(i,n){
        REP(j,yama[0].size())
            cout << yama[i][j];
        cout << endl;
    }
    return 0;
}