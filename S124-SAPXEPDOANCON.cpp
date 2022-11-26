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
    	int n; cin >> n;
    	int a[n], l[n], r[n];
    	f0 (i,n) cin >> a[i];
    	l[0] = a[0]; r[n - 1] = a[n - 1];
    	for (int i = 1; i < n; ++i){
    		if (a[i] > l[i - 1]) l[i] = a[i];
    		else l[i] = l[i - 1];
    	}
    	for (int i = n - 2; i >= 0; --i){
    		if (a[i] < r[i + 1]) r[i] = a[i];
    		else r[i] = r[i + 1];
    	}
    	vi v;
    	for (int i = 0; i < n - 1; ++i){
    		if (l[i] <= r[i + 1]) v.pb(i + 1);
    	}
    	cout << sz(v); el;
    	for (int x : v) cout << x << ' ';
    	el;
    }
    return 0;
}