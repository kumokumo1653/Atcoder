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
    int n,q;
    cin >> n >> q;
    vector<int>a(n);
    map<int,int> table;
    vector<int> sum(n + 1, 0);
    vector<pair<int,int>> query(q);
    vector<int> ans(q);
    REP(i,n){
        int a;
        cin >> a;
        table[a]++;        
    }
    itn i = 1;
    for(auto itr = table.begin(); itr != table.end(); ++itr) {
        sum[i] = sum[i - 1] + itr->second;
        i++;
    }
    REP(i,q){
        cin >> query[i].first;
        query[i].second = i;
    }
    sort(ALL(query));
    auto itr = table.begin();
    int j = 0;
    REP(i,q){
        int que = query[i].first;
        while(itr->first < que && itr != table.end()){
            j++;
            itr++;
        }
        if(itr != table.begin()){
            itr--;
            j--;
            ans[query[i].second] = n - sum[j + 1];
        }else{
            ans[query[i].second] = n - sum[j];
        }
    }
    REP(i,q){
        println(ans[i]);
    }

    return 0;
}