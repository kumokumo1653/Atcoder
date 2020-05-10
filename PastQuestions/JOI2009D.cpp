#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n - 1; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define FORR(i,m,n) for(int i = m - 1; i >= n; i--)
#define ALL(v) v.begin(), v.end()
#define CMAX(m, x)  m = max(m,x)
#define CMIN(m, x)  m = min(m,x)
#define itn int
#define Yes() cout << "Yes" << endl
#define No() cout << "No" << endl
#define YES() cout << "YES" << endl
#define NO() cout << "NO" << endl
typedef long long lint;
typedef long double ldouble;
const int INF = 1e9;
const lint LINF = 1e18;

int waru;
int mx;
void dfs(vector<vector<int>> &d,int x, int y, int dep){
    bool flag = false;
    if(d[x + 1][y] == 1){
        d[x + 1][y] = 0;
        dfs(d,x + 1, y, dep + 1);
        d[x + 1][y] = 1;
        flag = true;
    }
    if(d[x - 1][y] == 1){
        d[x - 1][y] = 0;
        dfs(d,x - 1, y, dep + 1);
        d[x - 1][y] = 1;
        flag = true;
    }
    if(d[x][y + 1] == 1){
        d[x][y + 1] = 0;
        dfs(d,x, y  +1, dep + 1);
        d[x][y + 1] = 1;
        flag = true;
    }
    if(d[x][y - 1] == 1){
        d[x][y - 1] = 0;
        dfs(d,x, y - 1,dep + 1);
        d[x][y - 1] = 1;
        flag = true;
    }
    
    if(!flag)
        CMAX(mx,dep);
}
int main(){
    int n,m;
    cin >> m >> n;
    m+=2;n+=2;
    vector<vector<int>> d(n,vector<int>(m));
    FOR(i,1,n - 1){
        FOR(j,1,m - 1)
            cin >> d[i][j];
    } 
    REP(i,n){
        d[i][0] = 0;
        d[i][m - 1] = 0;
    }
    REP(i,m){
        d[0][i] = 0;
        d[n - 1][i] = 0;
    }
    REP(i,n){
        REP(j,m){
            if(d[i][j] == 1){
                dfs(d,i,j,0);
            }
        }
    }
    cout << mx << endl;
    return 0;
}