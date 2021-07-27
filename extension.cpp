//unionfind

struct UnionFind{
    vector<lint> g; 
    vector<lint> p; 

    UnionFind(int n):g(n),p(n){
        init(n);
    }
    void init(int n){
        REP(i,n) {g[i] = i; p[i] = 1;}
    }
    int root(int x){
        if(g[x] == x) return x;
        else return g[x] = root(g[x]);
    }
    bool unite(int x,int y){
        x = root(x);
        y = root(y);
        if(x == y) return false;
        if(p[x] < p[y]) swap(x,y);
        p[x] += p[y];
        g[y] = x;
        return true;
        
    }
    int len(int x){
        return p[root(x)];
    }
    bool same(int x,int y){
        return root(x) == root(y);
    }
};

//modint
template<lint mod> struct mint {
    lint x;
    mint(lint x = 0): x((x + mod) % mod) { }
    mint operator+(mint a) { return mint(*this) += a; }
    mint operator-(mint a) { return mint(*this) -= a; }
    mint operator*(mint a) { return mint(*this) *= a; }
    mint operator/(mint a) { return mint(*this) /= a; }
    mint& operator+=(mint a) { if ((x += a.x) >= mod) x -= mod; return *this; }
    mint& operator-=(mint a) { if ((x += mod - a.x) >= mod) x -= mod; return *this; }
    mint& operator*=(mint a) { (x *= a.x) %= mod; return *this; }
    mint& operator/=(mint a) { return *this *= a.inv(); }
    mint pow(lint t) { mint a = x, ret = 1; while (t) { if (t & 1) ret *= a; a *= a; t >>= 1; } return ret; }
    mint inv() { return pow(mod - 2); }
    friend istream& operator>>(istream& is, mint& a) { return is >> a.x; }
    friend ostream& operator<<(ostream& os, mint& a) { return os << a.x; }
};