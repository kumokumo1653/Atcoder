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
    cin >> s; 
    int n = s.size();
    int len = 0;
    REP(i,n){
        FOR(j,1,n - i + 1){
            string a = s.substr(i,j);
            bool flag = true;
            int cnt = 0;
            REP(k,a.size()){
                if(a[k] == 'A'|| a[k] == 'C'|| a[k] == 'G'|| a[k] == 'T'){
                    cnt++;
                }else
                    flag = false;
            }
            if(flag)
                CMAX(len,cnt); 
            cnt = 0;
            flag = true;
        }
    }
    cout << len << endl;
    return 0;
}