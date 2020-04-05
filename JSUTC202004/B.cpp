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
    vector<int> red;
    vector<int> bule;
    vector<char> c;
    REP(i,n){
        char c;
        int num;
        cin >> num >> c;
        if(c == 'R')
            red.push_back(num);
        else if(c == 'B')
            bule.push_back(num);
    }
    sort(ALL(red));
    sort(ALL(bule));
    REP(i,red.size())
        cout << red[i] << endl;
    REP(i,bule.size())
        cout << bule[i] << endl;
    return 0;
}