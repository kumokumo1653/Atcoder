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
    int r,c;
    cin >> r >> c;
    int sum = 0;
    int len = INF;
    vector<vector<int>>senbei(r,vector<int>(c));
    vector<vector<int>> csen(r,vector<int>(c));
    REP(i,r){
        REP(j,c)
            cin >> senbei[i][j];
    } 
    copy(ALL(senbei),csen.begin());

    REP(sen,pow(2,r)){
        REP(i,r){
            if((sen >> i) & 1){
                REP(j,c)
                    csen[i][j] ^= 1;
            }
        }

        REP(i,c){
            int cnt = 0;

            REP(j,r){
                if(csen[j][i])
                    cnt++;
            }
            if(r / 2 < cnt)
                cnt = r - cnt;
            
            sum += cnt;
        }

        CMIN(len,sum);
        sum = 0;
        copy(ALL(senbei),csen.begin());
    }
    cout << r * c - len << endl;
    return 0;
}