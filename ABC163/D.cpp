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
    int n,k;
    int cnt = 0;
    cin >> n >> k;
    vector<int> digit(n + 1);
    vector<int> div(n + 1,1);
    set<vector<int>> kosu;
    while(1){
        digit[0] += 1;
        REP(i,n + 1){
            if(digit[i] == 2){
                (digit[i + 1])++;
                digit[i] = 0;
            }
            if(digit[i] == 1)
                cnt++;
        }
        if(cnt >= k){
            int sum = 0;
            REP(i,n + 1){
                if(digit[i] == 1)
                    sum += i;
            }
            kosu.insert({cnt,sum});
        }
        cnt = 0;
        if(digit == div)
            break;
    } 
    cout << kosu.size() % lint(10e9+7) <<endl;
    return 0;
}