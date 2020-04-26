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
    itn len = 0;
    vector<vector<int>> kankei(m,vector<int>(2));
    vector<int> digit(n,0);
    vector<int> val(n,1);
    REP(i,m)
        cin >> kankei[i][0] >> kankei[i][1];
    
    sort(ALL(kankei));
    while(1){
        bool flag = true;
        int cnt = 0;
        REP(i,n){
            if(digit[i] == 1)
                cnt++;
        }
        REP(i,n){
            if(digit[i] == 1){
                FOR(j,i + 1,n){
                    if(digit[j] == 1){
                        vector<int> target{i + 1, j + 1};
                        if(!binary_search(ALL(kankei),target)){
                            flag = false;
                            break;
                        }
                    }
                }
                if(!flag)
                    break;
            }
        }
        if(flag)
            CMAX(len, cnt);
        cnt = 0;
        if(digit == val)
            break;
        digit[0] += 1;
        REP(i,n){
            if(digit[i] == 2){
                digit[i] = 0;
                digit[i + 1] += 1;
            }
            if(digit[i] == 1)
                cnt++;
        }
    }
    cout << len << endl;
    return 0;
}