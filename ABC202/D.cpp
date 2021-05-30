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
    int a, b;
    lint k;
    cin >> a >> b >> k;
    lint sum = 1;
    lint temp = 1;
    string s = "";
    int min = a > b ? b : a;
    REP(i,min){
        sum *= (lint)a + (lint)b - (lint)i;
        temp *= (lint)(min - i);
    }
    sum /= temp;
    while(a != 0 && b != 0){
        print(a);
        print(b);
        print(sum);
        println(k);
        if(sum * (lint)a /((lint)a + (lint)b) >= k){
            s += "a";
            a--;
        }else{
            k -= sum * (lint)a /((lint)a + (lint)b);
            
            s += "b";
            b--;
        }
        int min = a > b ? b : a;
        sum = 1;
        temp = 1;
        REP(i,min){
            sum *= (lint)a + (lint)b - (lint)i;
            temp *= (lint)(min - i);
        }
        sum /= temp;
    }
    println(a);
    println(b);
    if(a != 0){
        REP(i,a){
            s += "a";
        }
    }
    if(b != 0){
        REP(i,b){
            s += "b";
        }
    }
    println(s);
    return 0;
}