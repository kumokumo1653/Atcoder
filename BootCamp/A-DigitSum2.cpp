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
    lint n;
    cin >> n;
    lint temp = n;
    int digit = 1;

    int max = 0;
    vector<int> num;
    while(temp / 10 > 0){
        num.push_back(temp % 10);
        temp /= 10;
        digit++;
    }
    num.push_back(temp % 10);
    vector<int> val(num.size());
    val = num;
    int cnt = 0;
    REP(k,val.size()){
        cnt += val[k];
    }
    CMAX(max, cnt);
    REP(i,num.size() - 1){
        REP(j,i + 1){
            if(val[j] != 9){
                int index = j;
                while(1){
                    val[index] = 9;
                    if(val[index + 1] == 0){
                        index++;
                    }else{
                        val[index + 1]--;
                        break;
                    }
                }
            }
            cnt = 0;
            REP(k,val.size()){
                cnt += val[k];
            }
            CMAX(max, cnt);
        }
    }
    println(max);
    return 0;
}