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
    int cnt = 0;
    vector<vector<int>> d(m);
    vector<int> val(m);
    vector<int> digit(n,0);
    vector<int> hantei(n,1);
    REP(i,m){
        int cnt;
        cin >> cnt;
        d[i] = vector<int>(cnt);
        REP(j,cnt)
            cin >> d[i][j]; 
    } 
    REP(i,m)
        cin >> val[i];

    while(1){
        bool flag = true;
        REP(i,m){
            int num = 0;
            REP(j,d[i].size()){
                if(digit[d[i][j] - 1] == 1)
                    num++;
            }
            if(num % 2 != val[i])
                flag = false;
        }
        if(flag)
            cnt++;

        if(hantei == digit)
            break;
        digit[0] += 1;
        REP(i,n){
            if(digit[i] == 2){
                digit[i + 1] += 1;
                digit[i] = 0;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}