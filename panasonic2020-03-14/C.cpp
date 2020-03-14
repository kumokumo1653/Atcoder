#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_dec_float.hpp>
using namespace std;
namespace mp = boost::multiprecision;
#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define ALL(v) v.begin(), v.end()

typedef long long lint;
int main(){
    int a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;
    mp::cpp_dec_float_100 x = a;
    mp::cpp_dec_float_100 y = b;
    mp::cpp_dec_float_100 z = c;

    if(mp::sqrt(x) + mp::sqrt(y) < mp::sqrt(z))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}