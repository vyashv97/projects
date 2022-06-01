//code template github-
#include<bits/stdc++.h>
using namespace std;
 
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD 1000000007
#define MOD1 998244353
#define pb push_back
#define ppb pop_back
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define all(x) (x).begin(), (x).end()
#define matrix vector<vector<ll>>
 
typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
 
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif
 
void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}
 
template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}

  struct help{
 ll x;
 ll y;
 };
 void google(int t) {cout << "Case #" << t << ": ";}
 vector<int> bit(int a){vector<int> v(32,0);for(int i=0;i<32;i++){v[i]=a&1;a=a/2;}return v;}
ll factorial(ll n){ll k=1; for(int i=1;i<=n;i++){	k*=i;}return k;}
ll Power(ll n,ll p){ll k=1;for(int i=1;i<=p;i++){	k*=n;}return k;}
ll gcd(ll a, ll b) {if (b > a) {return gcd(b, a);} if (b == 0) {return a;} return gcd(b, a % b);}
ll lcm(ll a,ll b){return (a*b)/gcd(a,b);}
void precision(ll a) {cout << setprecision(a) << fixed;}
ll msb(ll n){ ll res=0; while(n/2!=0){ n/=2; res++;} return res;}
ll lsb(ll n){ ll res=0; while(n%2==0){ n/=2; res++;} return res;}
bool revsort(ll a, ll b) {return a > b;}
long long get(int x) {return x * 1ll * (x + 1) / 2;}

bool compare(helper a1,helper a2){
return a1.x<a2.y;
}

ll memosiation(ll a[],ll n ){
return INT_MAX;
}

bool check(ll mid, ll n){
	return false;
}

bool check(ll n){
	return false;
}

void solution(){
ll n; ll k;vector<ll> a(200000,0);vector<ll> v;vector<ll> ba(200000,0);ll count=0;ll counteven=0; ll countodd=0;bool b=false;ll ans=0;
}

int   main(){
    #ifndef ONLINE_JUDGE
        freopen("Error.txt", "w", stderr);
    #endif
 ll test=1; 
cin>>test;


   while(test--){
   	solution();
   }
    return 0;
 }
