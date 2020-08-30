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
    int h,w,m;
    cin >> h >> w >> m;
    vector<int> hh(h);
    vector<int> ww(w);
    vector<pair<int,int>> mm(m);
    
    REP(i,m){
        int a,b;
        cin >> a >> b;
        a--;b--;
        mm[i] = make_pair(a, b);
        hh[a]++;
        ww[b]++;
    }
    int hin = 0;
    int win = 0;
    int hmx = 0;
    vector<int> hhmax;
    REP(i,h){
        if(CMAX(hmx,hh[i])){
            hhmax.clear();
            hhmax.push_back(i);
        }else if(hh[i] == hmx) hhmax.push_back(i);
    }
    int wmx = 0;
    vector<int> wwmax;
    REP(i,w){
        if(CMAX(wmx,ww[i])){
            wwmax.clear();
            wwmax.push_back(i);
        }else if(ww[i] == wmx) wwmax.push_back(i);
    }
    vector<bool> f(hhmax.size() * wwmax.size(),false);
    vector<bool> del(f.size(),true);
    bool flag = false;
    int index = 0;
    REP(j,hhmax.size()){
        REP(k, wwmax.size()){
            REP(i,m){
                if(hhmax[j] == mm[i].first && wwmax[k] == mm[i].second)
                    f[index] = true;
            }
            index++;
        }
    }
    if( f == del) println(hmx + wmx - 1);
    else println(hmx + wmx);
    return 0;
}