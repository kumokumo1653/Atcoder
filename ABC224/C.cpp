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
    int n;
    cin >> n;
    vector<pair<lint, lint>>p(n);
    REP(i,n){
        cin >> p[i].first >> p[i].second;
    }
    int ans = 0;
    REP(i,n){
        FOR(j, i + 1, n){
            FOR(k, j + 1, n){
                lint s = abs((p[i].first - p[k].first) * (p[j].second - p[k].second) - (p[j].first - p[k].first) * (p[i].second - p[k].second));
                //print(p[i].first);print(p[i].second);
                //print(p[j].first);print(p[j].second);
                //print(p[k].first);print(p[k].second);
                //println(s);
                if(s > 0){
                    ans++;
                    /*
                    int minus = 0;
                    vector<pair<lint,lint>> temp;
                    int minus1 = -1;
                    int minus2 = -1;
                    temp.push_back(make_pair(p[i].first, p[i].second));
                    temp.push_back(make_pair(p[j].first, p[j].second));
                    temp.push_back(make_pair(p[k].first, p[k].second));
                    if(p[i].second > 0 && p[j].second > 0 && p[k].second)
                        ans++;
                    REP(l,3){
                        if(temp[l].second < 0){
                            minus++;
                            if(minus1 == -1){
                                minus1 = l;
                            }else{
                                minus2 = l;
                            }
                            
                        }
                    }
                    if(minus == 1){
                        vector<pair<ldouble,ldouble>> px;
                        REP(l,3){
                            if(minus1 != l){
                                px.push_back(make_pair((-temp[l].first * temp[minus1].second + temp[minus1].first * temp[minus1].second) / (temp[l].second - temp[minus1].second) - temp[minus1].first ,0));
                            }
                        }
                        ldouble s1 = abs((temp[minus1].first - px[1].first) * (px[0].second - px[1].second) - (temp[minus1].first - px[1].first) * (temp[minus1].first - px[1].first));
                    }
                    */
                    
                }
            }
        }
    }
    println(ans);
    return 0;
}