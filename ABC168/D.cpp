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
int main(){
    int n ,m;
    cin >> n >> m;
    vector<vector<int>> miti(n);
    vector<int> ans(n,-1);
    queue<int> que;
    REP(i,m){
        int a,b;
        cin >> a >> b;
        a--;b--;
        miti[a].push_back(b);
        miti[b].push_back(a);
    }
    que.push(0);
    ans[0] = 0;
    while(!que.empty()){
        int q = que.front();
        que.pop();
        REP(i,miti[q].size()){
            if(ans[miti[q][i]] == -1){
                que.push(miti[q][i]);
                ans[miti[q][i]] = q;
            }
        }
    }
    REP(i,n){
        if(ans[i] == -1){
            No();
            return 0;
        }
    }
    Yes();
    FOR(i,1,n){
        cout << ans[i]+1 << endl;
    }
    return 0;
}