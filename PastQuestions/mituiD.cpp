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
    int n;
    string s;
    cin >> n;
    cin >> s;
    vector<int> digit(n);
    set<int> val;
    int cnt = 0;
    REP(i,n){
        digit[i] = s[i] - '0';
    }
    REP(i,10){
        REP(j,10){
            REP(k,10){
                
                REP(l,n){
                    if(digit[l] == i){
                        FOR(h, l + 1, n){
                            if(digit[h] == j){
                                FOR(u, h + 1, n){
                                    if(digit[u] == k){
                                        cnt++;
                                        break;
                                    }
                                }
                                break;
                            }
                        }
                        break;
                    }
                }
                
            }
        }
    }
    cout << cnt << endl;
    return 0;
}