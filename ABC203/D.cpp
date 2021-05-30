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
    int k,n;
    cin >> n >> k;
    vector<vector<lint>> a(n, vector<lint>(n));
    REP(i,n){
        REP(j, n){
            cin >> a[i][j];
        }
    }
    multiset<lint> st;
    multiset<lint> temp;

    lint min = LINF;
    
    REP(i,k){
        REP(j,k){
            st.insert(a[i][j]);
            temp.insert(a[i][j]);
        }
    }
    int index = (k * k) / 2 + 1;
    auto itr = st.begin();
    REP(i,index){
        itr++;
    }
    CMIN(min, *itr);
    REP(i,n - k + 1){
        REP(j,n - k + 1){
            if(i == 0 && j == 0)continue;
            if(j == 0){
                REP(l, k){
                    st.insert(a[i + k][j + l]);
                    if(k * k % 2 == 0){
                        if(*itr > a[i + l][j + k]){
                            itr--;
                        }
                    }else{
                        if(*itr < a[i + l][j + k]){
                            itr++;
                        }
                        
                    }
                    int b = st.erase(a[i][j + k]);
                    REP(q, b - 1) st.insert(a[i + l][j]);
                    if(k * k % 2 == 0){
                        if(*itr < a[i + l][j]){
                            itr--;
                        }
                    }else{
                        if(*itr > a[i + l][j]){
                            itr++;
                        }
                        
                    }
                }
                auto r = st.begin();
                REP(i,st.size()){
                    println(*(r++));
                }
                println(*itr);
                CMIN(min, *itr);
                temp = st;
            }else{
                REP(l, k){
                    st.insert(a[i + l][j + k]);
                    if(k * k % 2 == 0){
                        if(*itr > a[i + l][j + k]){
                            itr--;
                        }
                    }else{
                        if(*itr < a[i + l][j + k]){
                            itr++;
                        }
                        
                    }

                    int b = st.erase(a[i + l][j]);
                    REP(q, b - 1) st.insert(a[i + l][j]);
                    if(k * k % 2 == 0){
                        if(*itr < a[i + l][j]){
                            itr--;
                        }
                    }else{
                        if(*itr > a[i + l][j]){
                            itr++;
                        }
                        
                    }
                }
                auto r = st.begin();
                REP(i,st.size()){
                    println(*(r++));
                }
                println(*itr);
                CMIN(min, *itr);
                if(j == n - 1){
                    st = temp;
                }
            }
        }
    }
    println(min);
    return 0;
}