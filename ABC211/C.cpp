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

//modint
template<lint mod> struct mint {
    lint x;
    mint(lint x = 0): x((x + mod) % mod) { }
    mint operator+(mint a) { return mint(*this) += a; }
    mint operator-(mint a) { return mint(*this) -= a; }
    mint operator*(mint a) { return mint(*this) *= a; }
    mint operator/(mint a) { return mint(*this) /= a; }
    mint& operator+=(mint a) { if ((x += a.x) >= mod) x -= mod; return *this; }
    mint& operator-=(mint a) { if ((x += mod - a.x) >= mod) x -= MOD; return *this; }
    mint& operator*=(mint a) { (x *= a.x) %= MOD; return *this; }
    mint& operator/=(mint a) { return *this *= a.inv(); }
    mint pow(lint t) { mint a = x, ret = 1; while (t) { if (t & 1) ret *= a; a *= a; t >>= 1; } return ret; }
    mint inv() { return pow(MOD - 2); }
    friend istream& operator>>(istream& is, mint& a) { return is >> a.x; }
    friend ostream& operator<<(ostream& os, mint& a) { return os << a.x; }
};

int main(){
    string s;
    cin >> s;
    map<char,lint> m;
    mint<MOD> ans = 0;
    vector<vector<mint<MOD>>> a(8);
    REPR(i,s.size()){
        if(s[i] == 'c' || s[i] == 'h' ||s[i] == 'o' ||s[i] == 'k' ||s[i] == 'u' ||s[i] == 'd' ||s[i] == 'a' ||s[i] == 'i'){
            m[s[i]]++;
        }
        if(s[i] == 'a'){
            a[7].push_back(m['i']);
        }
        if(s[i] == 'd'){
            mint<MOD> temp = 0;
            REP(j,a[7].size()){
                temp += a[7][j];
            }
            a[6].push_back(temp);
        }
        if(s[i] == 'u'){
            mint<MOD> temp = 0;
            REP(j,a[6].size()){
                temp += a[6][j];
            }
            a[5].push_back(temp);
        }
        if(s[i] == 'k'){
            mint<MOD> temp = 0;
            REP(j,a[5].size()){
                temp += a[5][j];
            }
            a[4].push_back(temp);
        }
        if(s[i] == 'o'){
            mint<MOD> temp = 0;
            REP(j,a[4].size()){
                temp += a[4][j];
            }
            a[3].push_back(temp);
        }
        if(s[i] == 'h'){
            mint<MOD> temp = 0;
            REP(j,a[3].size()){
                temp += a[3][j];
            }
            a[2].push_back(temp);
        }
        if(s[i] == 'c'){
            mint<MOD> temp = 0;
            REP(j,a[2].size()){
                temp += a[2][j];
            }
            a[1].push_back(temp);
        }
        
    }
    REP(i,a[1].size()){
        ans += a[1][i];
    }
    println(ans);
    return 0;
}