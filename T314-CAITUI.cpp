#include <bits/stdc++.h>
using namespace std;

int a[1005], c[1005], dp[1005][1005];

int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	int t; cin >> t;
	while (t--){
		int n; cin >> n;
		int v; cin >> v;
		for (int i=1; i<=n; i++) cin >> a[i];
		for (int i=1; i<=n; i++) cin >> c[i];
		for (int i=0; i<=n; i++) dp[i][0]=0;
		for (int i=1; i<=v; i++) dp[0][i]=0;
		for (int i=1; i<=n; i++){
			for (int j=1; j<=v; j++){
				dp[i][j]=dp[i-1][j];
				if (j>=a[i]) dp[i][j]=max(dp[i-1][j-a[i]]+c[i],dp[i-1][j]);
			}
		}
		cout << dp[n][v] << endl;
	}
	return 0;
}
