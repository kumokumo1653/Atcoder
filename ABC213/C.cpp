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
    lint h, w, n;
    cin >> h >> w >> n;
    vector<tuple<lint,lint,int>> a(n);
    vector<tuple<lint,lint,int>> b(n);
    vector<pair<int,int>> ans(n);
    REP(i,n){
        cin >> get<0>(a[i]) >> get<1>(a[i]);
        get<2>(a[i]) = i;

        get<0>(b[i]) = get<1>(a[i]);
        get<1>(b[i]) = get<0>(a[i]);
        get<2>(b[i]) = i;

    }
    sort(ALL(a));
    sort(ALL(b));
    int offh = 1;
    int offw = 1;
    REP(i,n){
        if(i != 0){
            if(get<0>(a[i - 1]) == get<0>(a[i])){
                ans[get<2>(a[i])].first = ans[get<2>(a[i - 1])].first;
            }else{
                ans[get<2>(a[i])].first = offh;
                offh++;
            }
            if(get<0>(b[i - 1]) == get<0>(b[i])){
                ans[get<2>(b[i])].second = ans[get<2>(b[i - 1])].second;
            }else{
                ans[get<2>(b[i])].second = offw;
                offw++;
            }
        }else{
            ans[get<2>(a[i])].first = offh;
            ans[get<2>(b[i])].second = offw;
            offh++;
            offw++;
        }
    }
    REP(i,n){
        print(ans[i].first);println(ans[i].second);
    }
    return 0;
}