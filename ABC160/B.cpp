#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define ALL(v) v.begin(), v.end()

typedef long long lint;
int main(){
    int x;
    cin >> x;
    int sum = 0;
    sum += (x / 500) * 1000;
    x = x - ((x / 500) * 500);
    sum += (x / 5) * 5;
    cout << sum << endl;
}