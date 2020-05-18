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
#define Yes() cout << "Yes" << endl
#define No() cout << "No" << endl
#define YES() cout << "YES" << endl
#define NO() cout << "NO" << endl
typedef long long lint;
typedef long double ldouble;
const int INF = 1e9;
const lint LINF = 1e18;
int main(){
    int n,m,x;
    cin >> n >> m >> x;
    vector<int> digit(n,0);
    vector<int> val(n,1);
    vector<int> p(n);
    vector<vector<int>> a(n,vector<int>(m));
    int mn = INF;
    REP(i,n){
        cin >> p[i];
        REP(j,m)
            cin >> a[i][j];
    }
    while(1){
        bool flag = true;
        int pp = 0;
        vector<int> skill(m,0);
        REP(i,n){
            if(digit[i] == 1){
                REP(j,a[i].size()){
                    skill[j] += a[i][j];
                }
                pp += p[i];

            }
        }
        REP(i,m){
            if(skill[i] < x){
                flag = false;
            }
        }
        if(flag){
            CMIN(mn,pp);
        }

        if(digit == val) break;
        digit[0] += 1;
        REP(i,n){
            if(digit[i] == 2){
                digit[i] = 0;
                digit[i + 1] += 1;
            }
        }
    }
    if(mn == INF)
        cout << -1 << endl;
    else
        cout << mn << endl;
    return 0;
}