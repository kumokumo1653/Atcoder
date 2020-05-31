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
    int n;
    cin >> n;
    vector<pair<int,string>> a;
    vector<string> s(n);
    REP(i,n) cin >> s[i];
    sort(ALL(s));
    int cnt = 0;
    string temp = s[0];
    REP(i,n){
        if(s[i] != temp){
            a.push_back(make_pair(cnt,temp)); 
            temp = s[i];
            cnt = 1;
        }else{
            cnt++;
        }
        if(i == n - 1){
            a.push_back(make_pair(cnt,temp)); 
            temp = s[i];
            cnt = 1;
        }
    }
    sort(ALL(a));
    int index = a[a.size() - 1].first;
    REPR(i,a.size()){
        if(index != a[i].first){
            FOR(j,i + 1,a.size()){
                cout << a[j].second << endl;
            }
            return 0;
        }
    }
    REP(i,a.size()){
        cout << a[i].second << endl;
    }
    return 0;
}