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
    itn n, x, y, z;
    cin >> n;
    cin >> x >> y >> z;
    int cnt = 0;

    vector<pair<int,int>> a(n);
    vector<pair<int,int>> b(n);
    vector<pair<int,int>> ab(n);
    vector<int> num;
    REP(i,n){
        cin >> a[i].first;
        a[i].second = n - i;
    }
    REP(i,n){
        cin >> b[i].first;
        b[i].second = n - i;
    }
    REP(i,n){
        ab[i].first = a[i].first + b[i].first;
        ab[i].second = n - i;
    }
    sort(ALL(a));
    reverse(ALL(a));
    sort(ALL(b));
    reverse(ALL(b));
    sort(ALL(ab));
    reverse(ALL(ab));
    REP(i,x){
        num.push_back(a[i].second);
    }
    REP(i,n){
        if(cnt == y){
            break;
        }
        bool f = true;
        REP(j, num.size()){
            if(b[i].second == num[j]){
                f = false;
                break;
            }
        }
        if(f){
            num.push_back(b[i].second);
            cnt++;
            
        }
        if(cnt == y){
            break;
        }
    }

    cnt = 0;
    REP(i,n){
        if(cnt == z){
            break;
        }
        bool f = true;
        REP(j, num.size()){
            if(ab[i].second == num[j]){
                f = false;
                break;
            }
        }
        if(f){
            num.push_back(ab[i].second);
            cnt++;
            
        }
        if(cnt == z){
            break;
        }
    }

    sort(ALL(num));
    reverse(ALL(num));
    REP(i,num.size()){
        println(n - num[i] + 1);
    }
    return 0;
}