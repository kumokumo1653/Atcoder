#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n - 1; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define FORR(i,m,n) for(int i = m - 1; i >= n; i--)
#define ALL(v) v.begin(), v.end()
#define itn int
#define Yes() cout << "Yes" << endl
#define No() cout << "No" << endl
#define YES() cout << "YES" << endl
#define NO() cout << "NO" << endl
#define println(x) cout << x << endl
#define print(x) cout << x << " "
template<typename T, typename U>
inline bool CMAX(T &m, U x) { if (m < x) { m = x; return true; } return false; }
template<typename T, typename U>
inline bool CMIN(T &m, U x) { if (m > x) { m = x; return true; } return false; }

typedef long long lint;
typedef long double ldouble;
const int INF = 1e9;
const lint LINF = 1e18;
const int MOD = 1e9+7;
int main(){
    lint n;
    cin >> n;
    int digit = 0;
    lint temp = n;
    lint ans = 0;
    while(1){
        temp /= 10;
        digit++;
        if(temp == 0) break;
    }
    for(int i = 2; i < digit; i += 2){
        ans += (lint)pow(10,i / 2) - (lint)pow(10,i / 2 - 1);
    }
    if(digit % 2 == 0){
        lint upper = n / (lint)pow(10,digit / 2);
        lint lower = n % (lint)pow(10, digit / 2);
        if(upper <= lower){
            ans += ((upper < lower ? upper : lower) - (lint)pow(10,digit / 2 - 1)) + (lint)1;
        }else{
            ans += ((upper > lower ? upper : lower) - (lint)pow(10,digit / 2 - 1));
        }
    }
    println(ans);
    return 0;
}