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
    int sum = 0;
    FOR(i,1,n + 1){
        FOR(j, 1, n + 1){
            FOR(k, 1, n + 1){
                int g = std::gcd<int,int>(i, j);
                sum += std::gcd<int,int>(g,k);
            }
        }
    }
    cout << sum << endl;
    return 0;
}