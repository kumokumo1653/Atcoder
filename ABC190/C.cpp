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
    int n,m,k;
    cin >> n >> m;
    int max = 0;
    vector <pair<int, int>> judge(m);
    REP(i,m){
        int a, b;
        cin >> a >> b;
        a--;b--;
        judge[i].first = a;
        judge[i].second = b;

    }
    cin >> k;
    vector <pair<int,int>> sara(k);
    vector <int> digit(k,0);
    vector <int> val(k,1);
    
    REP(i,k){
        int a, b;
        cin >> a >> b;
        a--;b--;
        sara[i].first = a;
        sara[i].second = b;
    }
    while(digit != val){
        vector <int> dish(n,0);
        int time = 0;
        REP(i,k){
            if(digit[i] == 0){
                dish[sara[i].first] ++;
            }else{
                dish[sara[i].second] ++;
            }
        }
        REP(i,m){
            if(dish[judge[i].first] > 0 && dish[judge[i].second] > 0){
                time++;
            }
        }
        CMAX(max,time);
        digit[0] += 1;
        REP(i,k){
            if(digit[i] == 2){
                digit[i + 1] += 1;
                digit[i] = 0;
            }
        }
    }
    println(max);
    return 0;
}