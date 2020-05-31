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
    int n ,m,q;
    cin >> n >> m >> q;
    vector<int>toi(m);
    vector<vector<int>>score(n,vector<int>());
    vector<int> ans;
    REP(i,q){
        int a;
        cin >> a;
        if(a == 1){
            int b;
            cin >> b;
            b--;
            int sum = 0;
            REP(i,score[b].size()){
                sum += n - toi[score[b][i]];
            }
            ans.push_back(sum);
        }
        else{
            int b,c;
            cin >> b >> c;
            b--;c--;
            toi[c]++;
            score[b].push_back(c);
        }
    }
    REP(i,ans.size())
        cout << ans[i] << endl;
    return 0;
}