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
    int h,w;
    int num = 0;
    cin >> h >> w;
    pair<int,int> s;
    pair<int,int> g;
    cin >> s.first >> s.second;
    cin >> g.first >> g.second;
    queue<pair<int,int>> k;
    vector<vector<int>> keiro(h + 2,vector<int>(w + 2, -1));
    vector<vector<char>> meiro(h + 2,vector<char>(w + 2));
    vector<pair<int,int>> his;
    REP(i,h){
        REP(j,w) {
            char c;
            cin >> c;
            meiro[i + 1][j + 1] = c;
            if(c == '#'){
                keiro[i + 1][j + 1] = -2;
            }
        }
    }
    REP(i,h + 2){
        keiro[i][0] = -2;
        keiro[i][w + 1] = -2;
        meiro[i][0] = '#';
        meiro[i][w + 1] = '#';
    }
    REP(i,w + 2){
        keiro[0][i] = -2;
        keiro[h + 1][i] = -2;
        meiro[0][i] = '#';
        meiro[h + 1][i] = '#';
    }
    k.push(make_pair(s.first,s.second));
    while(!k.empty()){
        keiro[k.front().first][k.front().second] = num;
        while(!k.empty()){
            bool f = false;
            int y = k.front().first;
            int x = k.front().second;
            k.pop();
            if(meiro[y - 1][x] == '.' && keiro[y - 1][x] == -1){
                k.push(make_pair(y - 1,x));
                keiro[y - 1][x] = num;
            }
            if(meiro[y + 1][x] == '.' && keiro[y + 1][x] == -1){
                k.push(make_pair(y + 1,x));
                keiro[y + 1][x] = num;
            }
            if(meiro[y][x - 1] == '.' && keiro[y][x - 1] == -1){
                k.push(make_pair(y,x - 1));
                keiro[y][x - 1] = num;
            }
            if(meiro[y][x + 1] == '.' && keiro[y][x + 1] == -1){
                k.push(make_pair(y,x + 1));
                keiro[y][x + 1] = num;
            }
            if(meiro[y - 1][x] == '#')
                f = true;
            if(meiro[y + 1][x] == '#')
                f = true;
            if(meiro[y][x - 1] == '#')
                f = true;
            if(meiro[y][x - 1] == '#')
                f = true;
            if(f) 
                his.push_back(make_pair(y,x));
        }
        REP(n,his.size()){
            FOR(i, -2, 3){
                FOR(j, -2, 3){
                    if(his[n].first + i >= 0 && his[n].first + i < h + 2){
                        if(his[n].second + j >= 0 && his[n].second + j < w + 2){
                            if(keiro[his[n].first + i][his[n].second + j] == -1){
                                k.push(make_pair(his[n].first + i, his[n].second + j));
                            }
                        }
                    }
                }
            }
        }
        his.clear();
        num++;
    }
    if(keiro[g.first][g.second] == -1)
        println(-1);
    else println(num - 1);
    
    return 0;
}