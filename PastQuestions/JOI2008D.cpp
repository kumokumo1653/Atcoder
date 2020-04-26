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
    int m,n;
    bool flag = true;
    cin >> m;
    vector<vector<int>> seiza(m,vector<int>(2));
    REP(i,m)
        cin >> seiza[i][0] >> seiza[i][1];
    cin >> n;
    vector<vector<int>> hoshi(n,vector<int>(2));
    
    REP(i,n){
        cin >> hoshi[i][0] >> hoshi[i][1];
    }
    
    sort(ALL(seiza));
    sort(ALL(hoshi));
    REP(i,m){
        REP(j,n){
            REP(k,m){
                vector<int> target{seiza[k][0] - seiza[i][0] + hoshi[j][0], seiza[k][0] - seiza[i][0] + hoshi[j][0]};
                if(binary_search(ALL(hoshi),target))
                    continue;
                else{
                    flag = false;
                    break;
                }
            }
            if(!flag)
                flag = true;
            else{
                cout << hoshi[j][0] - seiza[i][0] << " " << hoshi[j][1] - seiza[i][1] << endl;
                return 0;
            }
        }
    } 
    return 0;
}