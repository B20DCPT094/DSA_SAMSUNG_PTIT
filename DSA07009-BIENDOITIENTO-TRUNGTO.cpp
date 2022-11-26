#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	int t; cin >> t;
	while (t--){
		string s; cin >> s;
		stack<string>st;
		for (int i=s.size()-1; i>=0; i--){
			if (isalpha(s[i])) st.push(string(1,s[i]));
			else{
				string o1=st.top(); st.pop();
				string o2=st.top(); st.pop();
				string ex="(" + o1 + s[i] + o2 + ")";
				st.push(ex);
			}
		}
		cout << st.top() << "\n";
	}
	return 0;
}
