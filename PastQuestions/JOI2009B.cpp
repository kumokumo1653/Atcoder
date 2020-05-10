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
    int d,n,m;
    int sum = 0;
    cin >> d >> n >> m;
    vector<int> mise(n + 1);
    vector<int> kyaku(m);
    mise[0] = 0;
    FOR(i, 1,n)
        cin >> mise[i];
    mise[n] = d;
    sort(ALL(mise));
    
    REP(i,m){
        int target;
        cin >> target;
        auto itr = lower_bound(ALL(mise),target);
        int index = distance(mise.begin(),itr);
        sum += min(abs(target - mise[index]),abs(target - mise[index - 1]));
    }
    cout << sum << endl;
    return 0;
}