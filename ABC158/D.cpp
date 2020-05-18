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
template<typename T, typename U>
inline bool CMAX(T &m, U x) { if (m < x) { m = x; return true; } return false; }
template<typename T, typename U>
inline bool CMIN(T &m, U x) { if (m > x) { m = x; return true; } return false; }

typedef long long lint;
typedef long double ldouble;
const int INF = 1e9;
const lint LINF = 1e18;
int main(){
    string s;
    string start = "";
    string end = "";
    int q;
    bool endofend = true;
    cin >> s >> q;
    REP(i,q){
        int t;
        int f;
        char c;
        cin >> t;
        if(t == 1){
            endofend ^= true;
        }else if(t == 2){
            cin >> f >> c;
            if(f == 1){
                if(endofend){
                    s.insert(s.begin(),c);
                }else{
                    s.push_back(c);
                }
            }else if(f == 2){
                if(endofend){
                    s.push_back(c);
                }else{
                    s.insert(s.begin(),c);
                }
            }
        }
    }
    if(!endofend)
        reverse(ALL(s));
    cout << s << endl;
    return 0;
}