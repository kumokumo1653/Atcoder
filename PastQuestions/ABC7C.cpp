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
    int r, c;
    cin >> r >> c;
    vector<int> start(2);
    vector<int> goal(2);
    queue<vector<int>> bfs;
    vector<vector<char>> meiro(r, vector<char>(c));
    vector<vector<int>> keiro(r, vector<int>(c, -1));
    cin >> start[0] >> start[1];
    cin >> goal[0] >> goal[1];
    REP(i,r){
        REP(j,c)
        cin >> meiro[i][j];
    }

    int x,y;
    x = start[1] - 1;
    y = start[0] - 1;
    keiro[y][x] = 0;
    while(1){
        if(keiro[y][x - 1] == -1 && meiro[y][x - 1] == '.'){
            keiro[y][x - 1] = keiro[y][x] + 1;
            bfs.push({y,x - 1});
        }
        if(keiro[y][x + 1] == -1 && meiro[y][x + 1] == '.'){
            keiro[y][x + 1] = keiro[y][x] + 1;
            bfs.push({y,x + 1});
        }
        if(keiro[y - 1][x] == -1 && meiro[y - 1][x] == '.'){
            keiro[y - 1][x] = keiro[y][x]  + 1;
            bfs.push({y - 1, x});
        }
        if(keiro[y + 1][x] == -1 && meiro[y + 1][x] == '.'){
            keiro[y + 1][x] = keiro[y][x] + 1;
            bfs.push({y + 1, x});
        }
        if(keiro[goal[0] - 1][goal[1] - 1] != -1)
            break;
        vector<int> temp = bfs.front();
        bfs.pop();
        x = temp[1];
        y = temp[0];
    }
    cout << keiro[goal[0] - 1][goal[1] - 1] << endl;


    return 0;
}