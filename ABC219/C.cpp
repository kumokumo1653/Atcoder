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

map<char,int> rule;
string x;
void merge(vector<string>& a, int left, int right, int mid){
    int n1 ,n2;
    n1 = mid - left;
    n2 = right - mid;
    
    vector<string> l(n1 + 1);
    vector<string> r(n2 + 1);
    REP(i,n1){
        l[i] = a[left + i];
    }
    REP(i,n2){
        r[i] = a[mid + i];
    }
    l[n1] = string(10, x[x.size() - 1]);
    r[n2] = string(10, x[x.size() - 1]);
    int j = 0;
    int k = 0;
    FOR(i, left, right){
        bool f = false;
        int len = l[j].size() < r[k].size() ? l[j].size() : r[k].size();
        REP(w, len){
            if(l[j][w] != r[k][w]){
                if(rule[l[j][w]] <= rule[r[k][w]]){
                    a[i] = l[j];
                    j++;
                }else{
                    a[i] = r[k];
                    k++;
                }
                f = true;
                break;
            }
        }
        if(!f){
            if(l[j].size() <= r[k].size()){
                a[i] = l[j];
                j++;
            }else{
                a[i] = r[k];
                k++;
            }
        }
    }
}
void sort(vector<string> &a, int left, int right){
    if(left + 1 < right){
        int mid = (left + right) / 2;
        sort(a, left, mid);
        sort(a, mid, right);
        merge(a, left, right, mid);
    }
}
int main(){
    int n;
    cin >> x >> n;
    vector<string> s(n);
    REP(i,n) {
        cin >> s[i];
    }
    REP(i,x.size()){
        rule[x[i]] = i;
    }
    

    sort(s, 0, n);
    REP(i,n){
        println(s[i]);
    }

    return 0;
}