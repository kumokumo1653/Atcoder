#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define ALL(v) v.begin(), v.end()

typedef long long lint;
int main(){
    int n;
    cin >> n;
    int bryou = 0;
    int ryou = 0;
    int defe = 0;
    vector <int> a(n);
    REP(i,n){
        cin >> a[i];
    }
    REP(i, n){
        if(i == 0){
            bryou = a[i];
        }else{
            ryou = a[i];
            if(bryou == ryou)
                cout << "stay" << endl;
            else if(bryou < ryou)
                printf("up %d\n",ryou - bryou);
            else
                printf("down %d\n", bryou - ryou);
            bryou = ryou;
        }
    }
}