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
    multiset<pair<lint,int>> b;
    vector<lint> out;
    vector<pair<lint,int>> add;
    REP(i,q){
        int a;
        cin >> a;
        if(a == 1){
            lint x;
            cin >> x;
            b.insert(make_pair(x, i));
        }
        if(a == 2){
            lint x;
            cin >> x;
            REP(j, add.size()){
                add[j].first += x;
            }
            add.push_back(make_pair(x, i));

        }
        if(a == 3){

            for(auto itr = b.begin(); itr != b.end(); ++itr) {
                lint temp = (*itr).first;
                int index = (*itr).second;
                b.erase(itr);
                REPR(j,add.size()){
                    if(add[j].second < index) {
                        b.insert(make_pair(temp + add[j].first, index));
                        break;
                    }
                }
            }
            out.push_back((*(b.begin())).first);
            b.erase(b.begin());
        }
    }
    REP(i,out.size()){
        println(out[i]);
    }
    return 0;
}