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
typedef long double ldouble;
const int INF = 1e9;
const lint LINF = 1e18;


int main(){
    string s;
    cin >> s;
    vector<char> alfa{'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t'};
    set<string> ma;
    char back2 = ' ';
    char back = ' ';
    char scan = ' ';
    REP(i,s.size()){
        if(i >= 2){
            scan = s[i];
            back = s[i -1];
            back2 = s[i-2];
            ma.insert({scan});

            ma.insert({back,scan});
            ma.insert({'.',scan});
            ma.insert({back,'.'});

            ma.insert({back2,back,scan});
            ma.insert({'.',back,scan});
            ma.insert({back2,'.',scan});
            ma.insert({back2,back,'.'});
            ma.insert({'.','.',scan});
            ma.insert({back2,'.','.'});
            ma.insert({'.',back,'.'});
            ma.insert({"..."});

        }else if(i == 1){
            scan = s[i];
            back = s[i - 1];
            ma.insert({scan});
            ma.insert({back,scan});
            ma.insert({'.',scan});
            ma.insert({back,'.'});
            ma.insert("..");
        }else{
            scan = s[i];
            ma.insert({scan});
            ma.insert(".");
        }
    }
    cout << ma.size() << endl;
    return 0;
}