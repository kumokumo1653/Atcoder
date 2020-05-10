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
typedef long long lint;
typedef long double ldouble;
const int INF = 1e9;
const lint LINF = 1e18;


int main(){
    int n, q;
    cin >> n >> q;
    vector<vector<int>> ki(n);
    vector<int> point(n);
    queue<pair<int,int>> que;
    int c = 0;int p = 0;
    REP(i,n - 1){
        int a,b;
        cin >> a >> b;
        a--;b--;
        ki[b].push_back(a);
        ki[a].push_back(b);
    }
    REP(i,q){
        int pos,ap;
        cin >> pos >> ap;
        pos--;
        point[pos] += ap;
    }

que.push(make_pair(0,0));
while(!que.empty()){
    c = que.front().first;
    p = que.front().second;
    que.pop();
    for(auto i : ki[c]){
        if(i != p){  
            point[i] += point[c];
            que.push(make_pair(i,c));
        }
    }
    if(que.empty()) break;
}
    REP(i,n)
        cout << point[i] << " ";
    cout << endl;
}