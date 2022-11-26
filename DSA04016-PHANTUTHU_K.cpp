#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<pii> vii;
typedef vector<pll> vll;
typedef vector<ll> vl;
typedef vector<vl> vvl;

#define ms(s,n) memset(s,n,sizeof(s))
#define all(a) a.begin(),a.end()
#define sz(a) int((a).size())
#define f0(i,n) for (int i=0; i<n; i++)
#define f1(i,n) for (int i=1; i<=n; i++)
#define FastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define TC() int t; cin >> t; while (t--)
#define el cout << "\n"
#define pb push_back
#define pf push_front
#define fi first
#define se second
#define maxn 

const int MOD = (int) 1e9+7;

void FileIO(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}

int main(){
    FileIO();
    FastIO;
    TC(){
    	int m, n, k; cin >> m >> n >> k;
    	vi a(m), b(n), v;
    	f0 (i,m) cin >> a[i];
    	f0 (i,n) cin >> b[i];
    	int i = 0, j = 0;
    	while (i < m && j < n){
    		if (a[i] <= b[j]){
    			v.pb(a[i]); ++i;
    		}else{
    			v.pb(b[j]); ++j;
    		}
    	}
    	while (i < m){
    		v.pb(a[i]); ++i;
    	}
    	while (j < n){
    		v.pb(b[j]); ++j;
    	}
    	cout << v[k - 1]; el;
    }
    return 0;
}