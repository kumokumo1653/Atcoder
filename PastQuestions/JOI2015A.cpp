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
int main(){
    int n,m;
    cin >> n >> m;
    lint num = 0;
    lint sum = 0;
    vector<int> keiro(m);
    vector<int> tosi(n,0);
    REP(i,m){
        int d;
        cin >> d;
        d--;
        keiro[i] = d;
    }
    
    n--;
    vector<int> a(n);
    vector<int> b(n);
    vector<int> c(n);
    REP(i,n){
        cin >> a[i] >> b[i] >> c[i];
    }
    REP(i,m - 1){
        int s,e;
        s = keiro[i];
        e = keiro[i+1];
        if(s < e){
            tosi[s]++;
            tosi[e]--;
        }else{
            tosi[s]--;
            tosi[e]++;
        }
    }
    num = tosi[0];
    sum += min(num*a[0],c[0] + num * b[0]);
    FOR(i,1,n + 1){
        tosi[i] += tosi[i - 1];
        num = tosi[i];
        sum += min(num * a[i], c[i] + num * b[i]);
    }
    cout << sum << endl;
    return 0;
}