#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n - 1; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define FORR(i,m,n) for(int i = m - 1; i >= n; i--)
#define ALL(v) v.begin(), v.end()
#define CMAX(m, x)  m = max(m,x)
#define CMIN(m, x)  m = min(m,x)
#define itn int
#define Yes() cout << "Yes" << endl
#define No() cout << "No" << endl
#define YES() cout << "YES" << endl
#define NO() cout << "NO" << endl
typedef long long lint;
typedef long double ldouble;
const int INF = 1e9;
const lint LINF = 1e18;
int main(){
    int n;
    lint k;
    int point = 0;
    cin >> n >> k;
    vector<int> a(n);
    int cnt = 1;
    vector<int> his;
    vector<vector<int>> data(n);
    int start = 0;
    int end = 0;
    his.push_back(1);
    data[0].push_back(cnt);
    REP(i,n)
        cin >> a[i];
    while(1){
        cnt++;
        point = a[point] - 1;
        his.push_back(point + 1);
        data[point].push_back(cnt);

        if(data[point].size() == 2){
            start = data[point][0];
            end = data[point][1];
            break;
        }
        if(cnt - 1 == k){
            cout << point + 1 << endl;
            return 0;
        }
    }
    k -= (start - 1);
    k -= (k / (end - start)) * (end - start);
    cout << his[start + k - 1] << endl;
    return 0;
}