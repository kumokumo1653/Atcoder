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


int calc(int a,int b){
    if(b == 0){
        return 1;
    }
    if(b % 2 == 0){
        int c = calc(a,b/2);
        if(c == -1)
            return -1;
        if(c <= INF / c){
            return c*c;
        }else{
            return -1;
        }
    }else{
        int c = a * calc(a,b-1);
        if(c < 0)
            return -1;
        else return c;
    }
}
int main(){
    int a,r,n;
    int rui;
    cin >> a >> r >> n;
    if((rui = calc(r,n-1)) == -1){
        cout << "large" << endl;
        return 0;
    }
    if(rui <= INF / a){
        cout << a * rui << endl;
    }else{
        cout << "large" << endl;
    }
    return 0;
}