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
const int MOD = 1e9+7;
int main(){
    int n;
    cin >> n;
    vector<int> ans;
    vector<vector<char>> kei(5,vector<char>(4 * n + 1));
    REP(i,5){
        REP(j,4*n+1){
            cin >> kei[i][j];
        }
    }

    bool flag = true;
    REP(i,4 * n + 1){
        if(i % 4 == 0){
            continue;
        }
        if(i % 4 == 1){
            if(kei[1][i] == '#' && kei[0][i] == '.'){
                ans.push_back(1);
                i += 3;
                continue;
            }
            if(kei[0][i] == '#' && kei[1][i] == '.' && kei[2][i] == '#' &&kei[3][i] == '#' &&kei[4][i] == '#'){
                ans.push_back(2);
                i += 3;
                continue;
            }
            if(kei[0][i] == '#' && kei[1][i] == '.' &&kei[2][i] == '#' && kei[3][i] == '.' &&kei[4][i] == '#' ){
                ans.push_back(3);
                i += 3;
                continue;
            }
            if(kei[0][i] == '#' &&kei[1][i] == '#' &&kei[2][i] == '#' && kei[3][i] == '.' && kei[4][i] == '.'){
                ans.push_back(4);
                i += 3;
                continue;
            }
            if(kei[0][i] == '#' &&kei[1][i] == '.' && kei[2][i] == '.' && kei[3][i] == '.' && kei[4][i] == '.'){
                ans.push_back(7);
                i += 3;
                continue;
            }
            flag = true;
            REP(j,5){
                if(kei[j][i] != '#')
                flag = false;
            }
            if(flag){
                if(kei[1][i + 2] == '.'){
                    ans.push_back(6);
                    i += 3;
                    continue;
                }else{
                    if(kei[2][i + 1] == '#'){
                        ans.push_back(8);
                        i += 3;
                        continue;
                    }else{
                        ans.push_back(0);
                        i += 3;
                        continue;
                    }
                }
            }else{
                if(kei[1][i + 2] == '.'){
                    ans.push_back(5);
                    i += 3;
                    continue;
                }else{
                    ans.push_back(9);
                    i += 3;
                    continue;
                }
            }
        }
    }
    REP(i,n) cout << ans[i];
    cout << endl;
    return 0;
}