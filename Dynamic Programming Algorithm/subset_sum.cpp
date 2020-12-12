//Author: Fuadul Hasan(fuadul202@gmail.com)
//BSMRSTU,Gopalganj
//#include<bits/stdc++.h>
#define _USE_MATH_DEFINES
#include <set>
#include <map>
#include <list>
#include <queue>
#include <stack>
#include <cmath>
#include <ctime>
#include <cstdio>
#include <string>
#include <vector>
#include <bitset>
#include <random>
#include <cassert>
#include <cstring>
#include <sstream>
#include <complex>
#include <numeric>
#include <iostream>
#include <algorithm>
#include <functional>
#include <unordered_set>
#include <unordered_map>

using namespace std;
//int input........
template <typename T> inline void readline(T &n) {n = 0; int f = 1; register int ch = getchar();
 for (; !isdigit(ch); ch = getchar()) if (ch == '-') f = -1;for (; isdigit(ch); 
ch = getchar()) n = (n << 3) + (n << 1) + ch - '0';n = n * f;}
template <typename T, typename TT> inline void readline(T &n, TT &m) { readline(n); readline(m); }
template <typename T, typename TT, typename TTT> inline void readline(T &n, TT &m, TTT &l) { readline(n, m); readline(l);}
// long long input........
template <typename T> inline void readlinel(T &n) {n = 0; long long f = 1; register long long ch = getchar();
 for (; !isdigit(ch); ch = getchar()) if (ch == '-') f = -1;for (; isdigit(ch); 
ch = getchar()) n = (n << 3) + (n << 1) + ch - '0';n = n * f;}
template <typename T, typename TT> inline void readlinel(T &n, TT &m) { readlinel(n); readlinel(m); }
template <typename T, typename TT, typename TTT> inline void readlinel(T &n, TT &m, TTT &l) { readlinel(n, m); readlinel(l);}
//debug..........
#define error(args...) {vector<string>_v=split(#args,',');err(_v.begin(),args);cout<<endl;}
vector<string> split(const string &s, char c) {vector<string>v; stringstream ss(s); string x;
while (getline(ss, x, c))v.emplace_back(x); return move(v);} void err(vector<string>::iterator it) {}
template<typename T, typename... Args>void err(vector<string>::iterator it, T a, Args...args) {
cout << it->substr((*it)[0] == ' ', it->length()) << " = " << a << " "; err(++it, args...);}
//............ignore it..................//
int dx[8]= {1,0,-1,0,-1,-1,1,1};int dy[8]= {0,1,0,-1,-1,1,-1,1}; int tc = 1;
#define F first
#define S second
#define pb  push_back
#define mp make_pair
#define Pi atan(1)*4
#define ll  long long int
#define happy cin.tie(0);
#define point(x) setprecision(x)
#define coding ios::sync_with_stdio(false);
#define Test printf("Case %d: ",tc++);
#define Unique(c) (c).resize(unique(all(c))-(c).begin())
#define vout(v) for (auto z: v) cout << z << " "; cout << endl;
void print(int n){printf("%d\n", n);}
void Print(int n){printf("%d ", n);}
void print(int n,int m){printf("%d ",n);printf("%d ",m);}
void print(int n,int m,int k){printf("%d ",n);printf("%d ",m);printf("%d ",k);}
void print(ll n){printf("%I64d\n", n);}
void Print(ll n){printf("%I64d ", n);}
void print(ll n,ll m){printf("%I64d ",n);printf("%I64d ",m);}
void print(ll n,ll m,ll k){printf("%I64d ",n);printf("%I64d ",m);printf("%I64d ",k);}
int length(long long x){int l = 0;for(long long i=x;i;i/=10)l++;return l;}
int length(string s){return s.size();}
const int M           	= 1e9 + 7;
long long pow(long long a,long long n){ll res = 1;while(n){if(n&1) res = ((res%M)*(a%M))%M;a = ((a%M)*(a%M))%M;n>>=1;}return res%M;}


#define   pr 	pair<int, int> 
#define   vpr 	vector<pr> 
#define   vi   	std::vector<int>
#define   vll  	std::vector<ll>
#define   all(n) n.begin(),n.end()


const int Inf           = (int)2e9 + 5;
const ll  Lnf           = (ll)2e18 + 5;
const int N             = 4e5 + 5;
const int NN            = 1e6 + 5;

int solve() 
{
	//happy coding
	int n,total;
	cin>>n>>total;


	int a[n];	
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}

	bool  dp[n+1][total+1];
	dp[0][0] = 1;
	for(int i=1;i<=total;i++){
		dp[0][i] = 0;
	}

	for(int i=1;i<=n;i++){
		for(int j=0;j<=total;j++){
			if(j<a[i]){
				dp[i][j] = dp[i-1][j];
			}else{
				if(dp[i-1][j-a[i]] or dp[i-1][j]){
					dp[i][j] = 1;
				}else{
					dp[i][j] = 0;
				}
			}
		}
	}

	for(int i=0;i<=n;i++){
		for(int j=0;j<=total;j++){
			cout<<dp[i][j]<<" ";
		}cout<<endl;
	}

	cout<<dp[n][total]<<endl;


	return 0;
	//error();
}
int main(){
	int test = 1;
	//readline(test);//(void)getchar();
	while (test--)solve();return 0;
}