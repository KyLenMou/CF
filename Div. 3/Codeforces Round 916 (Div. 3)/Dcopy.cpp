#include<bits/stdc++.h>
#define x first
#define y second
#define endl '\n'
// #define int long long
#define ll long long
#define pq(x) priority_queue<x,vector<x>,greater<x>>
#define PQ(x) priority_queue<x>
using namespace std;
typedef pair<int,int> PII;

void solve() {
    auto f = [&](auto self, int a) {
        cout << a << ' ';
        if (a == 0) return 0;
        else return self(self, a-1);
    };
    f(f,3);
}

int32_t main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int T;
	cin >> T;
	while(T--) solve();
	return 0;
}
// #include <bits/stdc++.h>

// using namespace std;
// using i64 = long long;

// void solve() {
//     int n;
//     cin >> n;

//     vector<int> a(n), b(n), c(n);
//     for (int i = 0; i < n; i++) {
//         cin >> a[i];
//     }
//     for (int i = 0; i < n; i++) {
//         cin >> b[i];
//     }
//     for (int i = 0 ;i < n; i++) {
//         cin >> c[i];
//     }

//     vector<int> o1(n), o2(n), o3(n);
//     iota(o1.begin(), o1.end(), 0);
//     iota(o2.begin(), o2.end(), 0);
//     iota(o3.begin(), o3.end(), 0);
//     ranges::sort(o1, [&](int x, int y) {
//         return a[x] < a[y];
//     });
//     ranges::sort(o2, [&](int x, int y) {
//         return b[x] < b[y];
//     });
//     ranges::sort(o3, [&](int x, int y) {
//         return c[x] < c[y];
//     });
//     auto get = [&](int x, int y, int z) -> int {
//         int idx1 = 0, idx2 = 0, idx3 = 0;
//         for (int i = 0; i < n; i++) {
//             if (o1[i] == x) {
//                 idx1 = o1[i];
//                 break;
//             }
//         }
//         for (int i = 0; i < n; i++) {
//             if (o2[i] == y) {
//                 idx2 = o2[i];
//                 break;
//             }
//         }
//         for (int i = 0; i < n; i++) {
//             if (o3[i] == z) {
//                 idx3 = o3[i];
//                 break;
//             }
//         }
//         if (idx1 == idx2 || idx1 == idx3 || idx2 == idx3) {
//             return -1;
//         }
//         return a[idx1] + b[idx2] + c[idx3];
//     };
//     int ans = 0;
//     for (int i = n - 1; i >= n - 3; i--) {
//         for (int j = n - 1; j >= n - 3; j--) {
//             for (int k = n - 1; k >= n - 3; k--) {
//                 ans = max(ans, get(o1[i], o2[j], o3[k]));
//             }
//         }
//     }
//     cout << ans << "\n";
// }
// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(0), cout.tie(0);

//     int t;
//     cin >> t;
    
//     while (t--) {
//         solve();
//     }
//     return 0;
// }
