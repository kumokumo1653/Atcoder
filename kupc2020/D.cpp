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
    itn n;
    cin >> n;

    if (n % 2 == 0 && n > 2) {
        cout << (n / 2) << endl;

        REP(i, n / 2) {
            cout << "2 " << (i * 2 + 1) << " " << ((n - i - 1) * 2 + 1) << endl;
        }

        return 0;
    }

    int a = 2;
    int cnt = 0;
    bool f = false;
    int t = n;

    while (a * a <= t) {
        if (t % a == 0) {
            cnt++;
            t /= a;
            if (cnt == 2) {
                f = true;
                break;
            }
        } else {
            a++;
            cnt = 0;
        }
    }

    if (t == a && cnt == 1) f = true;

    if (!f) {
        println("impossible");
        return 0;
    }

    cout << a << endl;

    REP(i, a) {
        cout << n / a;

        int cur = i;
        int sum = 0;

        REP(j, n / a) {
            cout << " " << ((j * a + cur) * 2 + 1);
            sum += (j * a + cur) * 2 + 1;
            cur = (cur + 1) % a;
        }

        cerr << ": " << sum;

        cout << endl;
    }

    return 0;
}