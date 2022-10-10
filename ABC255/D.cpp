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
    lint n ,q;
    cin >> n >>q;
    vector<lint> a(n);
    vector<pair<lint,int>> query(q);
    vector<lint> ans(q);
    lint sum = 0;
    REP(i,n){
        cin >> a[i];
        sum += a[i];
    }
    REP(i,q){
        cin >> query[i].first;
        query[i].second = i;
    }
    sort(ALL(a));
    sort(ALL(query));
    bool f = false;
    lint v = 0;
    lint pre = 0;
    REP(i,q){
        if(query[i].first < a[0]){
            ans[query[i].second] = sum - n * query[i].first;
        } else if(query[i].first > a[n - 1]){
            ans[query[i].second] = a[n - 1] * n - sum;
        }else{
            if(!f){
                lint temp = 0;
                pre = lower_bound(ALL(a),query[i].first) - a.begin();
                REP(j,n){
                    if(j <= pre){
                        v += llabs(a[j] - query[i].first);
                    }
                    temp += llabs(a[j] - query[i].first);
                }
                ans[query[i].second] = temp;
                f = true;
            }else{
                lint c =lower_bound(ALL(a),query[i].first) - a.begin();
                lint temp = v;
                lint tempv = v;
                lint add = 0;
                REP(j, pre - c + 1){
                    temp += llabs(a[pre + j + 1] - query[i].first);
                    add += llabs(a[pre + j + 1] - query[i - 1].first);
                }
                v = temp;
                pre = c;
                temp += ans[query[i - 1].second] - tempv - add - (query[i].first - query[i - 1].first) * (n - c + 1);
                ans[query[i].second] = temp;
            } 
        }

    }

    REP(i,q){
        println(ans[i]);
    }
    return 0;
}