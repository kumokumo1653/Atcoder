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
    vector<vector<int>> bingo(3,vector<int>(3));
    vector<vector<bool>> atari(3,vector<bool>(3,false));
    int n;

    REP(i,3){
        REP(j,3)
            cin >> bingo[i][j];
    }
    cin >> n;
    REP(i,n){
        int val;
        cin >> val;
        
        REP(j,3){
            REP(k,3){
                if(bingo[j][k] == val){
                    atari[j][k] = true;
                }
            }
        }
    }
    int yokocnt = 0;
    int tatecnt = 0;
    int naname = 0;
    int renaname = 0;
    REP(i,3){
        REP(j,3){
            if(atari[i][j]){
                yokocnt++;
            }
            if(yokocnt == 3){
                Yes();
                return 0;
            }
            if(atari[j][i]){
                tatecnt++;
            }
            if(tatecnt == 3){
                Yes();
                return 0;
            }
            if(i == j && atari[i][j]){
                naname++;
            }
            if(naname == 3){
                Yes();
                return 0;
            }
            if(i == 0 && j == 2 && atari[i][j]){
                renaname++;
            }
            if(i == 1 && j == 1 && atari[i][j]){
                renaname++;
            }
            if(i == 2 && j == 0 && atari[i][j]){
                renaname++;
            }
            if(renaname == 3){
                Yes();
                return 0;
            }
        }
            yokocnt = 0;
            tatecnt = 0;
    }
    No();
    return 0;
}