#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define ALL(v) v.begin(), v.end()

typedef long long lint;
int main(){
    int N;
    cin >> N;
    vector<int[2]> n(N - 1);
    vector<int[2]> dis;
    vector<int> out(N);
    REP(i,N - 1){
        cin >> n[i][0];
        cin >> n[i][1];
    }
    int tag, tag2, tag3;
    REP(i, N){
        REP(j, N - 1){
            if(n[j][0] == i)
                tag = n[j][1];
            if(n[j][1] == i)
                tag = n[j][0];
        }
        REP(j,N - 1){
            if(n[j][0] != i && n[j][0] == tag)
                tag2 = n[j][1];
            if(n[j][1] != i && n[j][1] == tag)
                tag2 = n[j][0];
        }
        tag3 = -1;
        REP(j,N - 1){
            if(n[j][0] != tag && n[j][0] == tag2)
                tag3 = n[j][1];
            if(n[j][1] != tag && n[j][1] == tag2)
                tag3 = n[j][0];
        }
        if(tag3 != -1)
            dis.push_back({i,tag3});
    }
    REP(i,N)
        out[i] = i + 1;
    REP(i,dis.size()){
        if(out[dis[i][0]] + out[dis[i][1]] == 6 || out[dis[i][0]] * out[dis[i][1]] == 6);

    }

}