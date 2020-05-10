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
    cin >> n;
    double sum = 0;
    vector<vector<int>> data(n,vector<int>(2));
    REP(i,n)
        cin >> data[i][0] >> data[i][1];
    vector<int> v(n);
    int cnt = 0;
    iota(ALL(v),1);
    do{
        REP(i,n - 1){
            sum += sqrt(pow(data[v[i] - 1][0] - data[v[i + 1] - 1][0],2) + pow(data[v[i] - 1][1] - data[v[i + 1] - 1][1],2));
        }
        cnt++;
    }while(next_permutation(ALL(v)));
    printf("%.7f\n",sum/cnt);
    return 0;
}