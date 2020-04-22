#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define ALL(v) v.begin(), v.end()

typedef long long lint;

bool kaibun(string s){
    int size = s.size();
    bool flag = false;
    if(size == 1)
        return true;
    REP(i,size / 2){
        if(s[i] == s[size - 1 - i])
            flag = true;
        else{
            flag = false;
            break;
        }
    }
    return flag;
}
int main(){
    string s;
    cin >> s;
    if(!kaibun(s)){
        cout << "No" << endl;
        return 0;
    }
    string s1 = s.substr(0,(s.size() - 1) / 2);
    if(!kaibun(s1)){
        cout << "No" << endl;
        return 0;
    }
    string s2 = s.substr(((s.size() + 3)/2) - 1);
    if(!kaibun(s2)){
        cout << "No" << endl;
        return 0;
    }
    cout << "Yes" << endl;


    

}