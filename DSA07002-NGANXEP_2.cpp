#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	int t; cin >> t;
	stack<int>st;
	while (t--){
		string s; cin >> s;
		if (s=="PUSH"){
			int x; cin >> x;
			st.push(x);
		}
		if (s=="PRINT"){
			if (st.empty()) cout << "NONE\n";
			else{
				cout << st.top() << endl;
			}
		}
		if (s=="POP" && st.size()>0) st.pop();
	}
	return 0;
}
