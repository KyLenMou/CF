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

void KyLen() {
	int n;
	cin >> n;
	string s;
	vector<int> a(n+1),vis(n+1),ans(n+1);
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	cin >> s;
	s = "?" + s;

	for (int i = 1; i <= n; i++) {
		if (vis[i]) continue;
		vector<int> tmp;
		tmp.push_back(i);
		vis[i] = 1;
		int cnt = s[i] == '0';
		int t = a[i];
		while (t != i) {
			cnt += s[t] == '0';
			vis[t] = 1;
			tmp.push_back(t);
			t = a[t];
		}
		for (auto num : tmp) {
			ans[num] = cnt;
		}
	}
	for (int i = 1; i <= n; i++) {
		cout << ans[i] << ' ';
	}
	cout << endl;
}

int32_t main() {
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int T; cin >> T; while(T--) KyLen();
    return 0;
}