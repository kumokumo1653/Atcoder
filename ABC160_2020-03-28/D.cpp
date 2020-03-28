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
    int a = 0;
    vector<int> cnt(n - 1);
    FOR(i,1,n + 1){
        FOR(j,i + 1,n + 1){
            if(x < y && (i <= x && j >= y)){
                a = j - i - (y - x - 1);
            }else if(x > y && (i <= y && j >= x)){
                    a = j - i - (x - y - 1);
            }else
                a = j - i;
            //cout << a << endl;
            cnt[--a]++;
        }
    }
    
    REP(i,n - 1){
        cout << cnt[i] << endl;
    }
}