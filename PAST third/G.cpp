#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n - 1; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define FORR(i,m,n) for(int i = m - 1; i >= n; i--)
#define ALL(v) v.begin(), v.end()
#define itn int
#define Yes() cout << "Yes" << endl
#define No() cout << "No" << endl
#define YES() cout << "YES" << endl
#define NO() cout << "NO" << endl
template<typename T, typename U>
inline bool CMAX(T &m, U x) { if (m < x) { m = x; return true; } return false; }
template<typename T, typename U>
inline bool CMIN(T &m, U x) { if (m > x) { m = x; return true; } return false; }

typedef long long lint;
typedef long double ldouble;
const int INF = 1e9;
const lint LINF = 1e18;
const int MOD = 1e9+7;
int main(){
    int n,a,b;
    cin >> n >> a >> b;
    queue<pair<int,int>> que;
    vector<vector<int>> map(405,vector<int>(405,-2));
    REP(i,n){
        int a,b;
        cin >> a >> b;
        map[202 + b][202 + a] = -1;
    }
    REP(i,405){
        map[0][i] = -1;
        map[404][i] = -1;
        map[i][0] = -1;
        map[i][404] = -1;
    }
    que.push(make_pair(202,202));
    map[202][202] = 0;
    while(!que.empty()){
        int x,y;
        y = que.front().first;
        x = que.front().second;
        que.pop();
        if(y == b + 202 && x == a + 202)
            break;
        for(int i = -1; i <= 1;i++){
            if(map[y + 1][x + i] == -2){
                map[y + 1][x + i] = map[y][x] + 1;
                que.push(make_pair(y + 1,x + i));
            }
        }
        
        for(int i = -1; i <= 1;i+=2){
            if(map[y][x + i] == -2){
                map[y][x + i] = map[y][x] + 1;
                que.push(make_pair(y,x + i));
            }
        }
        if(map[y - 1][x] == -2){
            map[y - 1][x] = map[y][x] + 1;
            que.push(make_pair(y - 1,x));
        }

    }
    if(map[202 + b][202 + a] == -2) cout << -1 << endl;
    else cout << map[202 + b][202 + a] << endl;
    return 0;
}