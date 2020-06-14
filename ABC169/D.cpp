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

lint calc(lint a,lint b){
    if(b == 0)return 1;
    if(b % 2 == 0){
        lint c = calc(a,b/2);
        return c * c;
    }else{
        return a * calc(a,b - 1);
    }
}

int main(){
    lint n;
    cin >> n;
    int q = sqrtl(n);
    vector<pair<lint,int>> a;
    lint ans = 0;
    lint num = 2;
    lint cnt = 0;
    int index = 0;
    while(1){
        if(n % num == 0){
            cnt++;
            if(cnt == 1){
                a.push_back(make_pair(num,cnt));
                index = a.size() - 1;
            }else{
                a[index].second++;
            }
            n /= num;
        }else{
            cnt = 0;
            num++;
        }
        if(n == 1) break;
        if(num > q){
            a.push_back(make_pair(n,1));
            break;
        }
    }
    cnt = 1;
    num = 2;
    REP(i,a.size()){
        int time = a[i].second;
        while(1){
            cnt += num;
            if(cnt > time){
                ans += num - 1;
                cnt = 1;
                num = 2;
                break;
            }
            num++;
        }
    }
    println(ans);

    return 0;
}