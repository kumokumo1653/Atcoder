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
    REP(i,s.size()){
        int num = s[i] - '0';
        if(num < 0 || num > 9){
            cout << "error" << endl;
            return 0;
        }
    }
    cout << stoi(s) * 2 << endl;
}