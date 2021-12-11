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

const lint mod = 998244353;
template<lint mod> struct mint {
    lint x;
    mint(lint x = 0): x((x + mod) % mod) { }
    mint operator+(mint a) { return mint(*this) += a; }
    mint operator-(mint a) { return mint(*this) -= a; }
    mint operator*(mint a) { return mint(*this) *= a; }
    mint operator/(mint a) { return mint(*this) /= a; }
    mint& operator+=(mint a) { if ((x += a.x) >= mod) x -= mod; return *this; }
    mint& operator-=(mint a) { if ((x += mod - a.x) >= mod) x -= mod; return *this; }
    mint& operator*=(mint a) { (x *= a.x) %= mod; return *this; }
    mint& operator/=(mint a) { return *this *= a.inv(); }
    mint pow(lint t) { mint a = x, ret = 1; while (t) { if (t & 1) ret *= a; a *= a; t >>= 1; } return ret; }
    mint inv() { return pow(mod - 2); }
    friend istream& operator>>(istream& is, mint& a) { return is >> a.x; }
    friend ostream& operator<<(ostream& os, mint& a) { return os << a.x; }
};

int main(){
    itn n;
    mint<mod> ans = 0;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    vector<vector<int>> table(3000, vector<int>(3000, 0));
    REP(i,n){
        cin >> a[i];
    } 
    REP(i,n){
        cin >> b[i];
    } 

    FOR(i, 1, n){
        FOR(j, a[i - 1], b[i - 1] + 1){
            table[i - 1][j] = max(0, b[i] - j + 1);
        }
    }
    return 0;
}