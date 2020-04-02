#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define ALL(v) v.begin(), v.end()
#define cmax(m, x) if (x > m) m = x;
#define cmin(m, x) if (x < m) m = x;
#define itn int
typedef long long lint;
const int INF = 1e9;
const lint LINF = 1e18;
int main(){
    int n;
    cin >> n;
    lint sum = LINF;
    vector<vector<int>> a(n - 1);
    vector<int> group(n);
    REP(i,n - 1){
        REP(j,n - 1 - i){
            int c;
            cin >> c;
            a[i].push_back(c);
        }
    }   
    REP(i,n * n * n - 1){
        int num = i;
        int add = 0;
        vector<int> zero;
        vector<int> one;
        vector<int> two;
        REP(j,n){
            group[j] = num % 3;
            num /= 3;
            if(group[j] == 0)
                zero.push_back(j);
            else if(group[j] == 1)
                one.push_back(j);
            else
                two.push_back(j);
        }
        REP(t,zero.size()){
            REP(u,zero.size() - t){
                
            }
        }
        
    }
    return 0;
}
