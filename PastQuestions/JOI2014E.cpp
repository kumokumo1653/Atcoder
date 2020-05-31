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
    int n,k;
    cin >> n >> k;
    vector<vector<int>> edge(n);
    vector<pair<int,int>> taxi(n);
    vector<vector<pair<int,int>>> g(n);
    REP(i,n){cin >> taxi[i].first >> taxi[i].second;}
    REP(i,k){
        int a,b;
        cin >> a >> b;
        a--;b--;
        edge[a].push_back(b);
        edge[b].push_back(a);
    }
    
    queue<pair<int,int>> q;
    REP(i,n){
        q.push(make_pair(i,0));
        vector<bool> go(n,false);
        while(!q.empty()){
            pair<int,int> temp = q.front();
            int pos = temp.first;
            go[pos] = true;
            q.pop();
            REP(j,edge[pos].size()){
                if(temp.second < taxi[i].second){
                    if(go[edge[pos][j]])continue;
                    go[edge[pos][j]] = true;
                    g[i].push_back(make_pair(edge[pos][j],taxi[i].first));
                    q.push(make_pair(edge[pos][j],temp.second + 1));
                }
            }
        }
    }
    priority_queue <pair<int,int> ,vector<pair<int,int>>, greater<pair<int,int>>> que;
    vector<int> d(n,INF);
    d[0] = 0;
    que.push(make_pair(0,0));
    while(!que.empty()){
        pair<int,int> temp = que.top();
        que.pop();
        int pos = temp.second;
        if(d[pos] < temp.first)continue;
        REP(i,g[pos].size()){
            pair<int,int> a = g[pos][i];
            if(d[a.first] > d[pos] + a.second){
                d[a.first] = d[pos] + a.second;
                que.push(make_pair(d[a.first],a.first));
            }
        }
    }
    println(d[n - 1]);
    return 0;
}