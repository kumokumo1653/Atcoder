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
    itn q;
    cin >> q;
    deque<pair<lint,lint>> dq;
    vector<lint> output;
    REP(i,q){
        int a;
        cin >> a;
        if(a == 1){
            itn x, c;
            cin >> x >> c;
            dq.push_back(make_pair(x, c));
        }else{
            lint c;
            cin >> c;
            lint ans = 0;
            while(c > 0){
                lint x = dq.front().first;
                lint t = dq.front().second;
                if(c > t){
                    ans += x * t;
                    dq.pop_front();
                }else{
                    dq.pop_front();
                    dq.push_front(make_pair(x, t - c));
                    ans += x * c;
                }
                c -= t;
            }
            output.push_back(ans);
        }
    }
    REP(i,output.size()){
        println(output[i]);
    }
    return 0;
}