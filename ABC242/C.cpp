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
const int MOD = 998244353;

//modint
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
    lint n;
    cin >> n;
    vector<vector<mint<MOD>>> t;
    t.push_back({mint<MOD>(2), mint<MOD>(3), mint<MOD>(3), mint<MOD>(3), mint<MOD>(3), mint<MOD>(3), mint<MOD>(3), mint<MOD>(3), mint<MOD>(2)});
    REP(i, n - 2){
        vector<mint<MOD>> temp;
        REP(j,9){
            if(j == 0){
                mint<MOD> sum = t[i][0] + t[i][1];
                temp.push_back(sum);
            }else if(j == 8){
                mint<MOD> sum = t[i][7] + t[i][8];
                temp.push_back(sum);
            }else{
                mint<MOD> sum = t[i][j - 1] + t[i][j] + t[i][j + 1];
                temp.push_back(sum);
            }
        }
        t.push_back(temp);
    }
    mint<MOD> ans = 0;
    REP(i,9){
        ans += t[t.size() - 1][i];
    }
    println(ans);
    return 0;
}