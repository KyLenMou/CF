/* \/\ \         /\ \                        
\ \ \/'/'  __  __\ \ \         __    ___     
 \ \ , <  /\ \/\ \\ \ \  __  /'__`\/' _ `\   
  \ \ \\`\\ \ \_\ \\ \ \L\ \/\  __//\ \/\ \  
   \ \_\ \_\/`____ \\ \____/\ \____\ \_\ \_\ 
	\/_/\/_/`/___/> \\/___/  \/____/\/_/\/_/ 
			   /\___/                        
	   ___ ___ \/__/      qq: 2729269812     
	 /' __` __`\       email: kkkylen@qq.com 
	 /\ \/\ \/\ \    ___   __  __            
	 \ \ \ \ \ \ \  / __`\/\ \/\ \           
	  \ \ \ \ \ \ \/\ \L\ \ \ \_\ \          
	   \ \ \ \ \ \ \ \____/\ \____/          
		\/_/\/_/\/_/\/___/  \/__*/           
#include<bits/stdc++.h>
#define x first
#define y second
#define endl '\n'
#define int long long
using namespace std;
const int m = 1e9 + 7;
void KyLen() {
	int n;
	cin >> n;
	vector<int> a(n+1),s(n+1);
	auto f = [&] (int a, int k) {
		int res = 1;
		while (k) {
			if (k & 1) res = res * a % m;
			a = a * a % m;
			k >>= 1;
		}
		return res;
	};
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		s[i] = s[i-1] + a[i];
		s[i] %= m;
	}
	int ans = 0;
	for (int i = 1; i < n; i++) {
		ans = (ans + a[i] * (s[n] - s[i] + m) % m) % m;
	}
	int c = n * (n - 1) / 2 % m;
	cout << ans * f(c,m-2) % m << endl;
}

int32_t main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int T; cin >> T; while(T--) KyLen();
	return 0;
}