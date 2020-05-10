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
    int h,w,n;
    cin >> h >> w >> n;
    lint cnt = 0;
    vector<vector<int>> map(h + 2,vector<int>(w + 2,-1));
    vector<pair<int,int>> tizu(n);
    pair<int,int> start;
    queue<pair<int,int>> que;
    FOR(i,1,h + 1){
        FOR(j,1,w + 1){
            char c;
            cin >> c;
            if(c != 'S' && c !='.' && c != 'X'){
                tizu[c - '1'] = make_pair(i,j);
            }
            if(c == 'S'){
                start = make_pair(i,j);
                map[i][j] = 10;
            }
            if(c == 'X')
                map[i][j] = -2;
        }
    }
    REP(i,h + 2){
        map[i][0] = -2;
        map[i][w + 1] = -2;
    }
    REP(i,w + 2){
        map[0][i] = -2;
        map[h + 1][i] = -2;
    }
    que.push(make_pair(start.first,start.second));
    int x = que.front().second;
    int y = que.front().first;
    que.pop();
    map[y][x] = 0;
    REP(i,h + 2){
        REP(j,w + 2)
            printf("%2d",map[i][j]);
        cout << endl;
    }
    REP(i,n){
        while(1){
            cout << y << " " << x << endl;
            if(x == tizu[i].second && y == tizu[i].first){
                queue<pair<int,int>> empty;
                cnt = map[y][x];
                cout << cnt << endl;
                swap(que,empty);
                que.push(make_pair(y,x));
                break;
            }
            if(map[y + 1][x] <= cnt && map[y + 1][x] >= -1){
                map[y + 1][x] = map[y][x] + 1;
                que.push(make_pair(y + 1,x));
            }
            if(map[y - 1][x] <= cnt&& map[y - 1][x] >= -1){
                map[y - 1][x] = map[y][x] + 1;
                que.push(make_pair(y - 1,x));
            }
            if(map[y][x + 1] <= cnt && map[y][x + 1] >= -1){
                map[y][x + 1] = map[y][x] + 1;
                que.push(make_pair(y,x + 1));
            }
            if(map[y][x - 1] <= cnt&& map[y][x - 1] >= -1){
                map[y][x - 1] = map[y][x] + 1;
                que.push(make_pair(y,x - 1));
            }
            
            REP(i,h + 2){
                REP(j,w + 2)
                    printf("%2d",map[i][j]);
                cout << endl;
            }
            x = que.front().second;
            y = que.front().first;
            que.pop();
        }
    }
    cout << cnt << endl;
    return 0;
}