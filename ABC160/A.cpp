#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define ALL(v) v.begin(), v.end()

typedef long long lint;
int main(){
    string s;
    cin >> s;
    if(s[2] == s[3])
        if(s[4] == s[5]){
            cout << "Yes" << endl;
            return 0;
        }
    cout << "No" << endl;
    return 0;
}