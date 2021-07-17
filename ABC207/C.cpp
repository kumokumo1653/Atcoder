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
    vector<tuple<int,int,int>> a(n);
    REP(i,n){
        int t, l ,r;
        cin >> t >> l >> r;
        a[i] = make_tuple(t, l ,r);
    }
    int cnt = 0;
    REP(i,n){
        FOR(j, i + 1, n){
            if(get<0>(a[i]) == 1 && get<0>(a[j]) == 1){
                if(get<1>(a[i]) < get<1>(a[j])){
                    if(get<2>(a[i]) >= get<1>(a[j])){
                        cnt++;
                        break;
                    }
                }else if(get<1>(a[i]) > get<1>(a[j])){
                    if(get<2>(a[j]) >= get<1>(a[i])){
                        cnt++;
                        break;
                    }

                }else{
                    cnt++;
                    break;
                }
            }
            if(get<0>(a[i]) == 1 && get<0>(a[j]) == 2){
                if(get<1>(a[i]) < get<1>(a[j])){
                    if(get<2>(a[i]) >= get<1>(a[j])){
                        cnt++;
                        break;
                    }
                }else if(get<1>(a[i]) > get<1>(a[j])){
                    if(get<2>(a[j]) > get<1>(a[i])){
                        cnt++;
                        break;
                    }

                }else{
                    cnt++;
                    break;
                }
            }
            if(get<0>(a[i]) == 1 && get<0>(a[j]) == 3){
                if(get<1>(a[i]) <= get<1>(a[j])){
                    if(get<2>(a[i]) > get<1>(a[j])){
                        cnt++;
                        break;
                    }
                }else if(get<1>(a[i]) > get<1>(a[j])){
                    if(get<2>(a[j]) >= get<1>(a[i])){
                        cnt++;
                        break;
                    }

                }
            }
            if(get<0>(a[i]) == 1 && get<0>(a[j]) == 4){
                if(get<1>(a[i]) <= get<1>(a[j])){
                    if(get<2>(a[i]) > get<1>(a[j])){
                        cnt++;
                        break;
                    }
                }else if(get<1>(a[i]) > get<1>(a[j])){
                    if(get<2>(a[j]) > get<1>(a[i])){
                        cnt++;
                        break;
                    }

                }
            }



            if(get<0>(a[i]) == 2 && get<0>(a[j]) == 1){
                if(get<1>(a[i]) < get<1>(a[j])){
                    if(get<2>(a[i]) > get<1>(a[j])){
                        cnt++;
                        break;
                    }
                }else if(get<1>(a[i]) > get<1>(a[j])){
                    if(get<2>(a[j]) >= get<1>(a[i])){
                        cnt++;
                        break;
                    }

                }else{
                    cnt++;
                    break;
                }
            }
            if(get<0>(a[i]) == 2 && get<0>(a[j]) == 2){
                if(get<1>(a[i]) < get<1>(a[j])){
                    if(get<2>(a[i]) > get<1>(a[j])){
                        cnt++;
                        break;
                    }
                }else if(get<1>(a[i]) > get<1>(a[j])){
                    if(get<2>(a[j]) > get<1>(a[i])){
                        cnt++;
                        break;
                    }

                }else{
                    cnt++;
                    break;
                }
            }
            if(get<0>(a[i]) == 2 && get<0>(a[j]) == 3){
                if(get<1>(a[i]) <= get<1>(a[j])){
                    if(get<2>(a[i]) > get<1>(a[j])){
                        cnt++;
                        break;
                    }
                }else if(get<1>(a[i]) > get<1>(a[j])){
                    if(get<2>(a[j]) >= get<1>(a[i])){
                        cnt++;
                        break;
                    }

                }
            }
            if(get<0>(a[i]) == 2 && get<0>(a[j]) == 4){
                if(get<1>(a[i]) <= get<1>(a[j])){
                    if(get<2>(a[i]) > get<1>(a[j])){
                        cnt++;
                        break;
                    }
                }else if(get<1>(a[i]) > get<1>(a[j])){
                    if(get<2>(a[j]) > get<1>(a[i])){
                        cnt++;
                        break;
                    }

                }
            }



            if(get<0>(a[i]) == 3 && get<0>(a[j]) == 1){
                if(get<1>(a[i]) < get<1>(a[j])){
                    if(get<2>(a[i]) >= get<1>(a[j])){
                        cnt++;
                        break;
                    }
                }else if(get<1>(a[i]) >= get<1>(a[j])){
                    if(get<2>(a[j]) > get<1>(a[i])){
                        cnt++;
                        break;
                    }

                }
            }
            if(get<0>(a[i]) == 3 && get<0>(a[j]) == 2){
                if(get<1>(a[i]) < get<1>(a[j])){
                    if(get<2>(a[i]) >= get<1>(a[j])){
                        cnt++;
                        break;
                    }
                }else if(get<1>(a[i]) >= get<1>(a[j])){
                    if(get<2>(a[j]) > get<1>(a[i])){
                        cnt++;
                        break;
                    }

                }
            }
            if(get<0>(a[i]) == 3 && get<0>(a[j]) == 3){
                if(get<1>(a[i]) < get<1>(a[j])){
                    if(get<2>(a[i]) > get<1>(a[j])){
                        cnt++;
                        break;
                    }
                }else if(get<1>(a[i]) > get<1>(a[j])){
                    if(get<2>(a[j]) > get<1>(a[i])){
                        cnt++;
                        break;
                    }

                }else{
                    cnt++;
                    break;
                }
            }
            if(get<0>(a[i]) == 3 && get<0>(a[j]) == 4){
                if(get<1>(a[i]) < get<1>(a[j])){
                    if(get<2>(a[i]) > get<1>(a[j])){
                        cnt++;
                        break;
                    }
                }else if(get<1>(a[i]) > get<1>(a[j])){
                    if(get<2>(a[j]) > get<1>(a[i])){
                        cnt++;
                        break;
                    }

                }else{
                    cnt++;
                    break;
                }
            }



            if(get<0>(a[i]) == 4 && get<0>(a[j]) == 1){
                if(get<1>(a[i]) < get<1>(a[j])){
                    if(get<2>(a[i]) > get<1>(a[j])){
                        cnt++;
                        break;
                    }
                }else if(get<1>(a[i]) >= get<1>(a[j])){
                    if(get<2>(a[j]) > get<1>(a[i])){
                        cnt++;
                        break;
                    }

                }
            }
            if(get<0>(a[i]) == 4 && get<0>(a[j]) == 2){
                if(get<1>(a[i]) < get<1>(a[j])){
                    if(get<2>(a[i]) > get<1>(a[j])){
                        cnt++;
                        break;
                    }
                }else if(get<1>(a[i]) >= get<1>(a[j])){
                    if(get<2>(a[j]) > get<1>(a[i])){
                        cnt++;
                        break;
                    }

                }
            }
            if(get<0>(a[i]) == 4 && get<0>(a[j]) == 3){
                if(get<1>(a[i]) < get<1>(a[j])){
                    if(get<2>(a[i]) > get<1>(a[j])){
                        cnt++;
                        break;
                    }
                }else if(get<1>(a[i]) > get<1>(a[j])){
                    if(get<2>(a[j]) > get<1>(a[i])){
                        cnt++;
                        break;
                    }

                }else{
                    cnt++;
                    break;
                }
            }
            if(get<0>(a[i]) == 4 && get<0>(a[j]) == 4){
                if(get<1>(a[i]) < get<1>(a[j])){
                    if(get<2>(a[i]) > get<1>(a[j])){
                        cnt++;
                        break;
                    }
                }else if(get<1>(a[i]) > get<1>(a[j])){
                    if(get<2>(a[j]) > get<1>(a[i])){
                        cnt++;
                        break;
                    }

                }else{
                    cnt++;
                    break;
                }
            }



        }
    }

    println(cnt);
    return 0;
}