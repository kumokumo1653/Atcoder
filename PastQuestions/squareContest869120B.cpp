#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define ALL(v) v.begin(), v.end()
#define CMAX(m, x)  m = max(m,x);
#define CMIN(m, x)  m = min(m,x);
#define itn int
typedef long long lint;
const int INF = 1e9;
const lint LINF = 1e18;
int main(){
    int n,k;
    cin >> n >> k;
    int len = INF;
    vector<int> height(n);
    vector<int> digit(n,0);
    vector<int> val(n,1);
    REP(i,n)
        cin >> height[i];
    
    int cnt = 0;
    int sum = 0;
    while(1){
        if(cnt == k){
            int first = 0;
            REP(i,n){
                if(digit[i] == 1){
                    if(first == 0)
                        first = digit[i];
                    else{
                        if(first >= digit[i]){
                            sum += first - digit[i] + 1;
                        }else{
                            first = digit[i];
                        }
                    }
                }
            }
        }else if(cnt > k){
            int first = 0;
            int c = 1;
            REP(i,n){
                if(digit[i] == 1){
                    if(first == 0)
                        first = digit[i];
                    
                }
            }
        }
        cnt = 0;
        digit[0] += 1;
        REP(i,n){
            if(digit[i] == 2){
                digit[i] = 0;
                digit[i + 1] += 1;
            }
            if(digit[i] == 1){
                cnt++;
            }
        }
    }
    return 0;
}