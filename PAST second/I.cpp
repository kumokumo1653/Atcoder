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
typedef long double ldouble;
const int INF = 1e9;
const lint LINF = 1e18;
int main(){
    int n;
    cin >> n;
    vector<pair<int,int>> a(pow(2,n)); 
    vector<int> last(pow(2,n));
    int cnt = 0;
    REP(i,a.size()){
        cin >> a[i].first;
        a[i].second = i;
    }
    
    vector<pair<int,int>> win;
    while(1){
        if(a.size() == 1){
            last[a[0].second] = cnt;
            break;
        }
        cnt++;
        REP(i,a.size() / 2){
            if(a[2 * i].first > a[2 * i + 1].first){
                win.push_back(a[2 * i]);
                last[a[2 * i + 1].second] = cnt;
            }
            else{
                win.push_back(a[2 * i + 1]);
                last[a[2 * i].second] = cnt;
            }
        }

        a.resize(win.size());
        copy(ALL(win),a.begin());
        win.clear();
    }
    REP(i,last.size())
        cout << last[i] << endl;
    return 0;
}