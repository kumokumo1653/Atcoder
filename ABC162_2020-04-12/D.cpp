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
    string s;
    int n;
    int sum = 0;
    lint all = 0;
    cin >> n;
    cin >> s;
    for(int i = n; i >= 3; i--){
        if(i == 3){
            all += 1;
        }else if(i == 4){
            all += 5;
        }else if(i >= 5){
            all += 3 + 3 * (n - 4);
        }
    }
    cout << all << endl;
    FOR(i, 1, n / 2){
        REP(j,n){
            if(j + i * 2 < n){
                if(s[j] == s[j + i] || s[j] == s[j + i * 2] || s[j + i] == s[j + i * 2])
                    sum++;
            }
        }
    }
    cout << sum << endl;
    cout << all - sum << endl;
    return 0;
}