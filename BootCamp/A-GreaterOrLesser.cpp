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
    lint sum = 0;
    bool f = true;
    lint time = 0;
    lint start = 0;
    char c = 'a';
    REP(i,s.size()){
        if(s[i] == c){
            time++;
        }else{
            if(c == '<'){
                time++;
                sum += (2 * start + time - 1) * time / 2;
                c = s[i];
                start = start + time - 1; 
                time = 1;
            }else{
                if(time > start)
                    sum += time - start;
                sum += time * (time - 1) / 2;
                c = s[i];
                time = 1;
                start = 0; 
            }
        }
    }
    if(c == '<'){
        time++;
        sum += (2 * start + time - 1) * time / 2;
    }else{
        if(time > start)
            sum += time - start;
        sum += time * (time - 1) / 2;
    }
    println(sum);
    return 0;
}