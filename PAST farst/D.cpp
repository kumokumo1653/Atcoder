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
    int x = 0;
    int y = 0;
    vector<int> a(n);
    REP(i,n){
        int index;
        cin >> index;
        a[index - 1]++;
    }
    REP(i,n){
        if(a[i] == 2)
            y = i + 1;
        if(a[i] == 0)
            x = i + 1;
    }
    if((x != 0) && (y != 0))
        printf("%d %d\n",y,x);
    else
        cout << "Correct" << endl;
}