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
    int begin,end;
    bool flag = false;
    vector<string> a;
    REP(i,s.size()){
        if(isupper(s[i]) && !flag){
            begin = i;
            flag = true;
        }else if(isupper(s[i]) && flag){
            end = i;
            flag = false;
            string b = s.substr(begin, end - begin + 1);
            transform(ALL(b),b.begin(),::tolower);
            a.push_back(b);
        }
    }
    sort(ALL(a));
    REP(i,a.size()){
        a[i][0] = ::toupper(a[i][0]);
        a[i][a[i].size() - 1] = ::toupper(a[i][a[i].size() - 1]);
        cout << a[i];
    }
    puts("");
    return 0;
}