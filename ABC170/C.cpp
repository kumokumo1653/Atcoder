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
    itn x,n;
    cin >> x >> n;
    vector<int> a(n);
    REP(i,n) cin >> a[i];
    sort(ALL(a));
    int cnt = 1;
    int rei = 0;
    int up = 101;
    bool flag = true;
    if(n == 0){
        println(x);
        return 0;
        
    }
    REP(i,n){
        if(a[i] == x){
            flag = false;
            break;
        }
    }
    if(flag) {
        println(x);
        return 0;
    }
    REP(i,n){
        if(cnt >= x)
            break;
        if(a[i] == cnt)
            cnt ++;
        else{
             rei = cnt;
             cnt++;
             i--;
        }
    } 
    cnt =100;
    REPR(i,n){
        if(cnt <= x)
            break;
        if(a[i] == cnt)
            cnt --;
        else{
            up = cnt;
            cnt--;
            i++;
        }
    }
    int diff = 0;
    if(abs(0 - x) <= abs(101 - x))
        diff = 0;
    else diff = 101;
    if(abs(rei - x) <= abs(up - x)){
        if(abs(rei - x) < abs(diff - x)){
            println(rei);
            return 0;
        }else if(abs(rei - x) > abs(up - x)){
            println(diff);
            return 0;
        }else{
            println(min(rei,diff));
        }
        
    }else{
        if(abs(up - x) < abs(diff - x)){
            println(up);
            return 0;
        }else if(abs(up - x) > abs(diff - x)){
            println(diff);
            return 0;
        }else{
            println(min(up,diff));
        }
    }
    return 0;
}