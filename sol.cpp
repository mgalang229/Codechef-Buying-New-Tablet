#include <bits/stdc++.h>

using namespace std;

void solve(){
	int n, b;
	cin >> n >> b;
	long int w[100], h[100], p[100];
	for(int i = 0; i < n; i++){
		cin >> w[i] >> h[i] >> p[i];
	}
	long int mx = 0, ans = 0;
	bool ok = false;
	for(int i = 0; i < n; i++){
		if(w[i] * h[i] > mx && b >= p[i]){
			mx = w[i] * h[i];
		}
		if(b >= p[i] && w[i] * h[i] == mx){
			ans = w[i] * h[i];
			ok = true;
		}
	}
	if(!ok) cout << "no tablet";
	else cout << ans;
	cout << "\n";
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int t;
	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}