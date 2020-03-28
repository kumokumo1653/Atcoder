#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define ALL(v) v.begin(), v.end()

typedef long long lint;
int main(){
    int k;
    int n;
    cin >> k;
    cin >> n;
    vector<int> a(n);
    REP(i,n)
        cin >> a[i];
    vector<int> des(n);
    REP(i,n){
        if(i == n - 1){
            des[i] = a[0] + (k - a[i]);
        }else
            des[i] = a[i + 1] - a[i];
    }
    int max = 0;
    REP(i,n){
        if(des[i] > max)
            max = des[i];
    }

    cout << k - max << endl;
    
}