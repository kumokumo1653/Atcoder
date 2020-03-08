#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define ALL(v) v.begin(), v.end()

typedef long long lint;
int main(){
    int i;
    string s;
    bool flag = false;
    cin >> s;
    REP(i,s.size()){
        if(s[i] == 'h'){
            if(s[i + 1] == 'i'){
                if(s[i + 2] == '\0')
                    flag = true;
            }

        }
    }
    if(s.size() % 2 == 1)
        flag = false;
    if(flag)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}