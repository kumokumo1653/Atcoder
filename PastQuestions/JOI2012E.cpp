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
int main(){
    int w,h;
    cin >> w >> h;
    w += 2;h += 2;
    int cnt = 0;
    vector<vector<int>> map(h,vector<int>(w));
    queue<pair<int,int>> que;
    FOR(i,1,h - 1){
        FOR(j,1,w - 1)
            cin >> map[i][j];
    }
    REP(i,h){
        map[i][0] = 0;
        map[i][w - 1] = 0;
    }
    REP(i,w){
        map[0][i] = 0;
        map[h - 1][i] = 0;
    }
    que.push(make_pair(0,0));
    while(!que.empty()){
        int y = que.front().first;
        int x = que.front().second;
        map[y][x] = -1;
        que.pop();
        if(y != 0){
            if(map[y - 1][x] == 0){
                map[y - 1][x] = -1;
                que.push(make_pair(y - 1,x));
            }else if(map[y - 1][x] == 1 ){
                cnt++;
            }
        }
        if(y != h - 1){
            if(map[y + 1][x] == 0 ){
                map[y + 1][x] = -1;
                que.push(make_pair(y + 1,x));
            }else if(map[y + 1][x] == 1){
                cnt++;
            }
        }
        if(x != 0){
            if(map[y][x - 1] == 0 ){
                map[y][x - 1] = -1;
                que.push(make_pair(y,x - 1));
            }else if(map[y][x - 1] == 1){
                cnt++;
            }
        }
        if(x != w - 1){
            if(map[y][x + 1] == 0){
                map[y][x + 1] = -1;
                que.push(make_pair(y,x + 1));
            }else if(map[y][x + 1] == 1){
                cnt++;
            }
        }
        if(y % 2 == 1){
            if(y != 0 && x != w - 1){
                if(map[y - 1][x + 1] == 0 ){
                    map[y - 1][x + 1] = -1;
                    que.push(make_pair(y - 1,x + 1));
                }else if(map[y - 1][x + 1] == 1){
                    cnt++;
                }
            }
            if(y != h - 1 && x != w - 1){
                if(map[y + 1][x + 1] == 0 ){
                    map[y + 1][x + 1] = -1;
                    que.push(make_pair(y + 1,x + 1));
                }else if(map[y + 1][x + 1] == 1){
                    cnt++;
                }
            }
        }else{
            if(y != h - 1 && x != 0){
                if(map[y + 1][x - 1] == 0 ){
                    map[y + 1][x - 1] = -1;
                    que.push(make_pair(y + 1,x - 1));
                }else if(map[y + 1][x - 1] == 1){
                    cnt++;
                }
            }
            if(y != 0 && x != 0){
                if(map[y - 1][x - 1] == 0){
                    map[y - 1][x - 1] = -1;
                    que.push(make_pair(y - 1,x - 1));
                }else if(map[y - 1][x - 1] == 1){
                    cnt++;
                }
            } 
        }
    }
    cout << cnt << endl;
    return 0;
}