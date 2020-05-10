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
const int INF = 1e9;
const lint LINF = 1e18;
int main(){
    int n,m;
    cin >> n >> m;
    int mpoint = 0;
    int point = 0;
    vector<int> score(n + 1);
    REP(i,n)
        cin >> score[i];
    score[n] = 0;
    vector<int> q((n + 1) * (n + 1));
    int cnt = 0;
    REP(i,n + 1){
        REP(j,n + 1){
            q[cnt] = score[i] + score[j];
            cnt++;
        }
    }
    sort(ALL(q));
    REP(i,q.size()){
        int target = m - q[i];
        if(target >= 0){
            int a = q[distance(q.begin() ,upper_bound(ALL(q),target)) - 1];
            point = q[i] + a;
            CMAX(mpoint,point);
            point = 0;
        }
    }
    cout << mpoint << endl;
    return 0;
}