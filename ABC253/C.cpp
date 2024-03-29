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
    set<int> set;
    int q;
    cin >> q;
    vector<int> out;
    map<int,int> map;
    REP(i,q){
        int a;
        cin >> a;
        if(a == 1){
            int x;
            cin >> x;
            if(map[x] == 0){
                set.insert(x);
            }
            map[x]++;
        }
        if(a == 2){
            int x;
            int c;
            cin >> x >> c;
            int cnt = map[x] > c ? c : map[x];
            map[x] -= cnt; 
            if(map[x] == 0){
                set.erase(x);
            }
            
        }
        if(a == 3){
            int max = *(--set.end());
            int min = *(set.begin());
            out.push_back(max - min);
        }
    }
    REP(i, out.size()){
        println(out[i]);
    }
    return 0;
}