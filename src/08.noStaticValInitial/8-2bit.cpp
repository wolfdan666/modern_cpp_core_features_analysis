#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, a, b) for(int i = int(a); i <= int(b); ++i)
#define per(i, b, a) for(int i = int(b); i >= int(a); --i)
#define mem(x, y) memset(x, y, sizeof(x))
#define SZ(x) x.size()
#define mk make_pair
#define pb push_back
#define fi first
#define se second
const ll mod=1000000007;
const int inf = 0x3f3f3f3f;
inline int rd(){char c=getchar();int x=0,f=1;while(c<'0'||c>'9'){if(c=='-')f=-1;c=getchar();}while(c>='0'&&c<='9'){x=x*10+c-'0';c=getchar();}return x*f;}
inline ll qpow(ll a,ll b){ll ans=1%mod;for(;b;b>>=1){if(b&1)ans=ans*a%mod;a=a*a%mod;}return ans;}

struct  S {
  int y : 8 = 11;
  int z : 4 {7};
};

int a;
struct S1 {
    int y : true ? 8 : a = 42;
    int z : 1 || new int { 0 };
};

int b;
struct S2 {
    int y : (true ? 8 : b = 42);
    int z : (1 || new int { 0 });
};

int c;
struct S3 {
  int y : (true ? 8 : c) = 42;
  int z : (1 || new int){ 0 };
};

int main(){
    S s;
    cout << s.y << " " << s.z << endl;
    // cout << s << endl;
    cout << "sizeof(s): " << sizeof(s) << " sizeof(int): " << sizeof(int) << endl;
    
    S1 s1;
    cout << s1.y << " " << s1.z << endl;
    cout << sizeof(s1) << endl;

    S2 s2;
    cout << s2.y << " " << s2.z << endl;
    cout << sizeof(s2) << endl;

    S3 s3;
    cout << s3.y << " " << s3.z << endl;
    cout << sizeof(s3) << endl;

    return 0;
}

/* 
❯ ./8-2bit.out
11 7
sizeof(s): 4 sizeof(int): 4
59 0
4
-32 0
4
42 0
4

上面输出和书上讲的有些出入，但是一般不会这样用，也搞不清原因，先跳过
 */