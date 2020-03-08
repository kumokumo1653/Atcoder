#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define ALL(v) v.begin(), v.end()

typedef long long lint;
int main(){
    int A, B, M;
    scanf("%d %d %d",&A, &B, &M);
    int min = 1000000;
    vector<int>a(A);
    vector<int>b(B);
    vector<int>x(M);
    vector<int>y(M);
    vector<int>c(M);
    REP(i,A){
        cin >> a[i];
    }
    REP(i,B){
        cin >> b[i];
    }
    REP(i,M){
        cin >> x[i];
        cin >> y[i];
        cin >> c[i];
    }
    min = *(min_element(ALL(a))) + *(min_element(ALL(b)));
    REP(i,M){
        if(min > a[x[i] - 1] + b[y[i] - 1] - c[i])
            min = a[x[i] - 1] + b[y[i] - 1] - c[i];
    }
    cout << min << endl;
}