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
#define println(x) cout << x << endl
#define print(x) cout << x << " "
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
    int h,w,k;
    cin >> h >> w;
    pair<int,int> s;
    pair<int,int> g;
    cin >> s.first >> s.second >> g.first >> g.second;
    s.first--;s.second--;
    g.first--;g.second--;
    vector<vector<char>> map(h,vector<char>(w));
    vector<vector<int>> keiro(h,vector<int>(w,-1));
    REP(i,h){
        REP(j,w){
            cin >> map[i][j];
        }
    }

    queue<pair<int,int>> que;
    que.push(make_pair(s.second,s.first));
    keiro[s.second][s.first] = 0;
    while(!que.empty()){
        int x,y;
        int s,n,e,w;
        x = que.front().second;
        y = que.front().first;
        que.pop();
        FORR(i,k + 1,0){
            if(map[y][x - i] == '@'){
                FOR(j,1,i){
                    map[y][x - j] = map[y][x] + 1;
                }
                que.push(make_pair(y,x - i - 1));
            }
        }
    }
    return 0;
}