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
    int a, b ,c, n;
    cin >> a >> b >> c;
    n = a + b + c;
    int cnt = 0;
    vector<int> tumiki(n);
    vector<vector<int>> yama(3);
    yama[0] = vector<int>(a);
    yama[1] = vector<int>(b);
    yama[2] = vector<int>(c);
    iota(ALL(tumiki),1);
    bool flag = false;
    do{
        REP(i,tumiki.size()){
            if(i < a)
                yama[0][i] = tumiki[i];
            else if(i < a + b)
                yama[1][i - a] = tumiki[i];
            else if(i < a + b + c)
                yama[2][i - a - b] = tumiki[i];
        }
        REP(i,3){
            REP(j,yama[i].size()){
                if(i > 0){
                    if(yama[i][j] <= yama[i - 1][j])
                        flag = true;
                }
                if(j > 0){
                    if(yama[i][j] <= yama[i][j - 1])
                        flag = true;
                }
                
            }
        }
        if(!flag){
            cnt++;
        }else
        {
            flag = false;
        }
        
    }while(next_permutation(ALL(tumiki)));

    cout << cnt << endl;
    return 0;
}