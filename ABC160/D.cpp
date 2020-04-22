#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define ALL(v) v.begin(), v.end()

typedef long long lint;
int main(){
    int x,y,n;
    cin >> n;
    cin >> x;
    cin >> y;
    vector<int> des((n * (n - 1)) / 2);
    int a,b,c;
    vector<int> cnt(n - 1);
    FOR(i,1,n + 1){
        FOR(j,i + 1,n + 1){
                a = abs(x - i) + 1 + abs(y - j);
                b= abs(y - i) + 1 + abs(x - j);
                c = j - i;
            //cout <<  << endl;
            cnt[min({a,b,c}) - 1]++;
        }
    }
    
    REP(i,n - 1){
        cout << cnt[i] << endl;
    }
}