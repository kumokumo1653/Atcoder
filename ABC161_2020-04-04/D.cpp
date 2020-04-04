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

int  aaa(queue<int>& q){
    switch (q.front())
    {
    case 1:
        q.push(0);
        q.push(1);
        q.push(2);
        break;
    case 2:
        q.push(1);
        q.push(2);
        q.push(3);
        break;
    case 3:
        q.push(2);
        q.push(3);
        q.push(4);
        break;
    case 4:
        q.push(3);
        q.push(4);
        q.push(5);
        break;
    case 5:
        q.push(4);
        q.push(5);
        q.push(6);
        break;
    case 6:
        q.push(5);
        q.push(6);
        q.push(7);
        break;
    case 7:
        q.push(6);
        q.push(7);
        q.push(8);
        break;
    case 8:
        q.push(7);
        q.push(8);
        q.push(9);
        break;
    case 9:
        q.push(8);
        q.push(9);
        break;
    
    default:
        break;
    }
    int num = q.front();
    q.pop();
    return num;
}
int main(){
    int k;
    cin >> k;
    lint ans = 0;
    lint temp = 0;
    int cnt = 0;
    queue<int> q;
    FOR(i,1,10)
        q.push(i);
    bool flag = false;
    while(true){
        ans = aaa(q);
        cnt++;
        if(cnt == k)
            break;
    }
    cout << ans << endl;
    return 0;
}

