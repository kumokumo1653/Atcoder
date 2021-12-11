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
    itn n, m;
    cin >> n >> m;
    vector<vector<char>> A(2 * n, vector<char>(m));
    set<pair<int,int>> p;
    REP(i,2 * n){
        p.insert(make_pair(0, i));
        REP(j, m){
            cin >> A[i][j];
        }
    }
    REP(i,m){
        set<pair<int,int>> temp;
        for(auto itr = p.begin(); itr != p.end(); itr++) {
            int a, b;
            int e,f;
            char c,d;
            a = (*itr).second;
            e = (*itr).first;
            c = A[a][i];
            itr++;
            b = (*itr).second;
            f = (*itr).first;
            d = A[b][i];
            if(c == d){
                temp.insert(make_pair(e + 1,a));
                temp.insert(make_pair(f + 1,b));
            }else{
                if(c == 'G'){
                    if(d == 'P'){
                        temp.insert(make_pair(e + 1,a));
                        temp.insert(make_pair(f,b));
                    }else{
                        temp.insert(make_pair(e,a));
                        temp.insert(make_pair(f + 1,b));
                    }
                }
                if(c == 'C'){
                    if(d == 'P'){
                        temp.insert(make_pair(e,a));
                        temp.insert(make_pair(f + 1,b));
                    }else{
                        temp.insert(make_pair(e + 1,a));
                        temp.insert(make_pair(f,b));
                    }
                }
                if(c == 'P'){
                    if(d == 'G'){

                        temp.insert(make_pair(e,a));
                        temp.insert(make_pair(f + 1,b));
                    }else{
                        temp.insert(make_pair(e + 1,a));
                        temp.insert(make_pair(f,b));
                    }
                }
            }
            
        }

        p.swap(temp);
    }
    for(auto itr = p.begin(); itr != p.end(); itr++) {
        itn a = (*itr).second + 1;
        println(a);
    }
    return 0;
}