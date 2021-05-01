#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n - 1; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define FORR(i,m,n) for(int i = m - 1; i >= n; i--)
#define ALL(v) v.begin(), v.end()
#define itn int
#define Yes() cout << "Yes" << endl
#define No() cout << "No" << endl
#define YES() cout << "YES" << endl
#define NO() cout << "NO" << endl
#define println(x) cout << x << endl
#define print(x) cout << x << " "
template<typename T, typename U>
inline bool CMAX(T &m, U x) { if (m < x) { m = x; return true; } return false; }
template<typename T, typename U>
inline bool CMIN(T &m, U x) { if (m > x) { m = x; return true; } return false; }

typedef long long lint;
typedef long double ldouble;
const int INF = 1e9;
const lint LINF = 1e18;
const int MOD = 1e9+7;
int main(){
    string s;
    cin >> s;
    string t = "";
    bool turn = false;
    REP(i,s.size()){
        if(s[i] == 'R')
            turn = !turn;
        else{
            string temp(s, i, 1);
            if(turn){
                t.insert(0, temp);
            }else{
                t.push_back(s[i]);
            }
        }
    }
    if(turn) reverse(ALL(t));
    if(t.size() == 0){
        return 0;
    }
    list<char> list;
    REP(i, t.size()){
        list.push_back(t[i]);
    }
    auto a = list.begin();
    auto b = next(list.begin(), 1);
    while(1){
        if(*a == *b){
            a = list.erase(a);
            --a;
            b = list.erase(b);

        }else{
            ++a;
            ++b;
        }
        if(b == list.end()){
            break;
        }
    }
    auto itr = list.begin();
    REP(i, list.size()){
        cout << *itr++;
    }
    cout << endl;
    return 0;
}