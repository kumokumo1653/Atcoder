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
    int n,m,k,s,p,q;
    cin >> n >> m >> k >> s >> p >> q;
    queue<pair<int,int>> z;
    vector<int> cost(n,p);
    REP(i,k){
        int zonbi;
        cin >> zonbi;zonbi--;
        z.push(make_pair(zonbi,0));
        cost[zonbi] = -1;
    }
    vector<vector<int>> keiro(n);
    REP(i,m){
        int a,b;
        cin >> a >>b;
        a--;b--;
        keiro[a].push_back(b);
        keiro[b].push_back(a);
    }
    while(!z.empty()){
        int temp = z.front().first;
        int kyori = z.front().second;
        z.pop();
        REP(i,keiro[temp].size()){
            if(cost[keiro[temp][i]] == p){
                if(kyori < s){
                    cost[keiro[temp][i]] = q;
                    z.push(make_pair(keiro[temp][i],kyori + 1));
                }
            }
        }
    }
    priority_queue <pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> que;
    vector<lint> d(n,LINF);
    d[0] = 0;
    cost[n - 1] = 0;
    que.push(make_pair(0,0));
    while(!que.empty()){
        pair<int,int> temp = que.top();
        que.pop();
        int pos = temp.second;
        if(temp.first > d[pos]) continue;
        REP(i,keiro[pos].size()){
            int var = keiro[pos][i];
            if(cost[var] == -1) continue;
            if(d[var] > d[pos] + cost[var]) {
                d[var] = d[pos] + cost[var];
                que.push(make_pair(d[var],var));
            }
        }

    }
    println(d[n - 1]);
    return 0;
}