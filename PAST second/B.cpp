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
typedef long double ldouble;
const int INF = 1e9;
const lint LINF = 1e18;
int main(){
    string s;
    cin >> s;
    int a=0;
    int b = 0;
    int c = 0;
    REP(i,s.size()){
        if(s[i] == 'a')
            a++;
        if(s[i] == 'b')
            b++;
        if(s[i] == 'c')
            c++;
    } 
    int m = max({a,b,c});
    if(m == a)
        cout << 'a' << endl;
    if(m == b)
        cout << 'b' << endl;
    if(m == c)
        cout << 'c' << endl;
    return 0;
}