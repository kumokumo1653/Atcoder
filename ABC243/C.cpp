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
    itn n;
    cin >> n;
    map<int, pair<int,int>> p;
    vector<pair<int,int>> person;
    string s;
    REP(i,n){
        itn x,y;
        cin >> x >> y;
        person.push_back(make_pair(x,y));
    }
    cin >> s;
    REP(i,n){
        int x = person[i].first;
        int y = person[i].second;
        if(p.find(y) != p.end()){
            if(s[i] == 'R' && p.at(y).first > x){
                p.at(y).first = x;
            }

            if(s[i] == 'L' && p.at(y).second < x){
                p.at(y).second = x;
            }
        }else{
            if(s[i] == 'R'){
                p.insert(make_pair(y,make_pair(x, -1)));
            }else{
                p.insert(make_pair(y,make_pair(1e9 + 7, x)));
            }
        }
    }
    for(auto itr = p.begin(); itr != p.end(); itr++){
        if(itr->second.first < itr->second.second){
            if(itr->second.first > 1e9+ 2 )continue;
            if(itr->second.second == -1) continue;
            Yes();
            return 0;
        }
    }
    No();
    return 0;
}