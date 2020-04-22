#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define ALL(v) v.begin(), v.end()

typedef long long lint;
int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    REP(i, n){
        cin >> a[i];
    }
    lint num = 0;
    vector<int>del(n);
    REP(j,n){
            del[a[j]]++;
    }
    REP(i,n){
        int cnt = del[a[i]] - 1;
        //cout << cnt << endl;
        num = cnt * ((cnt - 1)) / 2;
        cout << num << endl;
        num = 0;
    }
}