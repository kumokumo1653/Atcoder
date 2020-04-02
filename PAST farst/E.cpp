#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define ALL(v) v.begin(), v.end()

typedef long long lint;

int main(){
    int n,q;
    cin >> n >> q;
    vector<vector<char>> data(n,vector<char>(n,'N'));
    REP(i,q){
        char c;
        int a,b;
        cin >> c;
        if(c == '1'){
            cin >> a >> b;
            data[a - 1][b - 1] = 'Y';
        }
        else if(c == '2'){
            cin >> a;
            REP(i,n){
                if(data[i][a - 1] == 'Y')
                    data[a - 1][i] = 'Y';
            }
        }else if(c == '3'){
            cin >> a;
            vector<vector<int>> temp;
            REP(i,n){
                if(data[a - 1][i] == 'Y'){
                    REP(j,n){
                        if(data[i][j] == 'Y' && j != a - 1)
                            temp.push_back({a - 1, j});
                    }
                }
            }
            REP(i,temp.size()){
                data[temp[i][0]][temp[i][1]] = 'Y';
            }
        }
    }
    REP(i,n){
        REP(j,n){
            cout << data[i][j];
        }
        cout << endl;
    }

}