#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define repr(i, n) for(int i = n; i >= 0; i--)
#define for(i, m, n) for(int i = m; i < n; i++)
#define all(v) v.begin(), v.end()

typedef long long lint;
int main(){
    lint h,w;
    cin >> h;
    cin >> w;
    if((h == 1) || (w == 1))
        cout << 1 << endl;
    else
        cout << lint(((h * w) + 1) / 2) << endl;
}