
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
    int n;
    cin >> n;
    int index = 0;
    vector<vector<string>> a(n,vector<string>(n));
    vector<string> st(n * n * (n - 1));
    REP(i,n){
        REP(j,n){
            char c;
            cin >> c;
            a[i][j] = c;
        }
    }
    REP(i,n){
        REP(j,n){
            FOR(k,j + 1,n){
                if(k == j + 1){
                    st[index] = a[i][k - 1] + a[i][k];
                }else{
                    st[index] = st[index - 1] + a[i][k]; 
                }
                index++;
            }
        }
    }
    REP(i,n){
        REP(j,n){
            FOR(k,j + 1,n){
                if(k == j + 1){
                    st[index] = a[k - 1][i] + a[k][i];
                }else{
                    st[index] = st[index - 1] + a[k][i]; 
                }
                index++;
            }
        }
    }
    REP(i,st.size()){
        println(st[i]);
        FOR(j,i + 1,st.size()){
            if(st[i] == st[j]){
                println("すいかば溶ける");
                return 0;
            }
        }
    }
    println("すいかば溶けない");
    return 0;
}