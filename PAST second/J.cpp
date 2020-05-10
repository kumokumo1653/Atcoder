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
typedef long double ldouble;
const int INF = 1e9;
const lint LINF = 1e18;

string dfs(string &in){
    string ans;
    in.pop_back();
    in.erase(in.begin());
    cout << in << endl;
    itn cnt = 0;
    int start = -1,end = -1,flag = -1;
    REP(i,in.size()){
        if(in[i] == '('){
            cnt++;
            if(flag == -1){
                start = i;
                flag = cnt;
            }
        }
        else if(in[i] == ')'){
            if(cnt == flag){
                end = i;
                string temp = in.substr(start,end - start + 1);
                if(temp.size() > 2){
                    temp = dfs(temp);
                    cout << temp << endl;
                    in.replace(start,end - start + 1,temp);
                    cout << in << endl;
                    i = start + temp.size() - 1;
                }else{
                    in.replace(start,2,"");
                    cout << in << endl;
                    i = start - 1;
                }
                flag = -1;

            }
            cnt--;
        }
        
    }
    REP(i,in.size())
        ans.push_back(in[i]);
    REPR(i,in.size() - 1)
        ans.push_back(in[i]);
    return ans;
}
int main(){
    string s;
    cin >> s;
    string ans;
    int cnt = 0;
    int start = -1,end = -1,flag = -1;
    REP(i,s.size()){    
        if(s[i] == '('){
            cnt++;
            if(flag == -1){
                start = i;
                flag = cnt;
            }
        }
        else if(s[i] == ')'){
            if(cnt == flag){
                end = i;
                string temp = s.substr(start,end - start + 1);
                if(temp.size() > 2){
                    ans += dfs(temp);
                }
                flag = -1;
            }
            cnt--;
        }else{
            if(flag == -1)
                ans += s[i];
        }

    }
    cout << ans << endl;
    return 0;
}