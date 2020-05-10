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
    string s1, s2;
    cin >> s1 >> s2;
    int ans;
    int a ,b;
    vector<string> s{"B9","B8","B7","B6","B5","B4","B3","B2","B1","1F","2F","3F","4F","5F","6F","7F","8F","9F"};
    REP(i,s.size()){
        if(s1 == s[i]){
            a = i;
        }
        if(s2 == s[i]){
            b = i;
        }
    }
    cout << abs(a - b) << endl;
    return 0;
}