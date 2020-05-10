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

int cnt = 0;
bool dfs(vector<vector<int>> &bi, vector<vector<int>> &flag,int x, int y){
    bool re = false;
    if(bi[y][x] == 1){
        if(flag[y][x] == 0){
            flag[y][x] = cnt;
            re = true;
            for(int i = -1;i <= 1; i++){
                for(int j = -1; j <= 1; j++){
                    dfs(bi,flag,x + i,y + j);
                }
            }
        }
    }
    return re;
}
int main(){
    int w, h;
    vector<int> ans;
    while(1){
        cin >> w >> h;
        if(w == 0 && h == 0)
            break;
        w += 2;
        h += 2;
        vector<vector<int>> bi(h,vector<int>(w));
        vector<vector<int>> flag(h,vector<int>(w,0));
        REP(i,h - 2){
            REP(j,w - 2)
                cin >> bi[i + 1][j + 1];
        }
        REP(i,h){
            bi[i][0] = 0;
            bi[i][w -1] = 0;
        }
        REP(i,w){
            bi[0][i] = 0;
            bi[h - 1][i] = 0;
        }
        REP(i,h){
            REP(j,w){
                if(bi[i][j] == 1 && flag[i][j] == 0){
                    cnt++;
                    if(!dfs(bi,flag,j,i)) cnt --;
                }
            }
        }
        ans.push_back(cnt);
        cnt = 0;
    }
    
    REP(i,ans.size())
        cout << ans[i] << endl;
    return 0;
}
