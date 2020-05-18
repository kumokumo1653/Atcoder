#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n - 1; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define FORR(i,m,n) for(int i = m - 1; i >= n; i--)
#define ALL(v) v.begin(), v.end()
#define CMAX(m, x)  m = max(m,x)
#define CMIN(m, x)  m = min(m,x)
#define itn int
#define Yes() cout << "Yes" << endl
#define No() cout << "No" << endl
#define YES() cout << "YES" << endl
#define NO() cout << "NO" << endl
typedef long long lint;
typedef long double ldouble;
const int INF = 1e9;
const lint LINF = 1e18;
int main(){
    string s,t;
    cin >> s >> t;
    bool flag = true;
    REP(i,s.size()){
        if(s[i] != t[i])
            flag = false;
    }
    if(s.size() + 1 != t.size())
        flag = false;
    if(flag)
        Yes();
    else
    {
        No();
    }
    
    return 0;
}