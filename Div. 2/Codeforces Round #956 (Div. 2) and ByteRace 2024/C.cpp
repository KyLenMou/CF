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
    vector<int> a(n+1),b(n+1),c(n+1);
    vector<int> aa(n+2),bb(n+2),cc(n+2);
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        sum += a[i];
        a[i] += a[i-1];
    }
    for (int i = 1; i <= n; i++) {
        cin >> b[i];
        b[i] += b[i-1];
    }
    for (int i = 1; i <= n; i++) {
        cin >> c[i];
        c[i] += c[i-1];
    }
    for (int i = 1; i <= n; i++) {
        aa[i] = aa[i-1] + a[n-i+1];
        bb[i] = bb[i-1] + b[n-i+1];
        cc[i] = cc[i-1] + c[n-i+1];
    }
    sum = (sum + 2) / 3;
    auto f = [&] (vector<int> s1, vector<int> s2, vector<int> s3) {
        int l = 1, r = n;
        while (l < r) {
            int mid = (l + r) >> 1;
            if (s1[mid] < sum) l = mid + 1;
            else r = mid;
        }
        if (s1[l] < sum) return false;
        int L = l;
        l = 1, r = n;
        while (l < r) {
            int mid = l + r + 1 >> 1;
            if (s3[n] - s3[mid-1] < sum) r = mid - 1;
            else l = mid;
        }
        if (s3[n] - s3[l-1] < sum) return false;
        int R = l;
        int num = s2[R-1] - s2[L];
        if (num < sum) return false;
        if (s1 == a) cout << 1 << ' ' << L << ' ';
        if (s2 == a) cout << L + 1 << ' ' << R - 1 << ' ';
        if (s3 == a) cout << R << ' ' << n << ' ';
        if (s1 == b) cout << 1 << ' ' << L << ' ';
        if (s2 == b) cout << L + 1 << ' ' << R - 1 << ' ';
        if (s3 == b) cout << R << ' ' << n << ' ';
        if (s1 == c) cout << 1 << ' ' << L << ' ';
        if (s2 == c) cout << L + 1 << ' ' << R - 1 << ' ';
        if (s3 == c) cout << R << ' ' << n << ' ';
        cout << endl;
        return true;
    };
    if (f(a,b,c)) return;
    if (f(a,c,b)) return;
    if (f(b,a,c)) return;
    if (f(b,c,a)) return;
    if (f(c,a,b)) return;
    if (f(c,b,a)) return;
    cout << -1 << endl;
}

int32_t main() {
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int T; cin >> T; while(T--) KyLen();
    return 0;
}