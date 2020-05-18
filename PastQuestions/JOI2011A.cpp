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
inline bool CMAX(T m, U x) { if (m < x) { m = x; return true; } return false; }
template<typename T, typename U>
inline bool CMIN(T m, U x) { if (m > x) { m = x; return true; } return false; }

typedef long long lint;
typedef long double ldouble;
const int INF = 1e9;
const lint LINF = 1e18;
int main(){
    int m,n,k;
    cin >> m >> n >> k;
    vector<vector<char>> a(m,vector<char>(n));
    REP(i,m){
        REP(j,n)
            cin >> a[i][j];
    }

    vector<vector<int>> J(m + 1,vector<int>(n + 1,0));
    vector<vector<int>> I(m + 1,vector<int>(n + 1,0));
    vector<vector<int>> O(m + 1,vector<int>(n + 1,0));
    vector<vector<int>> ans(k,vector<int>(3));
    FOR(i,1,m + 1){
        FOR(j,1,n + 1){
            if(a[i - 1][j - 1] == 'J'){
                J[i][j] = J[i - 1][j] + J[i][j - 1] - J[i - 1][j - 1] + 1;
                O[i][j] = O[i - 1][j] + O[i][j - 1] - O[i - 1][j - 1];
                I[i][j] = I[i - 1][j] + I[i][j - 1] - I[i - 1][j - 1];
            }
            else if(a[i - 1][j - 1] == 'I'){
                I[i][j] = I[i - 1][j] + I[i][j - 1] - I[i - 1][j - 1] + 1;
                O[i][j] = O[i - 1][j] + O[i][j - 1] - O[i - 1][j - 1];
                J[i][j] = J[i - 1][j] + J[i][j - 1] - J[i - 1][j - 1];
            }
            else if(a[i - 1][j - 1] == 'O'){
                O[i][j] = O[i - 1][j] + O[i][j - 1] - O[i - 1][j - 1] + 1;
                I[i][j] = I[i - 1][j] + I[i][j - 1] - I[i - 1][j - 1];
                J[i][j] = J[i - 1][j] + J[i][j - 1] - J[i - 1][j - 1];
            }
        }
    }
    REP(i,k){
        int x1,x2,y1,y2;
        cin >> y1 >> x1 >> y2 >> x2;
        x1--;y1--;
        ans[i][0] = J[y2][x2] - J[y1][x2] - J[y2][x1] + J[y1][x1];
        ans[i][1] = O[y2][x2] - O[y1][x2] - O[y2][x1] + O[y1][x1];
        ans[i][2] = I[y2][x2] - I[y1][x2] - I[y2][x1] + I[y1][x1];
    }
    REP(i,k)
        cout << ans[i][0] << " " << ans[i][1] << " " << ans[i][2] << endl;
    return 0;
}