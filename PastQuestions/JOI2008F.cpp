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
    vector<vector<pair<int,int>>> keiro(n);
    vector<int> ans;
    //to,cost
    REP(i,k){
        int a;
        cin >> a;
        if(a == 0){
            int s,g;
            cin >> s >> g;
            s--;g--;
            priority_queue <pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> que;
            vector<int> d(n,INF);
            d[s] = 0;
            que.push(make_pair(0,s));
            while(!que.empty()){
                pair<int,int> p = que.top();
                que.pop();
                int pos = p.second;
                if(d[pos] < p.first) continue;
                print(p.first);println(p.second);
                REP(i,keiro[pos].size()){
                    pair<int,int> temp = keiro[pos][i];
                    if(d[temp.first] > d[pos] + temp.second){
                        d[temp.first] = d[pos] + temp.second;
                        que.push(make_pair(d[temp.first],temp.first));
                    }
                }
            }
            if(d[g] == INF) ans.push_back(-1); else ans.push_back(d[g]);
        }else{
            int c,d,e;
            cin >> c >> d >> e;
            c--;d--;
            keiro[c].push_back(make_pair(d,e));
            keiro[d].push_back(make_pair(c,e));
        }
    }
    REP(i,ans.size()){
        println(ans[i]);
    }
    return 0;
}