#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define ALL(v) v.begin(), v.end()

typedef long long lint;
int main(){
    vector<int> data(6);
    REP(i,6){
        cin >> data[i];
    }
    REP(i,6){
        REP(j,5 - i){
            if(data[j] < data[j + 1])
                swap(data[j],data[j + 1]);
        }
    }
    
    cout << data[2] << endl;
}