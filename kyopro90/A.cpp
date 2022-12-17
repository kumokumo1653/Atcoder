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
    int n, l,k;
    cin >> n >> l >> k;
    int right,left,mid;

    vector<int> a(n);
    vector<int> s(n + 1);
    int sum = 0;
    REP(i,n){
        cin >> a[i];
    }

    FOR(i, 1,n + 1){
        sum += a[i - 1];
        s[i] = sum;
    }


    right = *min_element(ALL(a));
    left = l - a[0] > l - a[n - 1] ? l - a[0] : l - a[n - 1];
    while(right + 1 >= left){
        mid = (right + left) / 2;
        bool flag = false;
        for(int i = n - k + 1; i < n + 1; i++){
            if(s[i] - s[i - (n - k + 1)] > mid){
                flag = true;
                break;
            } 
        }
        if(flag){
           right = mid; 
        }else{
            left = mid;
        }
    }

    println(right);


    return 0;
}