#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

using namespace std;

#define scd(t)                              scanf("%d",&t)
#define scdl(t)                             scanf("%ld",&t)
#define scdll(t)                            scanf("%lld",&t)
#define scc(t)                              scanf("%c",&t)
#define scs(t)                              scanf("%s",t)
#define scf(t)                              scanf("%f",&t)
#define sclf(t)                             scanf("%lf",&t)
#define mem(a, b)                           memset(a, (b), sizeof(a))
#define For(i, j, k, in)                    for (int i=j ; i<k ; i+=in)
#define rfor(i, j, k, in)                   for (int i=j ; i>=k ; i-=in)
#define rep(i, j)                           FOR(i, 0, j, 1)
#define rrep(i, j)                          RFOR(i, j, 0, 1)
#define all(cont)                           cont.begin(), cont.end()
#define rall(cont)                          cont.end(), cont.begin()
#define foreach(it, l)                      for (auto it = l.begin(); it != l.end(); it++)
#define IN(A, B, C)                         assert( B <= A && A <= C)
#define MP                                  make_pair
#define PB                                  push_back
#define INF                                 (int)1e9
#define EPS                                 1e-9
#define PI                                  3.1415926535897932384626433832795
#define MOD                                 1000000007
#define                                     read(type) readInt<type>()
const double                                pi=acos(-1.0);



typedef pair<int, int> PII;
typedef vector<int> VI;
typedef vector<string> VS;
typedef vector<PII> VII;
typedef vector<VI> VVI;
typedef map<int,int> MPII;
typedef set<int> SETI;
typedef multiset<int> MSETI;
typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int  uint64;



/****** Template of some basic operations *****/
template<typename T, typename U> inline void amin(T &x, U y) { if(y < x) x = y; }
template<typename T, typename U> inline void amax(T &x, U y) { if(x < y) x = y; }
/**********************************************/

/****** Template of Fast I/O Methods *********/
template <typename T> inline void write(T x)
{
    int i = 20;
    char buf[21];
    // buf[10] = 0;
    buf[20] = '\n';

    do
    {
        buf[--i] = x % 10 + '0';
        x/= 10;
    }while(x);
    do
    {
        putchar(buf[i]);
    } while (buf[i++] != '\n');
}

template <typename T> inline T readInt()
{
    T n=0,s=1;
    char p=getchar();
    if(p=='-')
        s=-1;
    while((p<'0'||p>'9')&&p!=EOF&&p!='-')
        p=getchar();
    if(p=='-')
        s=-1,p=getchar();
    while(p>='0'&&p<='9') {
        n = (n<< 3) + (n<< 1) + (p - '0');
        p=getchar();
    }

    return n*s;
}
/************************************/


/******* Debugging Class Template *******/
#define DEBUG

#ifdef DEBUG

    #define debug(args...)     (Debugger()) , args

    class Debugger
    {
        public:
        Debugger(const std::string& _separator = " - ") :
        first(true), separator(_separator){}

        template<typename ObjectType> Debugger& operator , (const ObjectType& v)
        {
            if(!first)
                std:cerr << separator;
            std::cerr << v;
            first = false;
            return *this;
        }
        ~Debugger() {  std:cerr << endl;}

        private:
        bool first;
        std::string separator;
    };

#else
    #define debug(args...)                  // Just strip off all debug tokens
#endif
 

int c = 1;
int max(int a, int b){
    if(a>b) return a;
    else return b;
}
void solve(int n){
     vector<int> vec;
     while(n!=-1){
        vec.push_back(n);
        cin>>n;
     }
     int k = vec.size();
     int mx = 1;
     vector<int> dp(k,1);
     for(int i=1;i<k;i++){
        for(int j=i-1;j>=0;j--){
            if(vec[j]>=vec[i]) dp[i] = max(dp[i],dp[j]+1);
        }
        mx = max(mx,dp[i]);
     }

     printf("Test #%d:\n  maximum possible interceptions: %d",c++,mx);
}



int main(){

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int T=1;
    while(T){
       int n;scd(n);
       if(n==-1){
        printf("\n");
        break;
       }else{
        if(c>1)printf("\n\n");
       }
       solve(n);

    }
    return 0;
}

