#include <bits/stdc++.h>
using namespace std;

int n;
vector<string>v;

void sieve(){
	queue<string>q;
	q.push("6");
	q.push("8");
	while (1){
		string top = q.front(); q.pop();
		if (top.size()>n) break;
		v.push_back(top);
		q.push(top+"6");
		q.push(top+"8");
	}
}

int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	int t; cin >> t;
	while (t--){
		v.clear();
		cin >> n;
		sieve();
		cout << v.size() << endl;
		for (int i=0; i<v.size(); i++) cout << v[i] << " ";
		cout << endl;
	}
	return 0;
}
