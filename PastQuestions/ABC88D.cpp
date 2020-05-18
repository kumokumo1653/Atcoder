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

vector<int> dy{-1,0,1,0};
vector<int> dx{0,-1,0,1};
int main(){
    int h,w;
    cin >> h >> w;
    h += 2;
    w += 2;
    int kuro = 0;
    int siro = 0;
    vector<vector<char>> map(h,vector<char>(w));
    queue<pair<int,int>> que;
    vector<vector<int>> keiro(h,vector<int>(w,-1));
    FOR(i,1,h - 1){
        FOR(j,1,w - 1){
            cin >> map[i][j];
            if(map[i][j] == '.') siro++;
            else kuro++;
        }
    }
    REP(i,w){
        map[0][i] = '#';
        map[h - 1][i] = '#';
    }
    REP(i,h){
        map[i][0] = '#';
        map[i][w - 1] = '#';
    }
    keiro[1][1] = 0;
    que.push(make_pair(1,1));
    while(!que.empty()){
        int y = que.front().first;
        int x = que.front().second;
        que.pop();
        if(y == h - 2 && x == w -2) break;
        REP(i,dx.size()){
            if(keiro[y + dy[i]][x + dx[i]] == -1 && map[y + dy[i]][x + dx[i]] == '.'){
                keiro[y + dy[i]][x + dx[i]] = keiro[y][x] + 1;
                que.push(make_pair(y + dy[i],x + dx[i]));
            }
        }
    }
    if(keiro[h - 2][w - 2] == -1)
        cout << -1 << endl;
    else
        cout << siro - (keiro[h - 2][w - 2] + 1) <<endl;
    return 0;
}