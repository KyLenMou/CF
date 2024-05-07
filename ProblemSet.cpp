// 1792A
// #include<bits/stdc++.h>
// #define x first
// #define y second
// #define IOS ios::sync_with_stdio(false), cin.tie(0), cout.tie(0) 
// #define endl '\n'
// #define ll long long
// #define pq(x) priority_queue<x,vector<x>,greater<x>>
// #define PQ(x) priority_queue<x>
// using namespace std;
// typedef pair<int,int> PII;

// const int N = 0;

// void solve(){
// 	int n;
//     cin >> n;
//     vector<int> v(n);
//     for (auto &i : v) cin >> i;
//     sort(v.begin(),v.end());
//     int res = 0;
//     int p = 0;
//     while (p < n)
//     {
//         if (v[p] == 1) res++,p++;
//         else break;
//     }
//     ++res /= 2;
//     res += n - p;
//     cout << res << endl;
// }

// int main()
// {
// 	IOS;
// 	int T;
// 	cin >> T;
// 	while(T--) solve();
// 	return 0;
// }

//1791F
// #include<bits/stdc++.h>
// #define x first
// #define y second
// #define IOS ios::sync_with_stdio(false), cin.tie(0), cout.tie(0) 
// #define endl '\n'
// #define ll long long
// #define pq(x) priority_queue<x,vector<x>,greater<x>>
// #define PQ(x) priority_queue<x>
// using namespace std;
// typedef pair<int,int> PII;

// const int N = 0;

// void solve(){
//     int n,q;
//     cin >> n >> q;
//     vector<int> v(n+1);
//     set<int> s;
//     for (int i = 1; i <= n; i++) 
//     {
//         cin >> v[i];
//         if (v[i] > 9) s.insert(i);
//     }

//     auto f = [&] (int x) {
//         int res = 0; 
//         while (x)
//         {
//             res += x % 10;
//             x /= 10;
//         }
//         return res; 
//     };

//     while (q--)
//     {
//         int C;
//         cin >> C;
//         if (C & 1)
//         {
//             int l,r;
//             cin >> l >> r;
//             auto t = s.lower_bound(l);
//             while (s.size() && *t <= r && t != s.end())
//             {
//                 v[*t] = f(v[*t]);
//                 // auto temp = t;
//                 // if (v[*t] <= 9) s.erase(*t);
//                 // t = temp++;
//                 int temp = *t;
//                 s.erase(*t);
//                 if (v[temp] > 9) s.insert(temp);
//                 t++;
//             }
            
//             // while (s.size())
//             // {
//             //     auto it = s.lower_bound(t);
//             //     if (*it > r || it == s.end()) break;
//             //     v[*it] = f(v[*it]);
//             //     //不可以这样删，你把it删了怎么访问*it
//             //     // if (v[*it] <= 9) s.erase(it);
//             //     // t = *it + 1;
//             //     int temp = *it;
//             //     if (v[temp] <= 9) s.erase(*it);
//             //     t = temp + 1;
//             // }
//         }
//         else 
//         {
//             int x;
//             cin >> x;
//             cout << v[x] << endl;
//         }
//     }
// }

// int main()
// {
// 	IOS;
// 	int T;
// 	cin >> T;
// 	while(T--) solve();
// 	return 0;
// }

// //1804A
// #include<bits/stdc++.h>
// #define x first
// #define y second
// #define IOS ios::sync_with_stdio(false), cin.tie(0), cout.tie(0) 
// #define endl '\n'
// #define ll long long
// #define pq(x) priority_queue<x,vector<x>,greater<x>>
// #define PQ(x) priority_queue<x>
// using namespace std;
// typedef pair<int,int> PII;

// const int N = 0;

// void solve(){
// 	int a,b;
//     cin >> a >> b;
//     a = abs(a),b=abs(b);
//     if (a > b) swap(a,b);
//     cout << a * 2 + (b - a == 0 ? 0 : (b - a) * 2 - 1) << endl;
// }


// int main()
// {
// 	IOS;
// 	int T;
// 	cin >> T;
// 	while(T--) solve();
// 	return 0;
// }   

// //1803B
// #include<bits/stdc++.h>
// #define x first
// #define y second
// #define IOS ios::sync_with_stdio(false), cin.tie(0), cout.tie(0) 
// #define endl '\n'
// #define ll long long
// #define pq(x) priority_queue<x,vector<x>,greater<x>>
// #define PQ(x) priority_queue<x>
// using namespace std;
// typedef pair<int,int> PII;

// const int N = 0;

// void solve(){
// 	int n,k,d,w;
// 	cin >> n >> k >> d >> w;
// 	vector<int> ps(n);
// 	for (auto &i : ps) cin >> i;
// 	int res = 0;
// 	int p = 0;
// 	int minp = ps[0];
// 	while (p < n)
// 	{
// 		int cnt = 1;
// 		minp = ps[p];
// 		p++;
// 		while (p < n && ps[p] - minp <= d + w && cnt < k) p++, cnt++;
// 		res++;
// 	}
// 	cout << res << endl;
// }


// int main()
// {
// 	IOS;
// 	int T;
// 	cin >> T;
// 	while(T--) solve();
// 	return 0;
// }   

// //1821A
// #include <bits/stdc++.h>
// #define x first
// #define y second
// #define IOS ios::sync_with_stdio(false), cin.tie(0), cout.tie(0)
// #define endl '\n'
// #define ll long long
// #define pq(x) priority_queue<x, vector<x>, greater<x>>
// #define PQ(x) priority_queue<x>
// using namespace std;
// typedef pair<int, int> PII;

// const int N = 0;

// void solve()
// {
//     string s;
//     cin >> s;
//     int cnt = 0;
//     for (auto i : s)
//         if (i == '?')
//             cnt++;
//     if (s[0] == '0')
//     {
//         cout << 0 << endl;

//         return;
//     }
//     if (cnt == 0)
//     {
//         if (s[0] != '0')
//             cout << 1 << endl;
//         else
//             cout << 0 << endl;
//         return;
//     }
//     if (s[0] == '?')
//     {
//         cout << 9;
//         cnt--;
//     }
//     else
//         cout << 1;
//     for (int i = 1; i <= cnt; i++)
//         cout << 0;
//     cout << endl;
// }

// int main()
// {
//     IOS;
//     int T;
//     cin >> T;
//     while (T--)
//         solve();
//     return 0;
// }

// //1826A
// #include<bits/stdc++.h>
// #define x first
// #define y second
// #define IOS ios::sync_with_stdio(false), cin.tie(0), cout.tie(0) 
// #define endl '\n'
// #define ll long long
// #define pq(x) priority_queue<x,vector<x>,greater<x>>
// #define PQ(x) priority_queue<x>
// using namespace std; 
// typedef pair<int,int> PII;

// const int N = 0;

// void solve(){
// 	int n;
//     cin >> n;
//     vector<int> v(n);
//     for (auto &i : v) cin >> i;
//     //枚举骗子数量
//     for (int i = 0; i <= n; i++)
//     {
//         //骗子数量为i时有多少个符合的数量
//         int cnt = 0;
//         for (auto j : v)
//         {
//             if (j > i) cnt++;
//         }
//         //cnt与i相同时即符合
//         if (cnt == i)
//         {
//             cout << cnt << endl;
//             return;
//         }
//     }
//     cout << -1 << endl;

// }

// int main()
// {
// 	IOS;
// 	int T;
// 	cin >> T;
// 	while(T--) solve();
// 	return 0;
// }

// //1826B
// #include<bits/stdc++.h>
// #define x first
// #define y second
// #define IOS ios::sync_with_stdio(false), cin.tie(0), cout.tie(0) 
// #define endl '\n'
// #define ll long long
// #define pq(x) priority_queue<x,vector<x>,greater<x>>
// #define PQ(x) priority_queue<x>
// using namespace std;
// typedef pair<int,int> PII;

// const int N = 0;

// void solve(){
// 	int n;
//     cin >> n;
//     vector<int> v(n);
//     for (auto &i : v) cin >> i;
//     int res = 0;
//     for (int i = 0; i < n / 2; i++)
//     {
//         res = gcd(res, abs(v[i] - v[n - i - 1]));
//     }
//     cout << res << endl;
// }

// int main()
// {
// 	IOS;
// 	int T;
// 	cin >> T;
// 	while(T--) solve();
// 	return 0;
// } 

// //1826C
// #include<bits/stdc++.h>
// #define x first
// #define y second
// #define IOS ios::sync_with_stdio(false), cin.tie(0), cout.tie(0) 
// #define endl '\n'
// #define ll long long
// #define pq(x) priority_queue<x,vector<x>,greater<x>>
// #define PQ(x) priority_queue<x>
// using namespace std;
// typedef pair<int,int> PII;

// const int N = 0;

// void solve(){
// 	int n,m;
//     cin >> n >> m;
//     if (n == 1)
//     {
//         cout << "YES" << endl;
//         return;
//     }
//     //找n的最小素因子
//     auto f = [&](int n)
//     {
//         for (int i = 2; i * i <= n; i++)
//         {
//             if (n % i == 0) return i;
//         }
//         return n;
//     };
//     //如果n的最小素因子d代表n可以被分成均匀d组，每组n/d个
//     //首先d一定是素数
//     //当d>m时，由于d是素数，m个物品肯定会被分完
//     //否则不会被分完
//     cout << (f(n) > m ? "YES" : "NO") << endl;
// }

// int main()
// {
// 	IOS;
// 	int T;
// 	cin >> T;
// 	while(T--) solve();
// 	return 0;
// }

// //1829E
// #include<bits/stdc++.h>
// #define x first
// #define y second
// #define IOS ios::sync_with_stdio(false), cin.tie(0), cout.tie(0) 
// #define endl '\n'
// #define ll long long
// #define pq(x) priority_queue<x,vector<x>,greater<x>>
// #define PQ(x) priority_queue<x>
// using namespace std;
// typedef pair<int,int> PII;

// const int N = 2e6;

// ll f[1510][1510];
// ll ans[N];
// void init()
// {
//     ll idx = 1;
//     for (int i = 1; i <= 1500; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             f[i][j] = idx*idx;
//             if (i > 1) f[i][j] += f[i-1][j-1] + f[i-1][j] - f[i-2][j-1];
//             ans[idx++] = f[i][j];
//         }
//     }
// }

// void solve(){
//     int n;
//     cin >> n;
//     cout << ans[n] << endl;
// }

// int main()
// { 
//     IOS;
//     int T;
//     cin >> T;
//     init();
//     while(T--) solve();
//     return 0;
// }

// //1831B
// #include <bits/stdc++.h>
// #define x first
// #define y second
// #define IOS ios::sync_with_stdio(false), cin.tie(0), cout.tie(0)
// #define endl '\n'
// #define ll long long
// #define pq(x) priority_queue<x, vector<x>, greater<x>>
// #define PQ(x) priority_queue<x>
// using namespace std;
// typedef pair<int, int> PII;

// const int N = 2e5 + 10;
// int a[N], b[N];
// void solve()
// {
//     int n;
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//         cin >> a[i];
//     for (int i = 1; i <= n; i++)
//         cin >> b[i];
//     a[n + 1] = 0;
//     b[n + 1] = 0;
//     unordered_map<int, int> m;
//     int p = 1, res = 0;
//     while (p <= n)
//     {
//         int cnt = 1;
//         while (p <= n && a[p + 1] == a[p])
//             p++, cnt++;
//         m[a[p]] = max(m[a[p]], cnt);
//         p++;
//     }
//     p = 1;
//     while (p <= n)
//     {
//         int cnt = 1;
//         while (p <= n && b[p + 1] == b[p])
//             p++, cnt++;
//         res = max(res, m[b[p]] + cnt);
//         p++;
//     }
//     cout << res << endl;
// }

// int main()
// {
//     IOS;
//     int T;
//     cin >> T;
//     while (T--)
//         solve();
//     return 0;
// }

// //1836B
// #include<bits/stdc++.h>
// #define x first
// #define y second
// #define IOS ios::sync_with_stdio(false), cin.tie(0), cout.tie(0) 
// #define endl '\n'
// #define ll long long
// #define pq(x) priority_queue<x,vector<x>,greater<x>>
// #define PQ(x) priority_queue<x>
// using namespace std;
// typedef pair<int,int> PII;

// const int N = 0;

// void solve(){
// 	ll n,k,g;
//     cin >> n >> k >> g;
//     ll t = (g - 1) / 2;
//     ll num = k * g;
//     if (n * t > num)
//     {
//         cout << num << endl; 
//     }
//     else
//     {
//         ll temp = (num - (n - 1) * t);
//         ll r = temp % g;
//         // cout << r << endl;
//         if (r >= (g + 1) / 2) cout << num - temp - g + r << endl;
//         else cout << (n - 1) * t + r << endl;
        
//     }
// }

// int main()
// {
// 	IOS;
// 	int T;
// 	cin >> T;
// 	while(T--) solve();
// 	return 0;
// } 

// //1838B
// #include <bits/stdc++.h>
// #define x first
// #define y second
// #define IOS ios::sync_with_stdio(false), cin.tie(0), cout.tie(0)
// #define endl '\n'
// #define ll long long
// #define pq(x) priority_queue<x, vector<x>, greater<x>>
// #define PQ(x) priority_queue<x>
// using namespace std;
// typedef pair<int, int> PII;

// const int N = 0;

// void solve()
// {
//     int n;
//     cin >> n;
//     vector<int> v(n + 1);
//     int one, two, three, four;
//     for (int i = 1; i <= n; i++)
//     {
//         cin >> v[i];
//         if (v[i] == 1)
//             one = i;
//         else if (v[i] == 2)
//             two = i;
//         else if (v[i] == n)
//             three = i;
//         else if (v[i] == n - 1)
//             four = i;
//     }
//     if (one < three && three < two || two < three && three < one)
//         cout << "1 1" << endl;
//     else if (one < two && two < three || three < two && two < one)
//         cout << two << ' ' << three << endl;
//     else
//         cout << one << ' ' << three << endl;
// }

// int main()
// {
//     IOS;
//     int T;
//     cin >> T;
//     while (T--)
//         solve();
//     return 0;
// }

// //1842A
// #include<bits/stdc++.h>
// #define x first
// #define y second
// #define IOS ios::sync_with_stdio(false), cin.tie(0), cout.tie(0) 
// #define endl '\n'
// #define ll long long
// #define pq(x) priority_queue<x,vector<x>,greater<x>>
// #define PQ(x) priority_queue<x>
// using namespace std;
// typedef pair<int,int> PII;

// const int N = 0;

// void solve(){
//     int n;
//     cin >> n;
//     vector<int> v(n+1); 
//     vector<int> f(n+1); //前i个最少可以保留多少个
//     vector<int> m(n+1);
//     for (int i = 1; i <= n; i++) 
//     {
//         cin >> v[i];
//         f[i] = i;
//         m[i] = 1e9 + 10;
//     }
//     for (int i = 1; i <= n; i++)
//     { 
//         f[i] = min({f[i],f[i-1]+1, m[v[i]]});
//         m[v[i]] = min(m[v[i]], f[i-1]);
//     }
//     cout << n - f[n] << endl;
// }

// int main()
// {
// 	IOS;
// 	int T;
// 	cin >> T;
// 	while(T--) solve();
// 	return 0;
// }

// // 1843E
// #include<bits/stdc++.h>
// #define x first
// #define y second
// #define IOS ios::sync_with_stdio(false), cin.tie(0), cout.tie(0) 
// #define endl '\n'
// #define ll long long
// #define pq(x) priority_queue<x,vector<x>,greater<x>>
// #define PQ(x) priority_queue<x>
// using namespace std;
// typedef pair<int,int> PII;

// const int N = 0;

// void solve(){
// 	int n,m,Q;
//     cin >> n >> m;
//     vector<PII> e(m); //存区间
//     for (auto &i : e) cin >> i.x >> i.y;
//     cin >> Q;
//     vector<int> q(Q+1); //存m次操作
//     for (int i = 1; i <= Q; i++) cin >> q[i];

//     function<bool(int)> check = [&](int mid)
//     {
//         vector<int> s(n+1); //存前缀和
//         for (int i = 1; i <= mid; i++) s[q[i]] = 1;
//         for (int i = 1; i <= n; i++) s[i] += s[i-1];
//         //遍历每个区间，只要有符合就true 
//         for (auto [l,r] : e)
//         {
//             if (s[r] - s[l-1] > (r - l + 1) / 2) 
//             {
//                 // cout << "mid = " << mid << endl;
//                 // cout << l << ' ' << r << endl; 
//                 // cout << s[r] - s[l-1] << ' ' << (r - l) / 2 << endl;
//                 return true;
//             }
//         }
//         return false;
//     };

//     int l = 1, r = Q + 1;
//     while (l < r)
//     {
//         int mid = l + r >> 1;
//         if (check(mid)) r = mid;
//         else l = mid + 1;
//     }
//     cout << (l <= Q ? l : -1) << endl;
// }

// int main()
// {
// 	IOS;
// 	int T;
// 	cin >> T;
// 	while(T--) solve();
// 	return 0;
// }

// //6A
// #include<bits/stdc++.h>
// #define x first
// #define y second
// #define IOS ios::sync_with_stdio(false), cin.tie(0), cout.tie(0) 
// #define endl '\n'
// #define ll long long
// #define pq(x) priority_queue<x,vector<x>,greater<x>>
// #define PQ(x) priority_queue<x>
// using namespace std;
// typedef pair<int,int> PII;

// const int N = 0;

// void solve(){
// 	int c[4];
//     cin >> c[0] >> c[1] >> c[2] >> c[3];
//     sort(c,c+4);
//     if (c[0] + c[1] > c[2] || c[1] + c[2] > c[3]) cout << "TRIANGLE" << endl;
//     else if (c[0] + c[1] == c[2] || c[1] + c[2] == c[3]) cout << "SEGMENT" << endl;
//     else cout << "IMPOSSIBLE" << endl;
// }

// int main()
// {
// 	IOS;
// 	int T;
//     T = 1;
// 	while(T--) solve();
// 	return 0;
// }

// //1794A
// #include<bits/stdc++.h>
// #define x first
// #define y second
// #define IOS ios::sync_with_stdio(false), cin.tie(0), cout.tie(0) 
// #define endl '\n'
// #define ll long long
// #define pq(x) priority_queue<x,vector<x>,greater<x>>
// #define PQ(x) priority_queue<x>
// using namespace std;
// typedef pair<int,int> PII;

// const int N = 0;

// void solve(){
// 	int n;
//     cin >> n;
//     int temp = n * 2 - 2;
//     vector<string> v;
//     while (temp--)
//     {
//         string t;
//         cin >> t;
//         if (t.size() == n - 1) v.push_back(t);
//     }   
//     // cout << v[0] << ' ' << v[1] << endl;
//     if (v[0].substr(1) == v[1].substr(0,n-2)) v[0] += v[1][n-2];
//     else v[0] = v[1][0] + v[0];
//     // cout << v[0] << endl;
//     for (int i = 0; i < n; i++)
//     {
//         if (v[0][i] != v[0][n - i - 1])
//         {
//             cout << "NO" << endl;
//             return;
//         }
//     }
//     cout << "YES" << endl;
// }

// int main()
// {
// 	IOS;
// 	int T;
// 	cin >> T;
// 	while(T--) solve();
// 	return 0;
// }

// //1794B
// #include<bits/stdc++.h>
// #define x first
// #define y second
// #define IOS ios::sync_with_stdio(false), cin.tie(0), cout.tie(0) 
// #define endl '\n'
// #define ll long long
// #define pq(x) priority_queue<x,vector<x>,greater<x>>
// #define PQ(x) priority_queue<x>
// using namespace std;
// typedef pair<int,int> PII;

// const int N = 0;

// void solve(){
//     int n;
//     cin >> n;
//     vector<int> v(n);
//     for (auto &i : v) cin >> i; 
//     int st = 0;
//     for (int i = 1; i < n; i++)
//     {
//         if (v[i] % v[i-1] == 0)
//         {
//             if (v[i-1] == 1)
//             {
//                 v[i-1] = 3;
//                 continue;
//             }
//             v[i+st-1]++;
//             st = (st ? 0 : 1);
//         }
//     }
//     for (auto &i : v) cout << i << ' ';
//     cout << endl;
// }

// int main()
// {
// 	IOS;
// 	int T;
// 	cin >> T;
// 	while(T--) solve();
// 	return 0;
// }

// //1809B
// #include<bits/stdc++.h>
// #define x first
// #define y second
// #define IOS ios::sync_with_stdio(false), cin.tie(0), cout.tie(0) 
// #define endl '\n'
// #define ll long long
// #define pq(x) priority_queue<x,vector<x>,greater<x>>
// #define PQ(x) priority_queue<x>
// using namespace std;
// typedef pair<int,int> PII;

// const int N = 0;

// void solve(){
// 	ll n;
//     cin >> n;
//     ll l = 0, r = 1e9;

//     while (l < r)
//     {
//         ll mid = l + r >> 1;
//         if (mid * mid >= n) r = mid;
//         else l = mid + 1;
//     }
//     cout << l - 1 << endl; 

// }

// int main()
// {
// 	IOS;
// 	int T;
// 	cin >> T;
// 	while(T--) solve();
// 	return 0;
// }

// //1808A
// #include<bits/stdc++.h>
// #define x first
// #define y second
// #define IOS ios::sync_with_stdio(false), cin.tie(0), cout.tie(0) 
// #define endl '\n'
// #define ll long long
// #define pq(x) priority_queue<x,vector<x>,greater<x>>
// #define PQ(x) priority_queue<x>
// using namespace std;
// typedef pair<int,int> PII;

// const int N = 0;

// void solve(){
// 	int l,r;
//     cin >> l >> r;
//     int res = 0;

//     auto f = [&](int x)
//     {
//         int l = 0, r = 9;
//         while (x)
//         {
//             l = max(l,x%10);
//             r = min(r,x%10);
//             x /= 10;
//         }
//         return abs(l-r);
//     };
//     int ans = l;
//     for (int i = 0; i <= 100; i++)
//     {
//         if (l > r) break;
//         int t = f(l);
//         // cout << t << " " << l << endl;
//         if (t > res)
//         {
//             res = t;
//             ans = l;
//         }
//         l++;
//     }
//     // cout << res << endl;
//     cout << ans << endl;
// }

// int main()
// {
// 	IOS;
// 	int T;
// 	cin >> T;
// 	while(T--) solve();
// 	return 0;
// }

// //1808B
// #include<bits/stdc++.h>
// #define x first
// #define y second
// #define IOS ios::sync_with_stdio(false), cin.tie(0), cout.tie(0) 
// #define endl '\n'
// #define int long long
// #define pq(x) priority_queue<x,vector<x>,greater<x>>
// #define PQ(x) priority_queue<x>
// using namespace std;
// typedef pair<int,int> PII;

// const int N = 0;

// void solve(){
// 	int n,m;
//     cin >> n >> m;
//     vector<vector<int>> v(m);
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             int t;
//             cin >> t;
//             v[j].push_back(t);
//         }
//     }
//     for (int i = 0; i < m; i++) 
//     {
//         sort(v[i].begin(),v[i].end());
//     }    
//     int res = 0;
//     for (auto vv : v)
//     {
//         vector<int> vvv;
//         for (int i = 1; i < n; i++)
//         {
//             vvv.push_back(vv[i] - vv[i-1]);
//         }
//         // for (auto j : vvv) cout << j << ' ';
//         // cout << endl;
//         int s = vvv.size();
//         vector<int> p(s);
//         // cout << s << endl;
//         for (int i = 0; i < s / 2; i++)
//         {
//             p[i] = (s - i) * (i + 1);
//             p[s - i - 1] = p[i];
//         }
//         if (s & 1) p[s/2] = (s - (s / 2)) * (s / 2 + 1);
        
//         for (int i = 0; i < n - 1; i++)
//         {
//             res += p[i] * vvv[i];
//         }
//         // cout << endl;
//     }
//     cout << res << endl;
// }

// signed main()
// {
// 	IOS;
// 	int T;
// 	cin >> T;
// 	while(T--) solve();
// 	return 0;
// }

// //1799A
// #include<bits/stdc++.h>
// #define x first
// #define y second
// #define IOS ios::sync_with_stdio(false), cin.tie(0), cout.tie(0) 
// #define endl '\n'
// #define ll long long
// #define pq(x) priority_queue<x,vector<x>,greater<x>>
// #define PQ(x) priority_queue<x>
// using namespace std;
// typedef pair<int,int> PII;

// const int N = 0;

// void solve(){
//     int n,m;
//     cin >> n >> m;
//     vector<int> p(n+1,-1);
//     set<int> s;
//     int idx = n;
//     for (int i = 1; i <= m; i++)
//     {
//         int a;
//         cin >> a;
//         if (!s.count(a) && idx > 0)
//         {
//             s.insert(a);
//             p[idx--] = i;
//         }
//     }
//     for (int i = 1; i <= n; i++) cout << p[i] << ' ';
//     cout << endl;
// }

// int main()
// {
// 	IOS;
// 	int T;
// 	cin >> T;
// 	while(T--) solve();  
// 	return 0;  
// }

// //1799B
// #include<bits/stdc++.h>
// #define x first
// #define y second
// #define IOS ios::sync_with_stdio(false), cin.tie(0), cout.tie(0) 
// #define endl '\n'
// #define ll long long
// #define pq(x) priority_queue<x,vector<x>,greater<x>>
// #define PQ(x) priority_queue<x>
// using namespace std;
// typedef pair<int,int> PII;

// const int N = 0;

// void solve(){
//     int n;
//     cin >> n;
//     vector<int> v(n+1);
//     bool flag = false;
//     unordered_set<int> sss;
//     for (int i = 1; i <= n; i++) 
//     {
//         cin >> v[i];
//         if (v[i] == 1) flag = true;
//         sss.insert(v[i]);
//     }
//     if (sss.size() == 1)
//     {
//         cout << 0 << endl;
//         return;
//     }
//     if (flag)
//     {
//         cout << -1 << endl;
//         return;
//     }
//     int t = n * 30;
//     int cnt = 0;
//     vector<PII> res;
//     while (t--)
//     {
//         double maxvv = 0, minvv = 1e9;
//         int maxi,mini;
//         for (int i = 1; i <= n; i++)
//         {
//             if (v[i] > maxvv)
//             {
//                 maxvv = v[i];
//                 maxi = i;
//             }
//             if (v[i] < minvv)
//             {
//                 minvv = v[i];
//                 mini = i;
//             }
//             // cout << maxvv << ' ' << minvv << endl;
//         }
//         if (maxvv == minvv) break;
//         cnt++;
//         res.push_back({maxi,mini});
//         v[maxi] = ceil(maxvv / minvv);
//     }
//     cout << cnt << endl;
//     for (auto [x,y] : res) cout << x << ' ' << y << endl;

// }

// int main()
// {
// 	IOS;
// 	int T;
// 	cin >> T;    
// 	while(T--) solve();      
// 	return 0;
// }  

// //1794B
// #include<bits/stdc++.h>
// #define x first
// #define y second
// #define IOS ios::sync_with_stdio(false), cin.tie(0), cout.tie(0) 
// #define endl '\n'
// #define ll long long
// #define pq(x) priority_queue<x,vector<x>,greater<x>>
// #define PQ(x) priority_queue<x>
// using namespace std;
// typedef pair<int,int> PII;

// const int N = 0;

// void solve(){
// 	int n;
//     cin >> n;
//     vector<int> v(n);
//     for (auto &i : v) cin >> i;
//     bool flag = true;
//     while (flag)
//     {
//         flag = false;
//         for (int i = 1; i < n; i++)
//         {
//             if (v[i] % v[i-1] == 0) 
//             {
//                 v[i]++;
//                 flag = true;
//             }
//         }
//     }
//     for (auto i : v) cout << i << ' ';
//     cout << endl;
// }

// int main()
// {
// 	IOS;
// 	int T;
// 	cin >> T;
// 	while(T--) solve();
// 	return 0;
// }

// //1816A
// #include<bits/stdc++.h>
// #define x first
// #define y second
// #define IOS ios::sync_with_stdio(false), cin.tie(0), cout.tie(0) 
// #define endl '\n'
// #define ll long long
// #define pq(x) priority_queue<x,vector<x>,greater<x>>
// #define PQ(x) priority_queue<x>
// using namespace std;
// typedef pair<int,int> PII;

// const int N = 0;

// void solve(){
// 	int a,b;
//     cin >> a >> b; 
//     if (gcd(a,b) == 1) cout << 1 << endl << a << ' ' << b << endl;
//     else 
//     {
//         int t = 1;
//         while (gcd(a - t,b - 1) != 1) t++;
//         cout << 2 << endl << t << " 1\n" << a << ' ' << b << endl;
//     }
// }

// int main()
// {
// 	IOS;
// 	int T;
// 	cin >> T;
// 	while(T--) solve();
// 	return 0;
// }

// //1816B 贪心,dp
// #include<bits/stdc++.h>
// #define x first
// #define y second
// #define IOS ios::sync_with_stdio(false), cin.tie(0), cout.tie(0) 
// #define endl '\n'
// #define ll long long
// #define pq(x) priority_queue<x,vector<x>,greater<x>>
// #define PQ(x) priority_queue<x>
// using namespace std;
// typedef pair<int,int> PII;

// const int N = 0;

// void solve(){
//     int n;
//     cin >> n;
//     int v[3][n+1];
//     v[1][1] = n * 2;
//     v[2][n] = n * 2 - 1;
//     int t = 1;
//     for (int i = 1; i <= n; i++)
//         if (i & 1) v[2][i] = t++;
//         else v[1][i] = t++;
//     for (int i = 2; i < n; i++)
//         if (i & 1) v[1][i] = t++;
//         else v[2][i] = t++;
//     for (int i = 1; i <= n; i++) cout << v[1][i] << ' ';
//     cout << endl;
//     for (int i = 1; i <= n; i++) cout << v[2][i] << ' ';
//     cout << endl;
// }

// int main()
// {
// 	IOS;
// 	int T;
// 	cin >> T;
// 	while(T--) solve();
// 	return 0;
// } 

// //1816C 性质,数学
// #include<bits/stdc++.h>
// #define x first
// #define y second
// #define IOS ios::sync_with_stdio(false), cin.tie(0), cout.tie(0) 
// #define endl '\n'
// #define ll long long
// #define pq(x) priority_queue<x,vector<x>,greater<x>>
// #define PQ(x) priority_queue<x>
// using namespace std;
// typedef pair<int,int> PII;

// const int N = 0;

// void solve(){
//     int n;
//     cin >> n;
//     vector<ll> v(n+1);
//     for (int i = 1; i <= n; i++) cin >> v[i];
//     for (int i = 2; i < n; i++)
//     {
//         v[i+1] -= v[i] - v[i-1];
//         v[i] = v[i-1];
//     }
//     if (v[n] >= v[n-1] || n & 1) cout << "YES" << endl;
//     else cout << "NO" << endl;
// }

// int main()
// {
// 	IOS;
// 	int T;
// 	cin >> T;
// 	while(T--) solve();
// 	return 0;
// } 

//1798D 性质构造
// #include<bits/stdc++.h>
// #define x first
// #define y second
// #define IOS ios::sync_with_stdio(false), cin.tie(0), cout.tie(0) 
// #define endl '\n'
// #define ll long long
// #define pq(x) priority_queue<x,vector<x>,greater<x>>
// #define PQ(x) priority_queue<x>
// using namespace std;
// typedef pair<int,int> PII;

// const int N = 0;

// void solve(){
// 	int n;
//     cin >> n;
//     vector<ll> v(n);
//     for (auto &i : v) cin >> i;
//     sort(begin(v),end(v));
//     if (v[n-1] == 0)
//     {
//         cout << "NO" << endl;
//         return;
//     }
//     vector<int> res;
//     ll num = 0;
//     for (int i = 0, j = n - 1; i <= j;)
//     {
//         if (num >= 0)
//         {
//             res.push_back(v[i]);
//             num += v[i++];
//         }
//         else
//         {
//             res.push_back(v[j]);
//             num += v[j--];
//         }
//     }
//     cout << "YES" << endl; 
//     for (auto i : res) cout << i << ' ';
//     cout << endl;
// }

// int main()
// {
// 	IOS;
// 	int T;
// 	cin >> T;
// 	while(T--) solve();
// 	return 0;
// }

// //1814A
// #include<bits/stdc++.h>
// #define x first
// #define y second
// #define IOS ios::sync_with_stdio(false), cin.tie(0), cout.tie(0) 
// #define endl '\n'
// #define ll long long
// #define pq(x) priority_queue<x,vector<x>,greater<x>>
// #define PQ(x) priority_queue<x>
// using namespace std;
// typedef pair<int,int> PII;

// const int N = 0;

// void solve(){
// 	ll n,k;
//     cin >> n >> k;
//     ll t = 2;
//     if (k == 1) cout << "YES" << endl;
//     else
//     {
//         if (n % 2 == 0)
//         {
//             cout << "YES" << endl;
//             return;
//         } 
//         n -= k;
//         if (n % t == 0) cout << "YES" << endl;
//         else cout << "NO" << endl; 
//     }
// }

// int main()
// {
// 	IOS;
// 	int T;
// 	cin >> T;
// 	while(T--) solve();
// 	return 0;
// }

// //1840D 二分答案
// #include<bits/stdc++.h>
// #define x first
// #define y second
// #define IOS ios::sync_with_stdio(false), cin.tie(0), cout.tie(0) 
// #define endl '\n'
// #define ll long long
// #define pq(x) priority_queue<x,vector<x>,greater<x>>
// #define PQ(x) priority_queue<x>
// using namespace std;
// typedef pair<int,int> PII;

// const int N = 0;

// void solve(){
//     int n;
//     cin >> n;
//     vector<int> s(n+1);
//     for (int i = 1; i <= n; i++) cin >> s[i];
//     sort(begin(s)+1,end(s));
//     auto check = [&](int u) 
//     {
//         int l1,l2;
//         int l = 1, r = n;
//         while (l < r)
//         {
//             int mid = l + r + 1 >> 1;
//             if (s[mid]-s[1] <= u * 2) l = mid;
//             else r = mid - 1;
//         }
//         l1 = l;  
//         l = 1, r = n;  
//         while (l < r)
//         {
//             int mid = l + r >> 1;
//             if (s[n]-s[mid] <= u * 2) r = mid;
//             else l = mid + 1;
//         }
//         l2 = l;
//         // if (l1 > l2) return false;
//         // if (s[l2]-s[l1-1] > u * 2) return false;
//         // return true;

//         // int l = 1, r = n;
//         // while (s[l]-s[1] <= u * 2 && l <= n) l++;
//         // while (s[n]-s[r] <= u * 2 && r >= 1) r--;
//         // cout << u << ' ' << l1 << ' ' << l2 << endl;
//         if (l1 >= l2 || s[l2-1] - s[l1+1] <= u * 2) return true; 
//         return false;
//     };
//     int l = 0, r = 1e9 + 10;
//     while (l < r)
//     {
//         int mid = (l + r) >> 1; 
//         if (check(mid)) r = mid;
//         else l = mid + 1;
//     }
//     cout << l << endl;
// }

// int main()
// {
// 	IOS;
// 	int T;
// 	cin >> T;
// 	while(T--) solve();
// 	return 0;
// }

// //1838C
// #include<bits/stdc++.h>
// #define x first
// #define y second
// #define IOS ios::sync_with_stdio(false), cin.tie(0), cout.tie(0) 
// #define endl '\n'
// #define ll long long
// #define pq(x) priority_queue<x,vector<x>,greater<x>>
// #define PQ(x) priority_queue<x>
// using namespace std;
// typedef pair<int,int> PII;

// const int N = 0;

// void solve(){
// 	int n,m;
//     cin >> n >> m;
//     bool flag = false;
//     if (n < m) 
//     {
//         swap(n,m);
//         flag = true;
//     }
//     int g[n+1][m+1];
//     int idx = 1;
//     for (int i = 1; i <= n; i+=2)
//         for (int j = 1; j <= m; j++)
//             g[i][j] = idx++;
//     for (int i = 2; i <= n; i+=2)
//         for (int j = 1; j <= m; j++)
//             g[i][j] = idx++;
//     if (flag)
//     {
//         for (int i = 1; i <= m; i++)
//         {
//             for (int j = 1; j <= n; j++)
//             {
//                 cout << g[j][i] << ' ';
//             }
//             cout << endl;
//         }   
//     }
//     else
//     {
//         for (int i = 1; i <= n; i++)
//         {
//             for (int j = 1; j <= m; j++)
//             {
//                 cout << g[i][j] << ' ';
//             }
//             cout << endl;
//         }   
//     }
//     cout << endl; 
// }

// int main()
// {
// 	IOS;
// 	int T;
// 	cin >> T;
// 	while(T--) solve();
// 	return 0;
// }

// //校赛 前缀和
// #include<bits/stdc++.h>
// using namespace std;

// const int N = 1e5 + 10;

// int s[N];

// int main()
// {
//     int T,n;
//     cin >> T >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         cin >> s[i];
//         s[i] += s[i-1];
//     }
//     while (T--)
//     {
//         int l,r;
//         cin >> l >> r;
//         if (l < r) cout << s[r] - s[l-1] << endl;
//         else cout << s[n] - s[l - 1] + s[r] - s[1-1] << endl;
//     }
// 	return 0;
// } 

// //校赛 植物大战僵尸
// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     vector<int> v(4);
//     for (int i = 1; i <= 3; i++)
//     {
//         for (int j = 1; j <= 9; j++)
//         {
//             int t;
//             cin >> t;
//             if (t != 3) v[i] += t;
//             else 
//             {
//                 if (i & 1) v[i] ++, v[2] ++;
//                 else v[1] ++, v[2] ++, v[3] ++;
//             }
//         }
//     }
//     for (int i = 1; i <= 3; i++) cout << v[i] << endl;
// 	return 0;
// }

// //校赛 红石屏幕
// #include<bits/stdc++.h>
// using namespace std;

// const int N = 0;

// int main()
// {
//     int n;
//     cin >> n;
//     cout << 2 << n;
//     int res = 1;
//     for (int i = 1; i <= n; i++) res *= 2;
//     if (res < 1000) cout << res << endl;
//     else
//     {
//         string s = to_string(res);
//         cout << s.substr(0,3) << endl;
//     }
// 	return 0;
// }

// //校赛 二分
// #include<bits/stdc++.h>
// using namespace std;

// const int N = 1e5 + 10;
// int main()
// {
//     int n;
//     cin >> n;
//     int l = 1, r = N;
//     while (l < r)
//     {
//         int mid = l + r >> 1;
//         if (n <= mid * mid + (mid - 1) * (mid - 1)) r = mid;
//         else l = mid + 1;
//     }
//     cout << l << endl;
// 	return 0;
// } 

// //1809C
// #include<bits/stdc++.h>
// #define x first
// #define y second
// #define IOS ios::sync_with_stdio(false), cin.tie(0), cout.tie(0) 
// #define endl '\n'
// #define ll long long
// #define pq(x) priority_queue<x,vector<x>,greater<x>>
// #define PQ(x) priority_queue<x>
// using namespace std;
// typedef pair<int,int> PII;

// const int N = 0;

// void solve(){
// 	int n,k;
//     cin >> n >> k;
//     function<string(int,int)> f = [&](int n, int k)
//     {
//         if (k == 0) return string("-1 ");
//         else if (k <= n)
//         {
//             string res = "";
//             for (int i = 1; i < k; i++) res += "-1 ";
//             res += "100 ";
//             if (k < n)
//             {
//                 res += "-200 ";
//                 for (int i = 1; i < n - k; i++) res += "-1 ";
//             }
//             // cout << n << ' ' << k << ' ' << res << endl;
//             return res;
//         }   
//         else
//         {
//             return f(n-1,k-n) + "1000 ";
//         }
//     };
//     if (k == 0)
//     {
//         for (int i = 1; i <= n; i++) cout << -1 << ' ';
//         cout << endl;
//     }
//     else cout << f(n,k) << endl;
// }

// int main()
// {
// 	IOS;
// 	int T;
// 	cin >> T;
// 	while(T--) solve();
// 	return 0;
// } 

// //1837D 
// #include<bits/stdc++.h>
// #define x first
// #define y second
// #define IOS ios::sync_with_stdio(false), cin.tie(0), cout.tie(0) 
// #define endl '\n'
// #define ll long long
// #define pq(x) priority_queue<x,vector<x>,greater<x>>
// #define PQ(x) priority_queue<x>
// using namespace std;
// typedef pair<int,int> PII;

// const int N = 0;

// void solve(){
// 	int n;
//     cin >> n;
//     string s;
//     cin >> s;
//     vector<int> v(n+1);
//     for (int i = 0; s[i]; i++)
//     {
//         if (s[i] == '(') v[i+1] = 1;
//         else v[i+1] = -1;
//         v[i+1] += v[i];
//     }
//     vector<int> res(n+1);
//     bool flag[2];
//     flag[0] = flag[1] = false;
//     for (int i = 1; i <= n; i++)
//     {
//         if (v[i] > 0) res[i] = 1,flag[0] = true;
//         else if (v[i] < 0) res[i] = 2,flag[1] = true;
//         else res[i] = res[i-1];
//     }
//     if (v[n] != 0)
//     {
//         cout << -1 << endl;
//     }
//     else
//     {
//         if (flag[0] && flag[1]) cout << 2 << endl;
//         else 
//         {
//             cout << 1 << endl;
//             for (int i = 1; i <= n; i++) cout << 1 << ' ';
//             cout << endl;
//             return; 
//         }
//         for (int i = 1; i <= n; i++) cout << res[i] << ' ';
//         cout << endl;
//     }
// }

// int main()
// {
// 	IOS;
// 	int T;
// 	cin >> T;
// 	while(T--) solve();
// 	return 0;
// }

// //1811C
// #include<bits/stdc++.h>
// #define x first
// #define y second
// #define IOS ios::sync_with_stdio(false), cin.tie(0), cout.tie(0) 
// #define endl '\n'
// #define ll long long
// #define pq(x) priority_queue<x,vector<x>,greater<x>>
// #define PQ(x) priority_queue<x>
// using namespace std;
// typedef pair<int,int> PII;

// const int N = 0;

// void solve(){
// 	int n;
//     cin >> n;
//     int a,t;
//     cin >> a;
//     cout << a << ' ';
//     t = a; 
//     for (int i = 1; i < n - 1; i++)
//     {
//         cin >> a;
//         if (a > t) cout << t << ' ';
//         else cout << a << ' ';
//         t = a;
//     }
//     cout << t << ' ';
//     cout << endl;
// }

// int main()
// {
// 	IOS;
// 	int T;
// 	cin >> T;
// 	while(T--) solve();
// 	return 0;
// } 

// //1796A
// #include<bits/stdc++.h>
// #define x first
// #define y second
// #define IOS ios::sync_with_stdio(false), cin.tie(0), cout.tie(0) 
// #define endl '\n'
// #define ll long long
// #define pq(x) priority_queue<x,vector<x>,greater<x>>
// #define PQ(x) priority_queue<x>
// using namespace std;
// typedef pair<int,int> PII;

// const int N = 0;

// void solve(){
// 	int k;
//     string s;
//     cin >> k >> s; 
//     string a = "FBFFBFFBFBFFBFFBFBFFBFFBFBFFBFFB";
//     if (a.find(s) == a.npos) cout << "NO" << endl;
//     else cout << "YES" << endl;
// }

// int main()
// {
// 	IOS;
// 	int T;
// 	cin >> T;
// 	while(T--) solve();
// 	return 0;
// }

// //1780A
// #include<bits/stdc++.h>
// #define x first
// #define y second
// #define IOS ios::sync_with_stdio(false), cin.tie(0), cout.tie(0) 
// #define endl '\n'
// #define ll long long
// #define pq(x) priority_queue<x,vector<x>,greater<x>>
// #define PQ(x) priority_queue<x>
// using namespace std;
// typedef pair<int,int> PII;

// const int N = 0;

// void solve(){
// 	int n;
//     cin >> n; 
//     vector<vector<int>> v(2); 
//     for (int i = 1; i <= n; i++)
//     {
//         int a;
//         cin >> a;
//         v[a&1].push_back(i);
//     }
//     if (v[1].size() >= 3) cout << "YES" << endl << v[1][0] << ' ' << v[1][1] << ' ' << v[1][2] << endl; 
//     else if (v[1].size() >= 1 && v[0].size() >= 2) cout << "YES" << endl << v[1][0] << ' ' << v[0][0] << ' ' << v[0][1] << endl;
//     else cout << "NO" << endl;
// }

// int main()
// {
// 	IOS;
// 	int T;
// 	cin >> T;
// 	while(T--) solve();
// 	return 0;
// }

// //1821B
// #include<bits/stdc++.h>
// #define x first
// #define y second
// #define IOS ios::sync_with_stdio(false), cin.tie(0), cout.tie(0) 
// #define endl '\n'
// // #define int long long
// #define ll long long
// #define pq(x) priority_queue<x,vector<x>,greater<x>>
// #define PQ(x) priority_queue<x>
// using namespace std;
// typedef pair<int,int> PII;

// const int N = 0;

// void solve(){
// 	int n;
//     cin >> n;
//     vector<int> a(n+1),b(n+1); 
//     for (int i = 1; i <= n; i++) cin >> a[i];
//     for (int i = 1; i <= n; i++) cin >> b[i];

//     int l = 1, r = n;
//     for (int i = 1; i <= n; i++)
//     {
        
//         if (a[i] != b[i])
//         {
//             l = i;
//             break;
//         }
//     }
//     for (int i = n; i >= 1; i--)
//     {
//         if (a[i] != b[i])
//         {
//             r = i;
//             break;
//         }
//     }
//     int ma = 0, mi = 1e9;
//     for (int i = l; i <= r; i++)
//     {
//         ma = max(ma,a[i]);
//         mi = min(mi,a[i]);
//     }
//     a[l] = mi;
//     a[r] = ma;
//     // cout << a[l] << ' ' << a[r] << endl;
//     for (int i = l - 1; i >= 1; i--)
//     {
//         if (a[i] <= a[i+1]) l--;
//         else break;
//     }
//     for (int i = r + 1; i <= n; i++)
//     {
//         // cout << a[i] << ' ' << a[i-1] << endl;
//         if (a[i] >= a[i-1]) r++;
//         else break;
//     }
//     cout << l << ' ' << r << endl;
// }

// int32_t main()
// {
// 	IOS;
// 	int T;
// 	cin >> T;
// 	//T = 1;
// 	while(T--) solve();
// 	return 0;
// }

// //1796B
// #include<bits/stdc++.h>
// #define x first
// #define y second
// #define IOS ios::sync_with_stdio(false), cin.tie(0), cout.tie(0) 
// #define endl '\n'
// // #define int long long
// #define ll long long
// #define pq(x) priority_queue<x,vector<x>,greater<x>>
// #define PQ(x) priority_queue<x>
// using namespace std;
// typedef pair<int,int> PII;

// const int N = 0;

// void solve(){
// 	string a,b;
//     cin >> a >> b; 
//     if (a[0] == b[0]) cout << "Yes\n" << a[0] << "*" << endl; 
//     else if (a.back() == b.back()) cout << "Yes\n" << "*" << a.back() << endl;
//     else
//     {
//         for (int i = 1; a[i]; i++)
//         {
//             string t = a.substr(i-1,2);
//             if (b.find(t) != b.npos) 
//             {
//                 cout << "Yes\n" << "*" << t << "*" << endl;
//                 return;
//             }
//         }
//         cout << "NO" << endl; 
//     }
// }

// int32_t main()
// {
// 	IOS;
// 	int T;
// 	cin >> T;
// 	//T = 1;
// 	while(T--) solve();
// 	return 0;
// }

// //1830A 树的存储 + DP + DFS
// #include<bits/stdc++.h>
// #define x first
// #define y second
// #define IOS ios::sync_with_stdio(false), cin.tie(0), cout.tie(0)
// #define endl '\n'
// // #define int long long
// #define ll long long
// #define pq(x) priority_queue<x,vector<x>,greater<x>>
// #define PQ(x) priority_queue<x>
// using namespace std;
// typedef pair<int,int> PII;

// const int N = 0;

// void solve(){
// 	int n;
//     cin >> n;
//     vector<PII> g[n+1];
//     vector<int> dp(n+1), idx(n+1); 
//     for (int i = 1; i < n; i++)
//     {
//         int a,b;
//         cin >> a >> b;
//         g[a].push_back({b,i});
//         g[b].push_back({a,i});
//     }
//     function<void(int)> dfs = [&](int u)
//     {
//         for (auto [x,y] : g[u])
//         {
//             if (dp[x] == 0)
//             {
//                 dp[x] = dp[u] + (y < idx[u]);
//                 idx[x] = y;
//                 dfs(x);
//             }
//         }
//     };
//     dp[1] = 1;
//     dfs(1);
//     cout << *max_element(begin(dp),end(dp)) << endl;
// }

// int32_t main()
// {
// 	IOS;
// 	int T;
// 	cin >> T;
// 	//T = 1;
// 	while(T--) solve();
// 	return 0;
// } 

// //1805C 二分 缩小区间
// #include<bits/stdc++.h>
// // #define x first
// // #define y second
// #define IOS ios::sync_with_stdio(false), cin.tie(0), cout.tie(0) 
// #define endl '\n'
// // #define int long long
// #define ll long long
// #define pq(x) priority_queue<x,vector<x>,greater<x>>
// #define PQ(x) priority_queue<x>
// using namespace std;
// typedef pair<int,int> PII;

// const int N = 0;    

// void solve(){
// 	int n,m;
//     cin >> n >> m;  
//     vector<int> k(n);
//     vector<array<int,3>> g(m);
//     for (auto &i : k) cin >> i;
//     for (auto &i : g) cin >> i[0] >> i[1] >> i[2];
//     sort(begin(k),end(k));
//     for (auto &[a,b,c] : g) 
//     {
//         auto idx = upper_bound(begin(k),end(k),b) - begin(k);
//         if (idx < n && (k[idx] - b) * (k[idx] - b) < 4 * a * c) cout << "Yes\n" << k[idx] << endl;
//         else if (idx > 0 && (k[idx-1] - b) * (k[idx-1] - b) < 4 * a * c) cout << "Yes\n" << k[idx-1] << endl;
//         else cout << "No" << endl; 
//     }
//     // cout << 1;
// }

// int32_t main()
// {
// 	IOS;
// 	int T;
// 	cin >> T;
// 	//T = 1;
// 	while(T--) solve();
// 	return 0;
// }

// //1773E 离散化
// #include<bits/stdc++.h>
// #define x first
// #define y second
// #define IOS ios::sync_with_stdio(false), cin.tie(0), cout.tie(0) 
// #define endl '\n'
// // #define int long long
// #define ll long long
// #define pq(x) priority_queue<x,vector<x>,greater<x>>
// #define PQ(x) priority_queue<x>
// using namespace std;
// typedef pair<int,int> PII;

// const int N = 0;

// void solve(){
// 	int n;
//     cin >> n;
//     vector<int> a[n+1];
//     unordered_map<int,int> m;
//     vector<int> res;
//     int cnt = 0;
//     for (int i = 1; i <= n; i++)
//     {
//         int mm;
//         cin >> mm;
//         cnt += mm;
//         for (int j = 1; j <= mm; j++)
//         {
//             int b;
//             cin >> b;
//             a[i].push_back(b);
//             res.push_back(b);
//         }
//     } 
//     sort(begin(res),end(res));
//     for (int i = 1; i <= cnt; i++)
//     {
//         m[res[i-1]] = i;
//     }
//     for (int i = 1; i <= n; i++)
//     {
//         for (auto &j : a[i])
//         {
//             j = m[j];
//         }
//     }
//     int sp = 0;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j < a[i].size(); j++)
//         {
//             if (a[i][j] != a[i][j-1] + 1) sp++;
//         }
//     }
//     cout << sp << ' ' << n + sp - 1 << endl;
// }

// int32_t main()
// {
// 	IOS;
// 	int T;
// 	// cin >> T;
// 	T = 1;
// 	while(T--) solve();
// 	return 0;
// }
  
// //1790B
// #include<bits/stdc++.h>
// #define x first
// #define y second
// #define IOS ios::sync_with_stdio(false), cin.tie(0), cout.tie(0) 
// #define endl '\n'
// // #define int long long
// #define ll long long
// #define pq(x) priority_queue<x,vector<x>,greater<x>>
// #define PQ(x) priority_queue<x>
// using namespace std;
// typedef pair<int,int> PII;

// const int N = 0;
// int n, s1, s2;
// vector<int> res;

// void solve() {
// 	res.clear();
// 	int d = s1 - s2;
// 	for (; s2 >= d; s2 -= d)
// 		res.push_back(d);
// 	if (s2) res.push_back(s2);
// 	for (int i = 0; i < res.size() && res.size() + 1 < n;) {
// 		if (res[i] == 1) {
// 		    ++i;
// 		    continue;
// 		}
// 		--res[i];
// 		res.push_back(1);
// 	}
// 	res.push_back(d);
// }

// int32_t main()
// {
// 	IOS;
// 	int T;
// 	cin >> T;
// 	//T = 1;
// 	while(T--) 
//     {
//         cin >> n >> s1 >> s2;
// 		solve();
// 		sort(res.begin(), res.end());
// 		for (int x: res)
//         cout << x << ' ';
// 		cout << endl;
//         solve();
//     }
// 	return 0;
// } 

// //1789B 优雅
// #include<bits/stdc++.h>
// #define x first
// #define y second
// #define IOS ios::sync_with_stdio(false), cin.tie(0), cout.tie(0) 
// #define endl '\n'
// // #define int long long
// #define ll long long
// #define pq(x) priority_queue<x,vector<x>,greater<x>>
// #define PQ(x) priority_queue<x>
// using namespace std;
// typedef pair<int,int> PII;

// const int N = 0;

// void solve(){
// 	int n;
//     cin >> n;
//     string s;
//     cin >> s;
//     int p = 0;
//     while (p < n / 2 && s[p] == s[n-p-1]) p++;
//     while (p < n / 2 && s[p] != s[n-p-1]) p++;
//     while (p < n / 2 && s[p] == s[n-p-1]) p++;
//     if (p == n / 2) cout << "YES" << endl;
//     else cout << "NO" << endl; 
// }

// int32_t main()
// {
// 	IOS;
// 	int T;
// 	cin >> T;
// 	//T = 1;
// 	while(T--) solve();
// 	return 0;
// } 

// //1789A
// #include<bits/stdc++.h>
// #define x first
// #define y second
// #define IOS ios::sync_with_stdio(false), cin.tie(0), cout.tie(0) 
// #define endl '\n'
// // #define int long long
// #define ll long long
// #define pq(x) priority_queue<x,vector<x>,greater<x>>
// #define PQ(x) priority_queue<x>
// using namespace std;
// typedef pair<int,int> PII;

// const int N = 0;

// void solve(){
// 	int n;
//     cin >> n;
//     vector<int> a(n);
//     for (auto &i : a) cin >> i;
//     sort(begin(a),end(a));
//     int g = a[0];
//     for (int i = 1; i < n; i++)
//     {
//         g = gcd(a[i-1],a[i]);
//         if (g < 3) 
//         {
//             cout << "YES" << endl;
//             return;
//         }
//     }
//     cout << "NO" << endl;
// }

// int32_t main()
// {
// 	IOS;
// 	int T;
// 	cin >> T;
// 	//T = 1;
// 	while(T--) solve();
// 	return 0;
// }

// //1001
// #include<bits/stdc++.h>
// #define x first
// #define y second
// #define IOS ios::sync_with_stdio(false), cin.tie(0), cout.tie(0) 
// #define endl '\n'
// // #define int long long
// #define ll long long
// #define pq(x) priority_queue<x,vector<x>,greater<x>>
// #define PQ(x) priority_queue<x>
// using namespace std;
// typedef pair<int,int> PII;

// const int N = 0;

// void solve(){
// 	ll n,m,k;
//     cin >> n >> m >> k;
//     auto qmi = [&](ll a, ll k) {
//         ll res = 1;
//         while (k) {
//             if (k & 1) res = res * a % 998244353;
//             k >>= 1;
//             a = a * a % 998244353;
//         }
//         return res;
//     };
//     if (k >= n) cout << m % 998244353 << endl;
//     else
//     {
//         cout << qmi(m, n - k) << endl;
//     }
// }

// int32_t main()
// {
// 	IOS;
// 	int T;
// 	cin >> T;
// 	//T = 1;
// 	while(T--) solve();
// 	return 0;
// } 

// //1787A
// #include<bits/stdc++.h>
// #define x first
// #define y second
// #define IOS ios::sync_with_stdio(false), cin.tie(0), cout.tie(0) 
// #define endl '\n'
// // #define int long long
// #define ll long long
// #define pq(x) priority_queue<x,vector<x>,greater<x>>
// #define PQ(x) priority_queue<x>
// using namespace std;
// typedef pair<int,int> PII;

// const int N = 0;

// void solve(){
// 	int n;
//     cin >> n;
//     if (n & 1) cout << -1 << endl;
//     else cout << 1 << ' ' << n / 2 << endl;
// }

// int32_t main()
// {
// 	IOS;
// 	int T;
// 	cin >> T;
// 	//T = 1;
// 	while(T--) solve();
// 	return 0;
// }

// //1787B
// #include<bits/stdc++.h>
// #define x first
// #define y second
// #define IOS ios::sync_with_stdio(false), cin.tie(0), cout.tie(0) 
// #define endl '\n'
// // #define int long long
// #define ll long long
// #define pq(x) priority_queue<x,vector<x>,greater<x>>
// #define PQ(x) priority_queue<x>
// using namespace std;
// typedef pair<int,int> PII;

// const int N = 0;

// void solve(){
// 	int n;
//     cin >> n; 
//     vector<PII> v;
//     for (int i = 2; i <= n / i; i++)
//     {
//         if (n % i == 0)
//         {
//             n /= i;
//             v.push_back({1,i});
//             while (n % i == 0)
//             {
//                 v.back().x++;
//                 n /= i;
//             }
//         }
//     }
//     if (n > 1) v.push_back({1,n});
//     sort(begin(v),end(v));
//     int cur = 1, res = 0, last = 0;
//     for (auto [x,y] : v) cur *= y;
//     for (auto [x,y] : v)
//     {
//         res += (x - last) * cur;
//         last = x;
//         cur /= y;
//     }
//     cout << res << endl;
// }

// int32_t main()
// {
// 	IOS;
// 	int T;
// 	cin >> T;
// 	//T = 1;
// 	while(T--) solve();
// 	return 0;
// }

// //1786A2
// #include<bits/stdc++.h>
// #define x first
// #define y second
// #define IOS ios::sync_with_stdio(false), cin.tie(0), cout.tie(0) 
// #define endl '\n'
// // #define int long long
// #define ll long long
// #define pq(x) priority_queue<x,vector<x>,greater<x>>
// #define PQ(x) priority_queue<x>
// using namespace std;
// typedef pair<int,int> PII;

// const int N = 0;

// void solve(){
// 	int n;
//     cin >> n;
//     int aw = 0, ab = 0, bw = 0, bb = 0, st = 0; 
// 	for (int i = 0; n > 0; i++) 
//     {
// 		int crd = min(n, i+1);
// 		n -= crd;
 
// 		int w = 0, b = 0;
// 		if (crd % 2 == 0) 
//         {
// 			w = b = crd/2;
// 		}
//         else 
//         {
// 			w = b = crd/2;
// 			if (st) b++; else w++;
// 			st = 1-st;
// 		}
 
// 		if ((i % 4 == 0) || (i % 4 == 3)) 
//         {
// 			aw += w; ab += b;
// 		} 
//         else 
//         {
// 			bw += w; bb += b;
// 		}
// 	}
// 	cout << aw << ' ' << ab << ' ' << bw << ' ' << bb << '\n';
//     // int cnt = 0;
//     // int p = 1; 
//     // vector<PII> v(2);
//     // int st = 1;
//     // while (p <= n)
//     // {
//     //     int l = p, r = p + cnt;
//     //     if (l & 1 && r & 1) v[st].x += (l - r) / 2 + 1, v[st].y += (l - r) / 2;
//     //     else if ((l + r) % 2 == 0) v[st].x += (l - r) / 2, v[st].y += (l - r) / 2 + 1;
//     //     else v[st].x += (l - r) / 2 + 1, v[st].y += (l - r) / 2 + 1;
//     //     cnt++;
//     //     p = 1 + cnt * (cnt + 1) / 2;
//     //     st = 1 - st;
//     // }
//     // if (p - cnt <= n)
//     // {
//     //     int l = p, r = n;
//     //     if (l & 1 && r & 1) v[st].x += (l - r) / 2 + 1, v[st].y += (l - r) / 2;
//     //     else if ((l + r) % 2 == 0) v[st].x += (l - r) / 2, v[st].y += (l - r) / 2 + 1;
//     //     else v[st].x += (l - r) / 2 + 1, v[st].y += (l - r) / 2 + 1;
//     // }
//     // for (auto [x,y] : v) cout << x << ' ' << y << ' ';
//     // cout << endl;
// }

// int32_t main()
// {
// 	IOS;
// 	int T;
// 	cin >> T;
// 	//T = 1;
// 	while(T--) solve();
// 	return 0;
// } 

// //1754A
// #include<bits/stdc++.h>
// #define x first
// #define y second
// #define IOS ios::sync_with_stdio(false), cin.tie(0), cout.tie(0) 
// #define endl '\n'
// // #define int long long
// #define ll long long
// #define pq(x) priority_queue<x,vector<x>,greater<x>>
// #define PQ(x) priority_queue<x>
// using namespace std;
// typedef pair<int,int> PII;

// const int N = 0;

// void solve(){
//     int n;
//     cin >> n;
//     string s;
//     cin >> s;
//     s = '0' + s;
//     int cnt = 0;
//     for (int i = 1; i <= n; i++)
//     {
//         if (s[i] == 'Q') cnt++;
//         else cnt = max(cnt-1,0);
//     }
//     if (cnt == 0) cout << "YES" << endl;
//     else cout << "NO" << endl;
// }

// int32_t main()
// {
// 	IOS;
// 	int T;
// 	cin >> T;
// 	//T = 1;
// 	while(T--) solve();
// 	return 0;
// } 

// //1696A
// #include<bits/stdc++.h>
// #define x first
// #define y second
// #define IOS ios::sync_with_stdio(false), cin.tie(0), cout.tie(0) 
// #define endl '\n'
// // #define int long long
// #define ll long long
// #define pq(x) priority_queue<x,vector<x>,greater<x>>
// #define PQ(x) priority_queue<x>
// using namespace std;
// typedef pair<int,int> PII;

// const int N = 0;

// void solve()
// {
//     int n,k;
//     cin >> n >> k;
//     int res = 0;
//     for (int i = 1; i <= n; i++)
//     {
//         int a;
//         cin >> a;
//         res = max(res, a | k);
//     }
//     cout << res << endl;
// }

// int32_t main()
// {
// 	IOS;
// 	int T;
// 	cin >> T;
// 	//T = 1;
// 	while(T--) solve();
// 	return 0;
// }

// //1696B
// #include<bits/stdc++.h>
// #define x first
// #define y second
// #define IOS ios::sync_with_stdio(false), cin.tie(0), cout.tie(0) 
// #define endl '\n'
// // #define int long long
// #define ll long long
// #define pq(x) priority_queue<x,vector<x>,greater<x>>
// #define PQ(x) priority_queue<x>
// using namespace std;
// typedef pair<int,int> PII;

// const int N = 0;

// void solve()
// {
//     int n;
//     cin >> n; 
//     vector<int> a(n+1);
//     for (int i = 1; i <= n; i++) cin >> a[i];
//     int p = 1;
//     int cnt = 0;
//     while (p <= n && a[p] == 0) p++;
//     while (p <= n)
//     {
//         while (p <= n && a[p] != 0) p++;
//         while (p <= n && a[p] == 0) p++;
//         cnt++;
//     }
//     cout << min(cnt,2) << endl;
// }

// int32_t main()
// {
// 	IOS;
// 	int T;
// 	cin >> T;
// 	//T = 1;
// 	while(T--) solve();
// 	return 0;
// } 

// //1696C
// #include<bits/stdc++.h>
// #define x first
// #define y second
// #define IOS ios::sync_with_stdio(false), cin.tie(0), cout.tie(0) 
// #define endl '\n'
// #define int long long
// // #define ll long long
// #define pq(x) priority_queue<x,vector<x>,greater<x>>
// #define PQ(x) priority_queue<x>
// using namespace std;
// typedef pair<int,int> PII;

// const int N = 0;

// void solve()
// {
//     int n,m,k;
//     cin >> n >> m;
//     vector<int> a(n+1);
//     for (int i = 1; i <= n; i++) cin >> a[i];
//     cin >> k;
//     vector<int> b(k+1);
//     for (int i = 1; i <= k; i++) cin >> b[i];
    
//     //拆分
//     auto f = [&](PII &t)
//     {
//         while (t.x % m == 0) t.x /= m, t.y *= m;
//     };

//     vector<PII> aa(n+1),bb(k+1);
//     for (int i = 1; i <= n; i++)  
//     {
//         aa[i] = {a[i],1};
//         f(aa[i]);
//     }
//     for (int i = 1; i <= k; i++)
//     {
//         bb[i] = {b[i],1};
//         f(bb[i]);
//     }  

//     //合并同类
//     vector<PII> A,B;
//     A.push_back(aa[1]);
//     B.push_back(bb[1]);
//     for (int i = 2; i <= n; i++)
//     {
//         if (aa[i].x == A.back().x) A.back().y += aa[i].y;
//         else A.push_back(aa[i]);
//     }
//     for (int i = 2; i <= k; i++)
//     {
//         if (bb[i].x == B.back().x) B.back().y += bb[i].y;
//         else B.push_back(bb[i]);
//     }
//     if (A == B) cout << "YES" << endl;
//     else cout << "NO" << endl;
// }

// int32_t main()
// {
// 	IOS;
// 	int T;
// 	cin >> T;
// 	//T = 1;
// 	while(T--) solve();
// 	return 0;
// }

// //1579A
// #include<bits/stdc++.h>
// #define x first
// #define y second
// #define IOS ios::sync_with_stdio(false), cin.tie(0), cout.tie(0) 
// #define endl '\n'
// // #define int long long
// #define ll long long
// #define pq(x) priority_queue<x,vector<x>,greater<x>>
// #define PQ(x) priority_queue<x>
// using namespace std;
// typedef pair<int,int> PII;

// const int N = 0;

// void solve()
// {
//     string s;
//     cin >> s;
//     int a[3] = {0};
//     for (int i = 0; s[i]; i++) a[s[i] - 'A']++;
//     if (a[0] + a[2] == a[1]) cout << "YES" << endl;
//     else cout << "NO" << endl;
// }

// int32_t main()
// {
// 	IOS;
// 	int T;
// 	cin >> T;
// 	//T = 1;
// 	while(T--) solve();
// 	return 0;
// }

// // 1579B
// #include<bits/stdc++.h>
// #define x first
// #define y second
// #define IOS ios::sync_with_stdio(false), cin.tie(0), cout.tie(0) 
// #define endl '\n'
// // #define int long long
// #define ll long long
// #define pq(x) priority_queue<x,vector<x>,greater<x>>
// #define PQ(x) priority_queue<x>
// using namespace std;
// typedef pair<int,int> PII;

// const int N = 0;

// void solve()
// {
//     int n;
//     cin >> n;
//     vector<PII> a(n); 
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i].x;
//         a[i].y = i;
//     } 
//     sort(begin(a),end(a));
//     vector<PII> res;
//     int d = 0;
//     for (int i = 0; i < n - 1; i++)
//     {
//         if ((a[i].y - i + n + n) % n == 0) continue;
//         res.push_back({i,(a[i].y - i + n + n) % n});
//         for (int j = i + 1; j < n; j++)
//         {
//             if (a[j].y > a[i].y) a[j].y = a[j].y - a[i].y + i; 
//             else a[j].y = (a[j].y - a[i].y + n) % n;
//         }
//     }
//     cout << res.size() << endl;
//     for (auto i : res)
//     {
//         cout << i.x + 1 << ' ' << n << ' ' << i.y << endl;
//     }
// }

// int32_t main()
// {
// 	IOS;
// 	int T;
// 	cin >> T;
// 	//T = 1;
// 	while(T--) solve();
// 	return 0;
// }

// //1790C
// #include<bits/stdc++.h>
// #define x first
// #define y second
// #define IOS ios::sync_with_stdio(false), cin.tie(0), cout.tie(0) 
// #define endl '\n'
// // #define int long long
// #define ll long long
// #define pq(x) priority_queue<x,vector<x>,greater<x>>
// #define PQ(x) priority_queue<x>
// using namespace std;
// typedef pair<int,int> PII;

// const int N = 0;

// void solve()
// {
//     int n;
//     cin >> n;
//     int T = n;
//     vector<vector<int>> res;
//     map<int,int> m1,m2;
//     while (T--)
//     {
//         vector<int> a(n);
//         for (int i = 1; i < n; i++)
//         {
//             cin >> a[i];
//         } 
//         m1[a[1]]++;
//         m2[a[n-1]]++;
//         res.push_back(a);
//     }
//     int a = 666, b = 666;
//     for (auto [x,y] : m1)
//     {
//         if (y == 1) a = x;
//     }
//     for (auto [x,y] : m2)
//     {
//         if (y == 1) b = x;
//     }
//     for (auto j : res)
//     {
//         if (j[n-1] == b)
//         {
//             for (int i = 1; i < n; i++) cout << j[i] << ' ';
//             break;
//         }
//     }
//     for (auto j : res)
//     {
//         if (j[1] == a)
//         {
//             cout << j[n-1] << endl;
//             return;
//         }
//     }
// }

// int32_t main()
// {
// 	IOS;
// 	int T;
// 	cin >> T;
// 	//T = 1;
// 	while(T--) solve();
// 	return 0;
// } 

// //1872D
// #include<bits/stdc++.h>
// #define x first
// #define y second
// #define IOS ios::sync_with_stdio(false), cin.tie(0), cout.tie(0) 
// #define endl '\n'
// // #define int long long
// #define ll long long
// #define pq(x) priority_queue<x,vector<x>,greater<x>>
// #define PQ(x) priority_queue<x>
// using namespace std;
// typedef pair<int,int> PII;

// const int N = 0;

// //001001001001001001001001
// //000100010001000100010001
// //0101010
// //0010010
// void solve()
// {
//     ll n,a,b;
//     cin >> n >> a >> b;
//     ll x = n / a, y = n / b, z = n / (a * b / gcd(a,b));
//     x -= z, y -= z;
//     ll res = (n + n - x + 1) * x / 2 - (1 + y) * y / 2;
//     cout << res << endl;
// }

// int32_t main()
// {
// 	IOS;
// 	int T;
// 	cin >> T;
// 	//T = 1;
// 	while(T--) solve();
// 	return 0;
// } 

// //1872E
// #include<bits/stdc++.h>
// #define x first
// #define y second
// #define IOS ios::sync_with_stdio(false), cin.tie(0), cout.tie(0) 
// #define endl '\n'
// // #define int long long
// #define ll long long
// #define pq(x) priority_queue<x,vector<x>,greater<x>>
// #define PQ(x) priority_queue<x>
// using namespace std;
// typedef pair<int,int> PII;

// const int N = 0;

// void solve()
// {
//     int n;
//     cin >> n; 
//     vector<int> a(n+1);
//     string s;
//     for (int i = 1; i <= n; i++) cin >> a[i];
//     cin >> s;
//     s = "?" + s;

//     int a0 = 0, a1 = 0;
//     vector<int> x(n+1);

//     for (int i = 1; i <= n; i++)
//     {
//         if (s[i] == '0') a0 ^= a[i];
//         else a1 ^= a[i];
//         x[i] = x[i-1] ^ a[i];
//     }
    
//     int Q;
//     cin >> Q;
//     while (Q--)
//     {
//         int type;
//         cin >> type;
//         if (type == 1)
//         {
//             int l,r;
//             cin >> l >> r;
//             a0 ^= x[r] ^ x[l-1];
//             a1 ^= x[r] ^ x[l-1];
//         }
//         else 
//         {
//             int c;
//             cin >> c;
//             if (c == 0) cout << a0 << ' ';
//             else cout << a1 << ' ';
//         }
//     }
//     cout << endl;
// }

// int32_t main()
// {
// 	IOS;
// 	int T;
// 	cin >> T;
// 	//T = 1;
// 	while(T--) solve();
// 	return 0;
// }

// //1868A
// #include<bits/stdc++.h>
// #define x first
// #define y second
// #define IOS ios::sync_with_stdio(false), cin.tie(0), cout.tie(0) 
// #define endl '\n'
// // #define int long long
// #define ll long long
// #define pq(x) priority_queue<x,vector<x>,greater<x>>
// #define PQ(x) priority_queue<x>
// using namespace std;
// typedef pair<int,int> PII;

// const int N = 2e5 + 10;

// void solve()
// {
//     int n,m;
//     cin >> n >> m;
//     vector<vector<int>> g(n+1,vector<int>(m+1));
//     if (m == 1)
//     {
//         for (int i = 0; i <= n; i++) cout << "0\n";
//         return;
//     }
//     for (int i = 1; i <= min(n,m-1); i++)
//     {
//         for (int j = 1; j <= m; j++)
//         {
//             g[i][j] = (i + j - 2) % m;
//         }
//     }
//     for (int i = m; i <= n; i++)
//     {
//         for (int j = 1; j <= m; j++)
//         {
//             g[i][j] = j - 1; 
//         }
//     }
//     cout << min(n+1,m) << endl;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= m; j++)
//         {
//             cout << g[i][j] << ' ';
//         }
//         cout << endl;
//     }
// }

// int32_t main()
// {
// 	IOS;
// 	int T;
// 	cin >> T;
// 	//T = 1;
// 	while(T--) solve();
// 	return 0;
// }

// #include<bits/stdc++.h>
// #define x first
// #define y second
// #define IOS ios::sync_with_stdio(false), cin.tie(0), cout.tie(0) 
// #define endl '\n'
// // #define int long long
// #define ll long long
// #define pq(x) priority_queue<x,vector<x>,greater<x>>
// #define PQ(x) priority_queue<x>
// using namespace std;
// typedef pair<int,int> PII;

// const int N = 0;
// void decimalToTwenty(int num) 
// {
//     stack<int> s;
//     while (num > 0) {
//         s.push(num % 20);
//         num /= 20;
//     }
//     while (!s.empty()) {
//         cout << s.top();
//         s.pop();
//     }
// }
// void solve()
// {
//     int num;
//     cin >> num;
// }

// int32_t main()
// {
// 	IOS;
// 	int T;
// 	// cin >> T;
// 	T = 1;
// 	while(T--) solve();
// 	return 0;
// } 

// // 1904A
// #include<bits/stdc++.h>
// using namespace std;

// void solve() {
//     int a,b,x1,y1,x2,y2;
//     cin >> a >> b >> x1 >> y1 >> x2 >> y2;
//     int dx[] = {1,1,-1,-1}, dy[] = {1,-1,1,-1};
//     map<pair<int,int>,int> m;
//     for (int i = 0; i < 4; i++) {
//         if (a != b) {
//             m[{x1+a*dx[i],y1+b*dy[i]}]++;
//             m[{x2+a*dx[i],y2+b*dy[i]}]++;
//         }
//         m[{x1+b*dx[i],y1+a*dy[i]}]++;
//         m[{x2+b*dx[i],y2+a*dy[i]}]++;
//     }
//     int ans = 0;
//     for (auto [x,y] : m) {
//         ans += y == 2;
//     }
//     cout << ans << endl;
// }

// int32_t main() {
// 	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
// 	int T;
// 	cin >> T;
// 	while(T--) solve();
// 	return 0;
// }

// //1904B
// #include<bits/stdc++.h>
// #define int long long
// using namespace std;

// void solve() {
//     int n;
//     cin >> n;
//     vector<pair<int,int>> v(n+1);
//     for (int i = 1; i <= n; i++) {
//         cin >> v[i].first;
//         v[i].second = i;
//     }
//     sort(begin(v)+1,end(v));
//     for (int i = 1; i <= n; i++) {
//         v[i].first += v[i-1].first;
//     }

//     vector<int> ans(n+1);
//     ans[v[n].second] = n-1;
//     for (int i = n - 1; i >= 1; i--) {
//         ans[v[i].second] = i - 1;
//         if (2 * v[i].first >= v[i+1].first) ans[v[i].second] = ans[v[i+1].second];
//     }

//     for (int i = 1; i <= n; i++) cout << ans[i] << ' ';
//     cout << endl;
// }

// int32_t main() {
// 	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
// 	int T;
// 	cin >> T;
// 	while(T--) solve();
// 	return 0;
// }

// 1904C
// #include<bits/stdc++.h>
// #define x first
// #define y second
// #define endl '\n'
// #define int long long
// // #define ll long long
// #define pq(x) priority_queue<x,vector<x>,greater<x>>
// #define PQ(x) priority_queue<x>
// using namespace std;
// typedef pair<int,int> PII;

// void solve() {
//     int n, k;
//     cin >> n >> k;
//     vector<int> a(n+1);
//     for (int i = 1; i <= n; i++) {
//         cin >> a[i];
//     }
//     if (k > 2) {
//         cout << 0 << endl;
//         return;
//     }
//     sort(begin(a)+1,end(a));
//     int ans = a[1];
//     for (int i = 2; i <= n; i++) ans = min(ans,abs(a[i]-a[i-1]));
//     if (k == 1) {
//         cout << ans << endl;
//         return;
//     }
//     vector<int> v;
//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= n; j++) {
//             if (i != j) {
//                 v.push_back(abs(a[i]-a[j]));
//             }
//         }
//     }
//     for (int p : v) {
//         int l = 1, r = n;
//         while (l < r) {
//             int mid = l + r >> 1;
//             if (a[mid] >= p) r = mid;
//             else l = mid + 1;
//         }
//         ans = min({ans,abs(p - a[l]),abs(p - a[l-1])});
//     }

//     cout << ans << endl;
    
// }

// int32_t main() {
// 	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
// 	int T;
// 	cin >> T;
// 	while(T--) solve();
// 	return 0;
// }

// 1918A
// #include<bits/stdc++.h>
// #define RainRingBell int32_t main()
// #define KyLen ios::sync_with_stdio(false), cin.tie(0), cout.tie(0)
// #define Kshqsz int T;cin >> T;while(T--) solve()
// #define Kitto return 0
// #define x first
// #define y second
// #define endl '\n'
// #define pq(x) priority_queue<x,vector<x>,greater<x>>
// #define PQ(x) priority_queue<x>
// #define int long long
// using namespace std;

// void solve() {
// 	int n,m;
// 	cin >> n >> m;
// 	cout << n * (m / 2) << endl;
// }

// RainRingBell {
//     KyLen;
//     Kshqsz;
//     Kitto;
// }

// #include<bits/stdc++.h>
// #define RainRingBell int32_t main()
// #define KyLen ios::sync_with_stdio(false), cin.tie(0), cout.tie(0)
// #define Kshqsz solve()
// #define Kitto return 0
// #define x first
// #define y second
// #define endl '\n'
// #define pq(x) priority_queue<x,vector<x>,greater<x>>
// #define PQ(x) priority_queue<x>
// #define int long long
// using namespace std;

// void solve() {
// 	int num = 0;
// 	for (int i = 1; i <= 6; i++) {
// 		int a;
// 		cin >> a;
// 		num += a;
// 	}
// 	cout << num;



// }

// RainRingBell {
//     KyLen;
//     Kshqsz;
//     Kitto;
// }

// // 1946B
// /* \/\ \         /\ \                        
// \ \ \/'/'  __  __\ \ \         __    ___     
//  \ \ , <  /\ \/\ \\ \ \  __  /'__`\/' _ `\   
//   \ \ \\`\\ \ \_\ \\ \ \L\ \/\  __//\ \/\ \  
//    \ \_\ \_\/`____ \\ \____/\ \____\ \_\ \_\ 
//     \/_/\/_/`/___/> \\/___/  \/____/\/_/\/_/ 
//                /\___/                        
//        ___ ___ \/__/      qq: 2729269812     
//      /' __` __`\       email: kkkylen@qq.com 
//      /\ \/\ \/\ \    ___   __  __            
//      \ \ \ \ \ \ \  / __`\/\ \/\ \           
//       \ \ \ \ \ \ \/\ \L\ \ \ \_\ \          
//        \ \ \ \ \ \ \ \____/\ \____/          
//         \/_/\/_/\/_/\/___/  \/__*/           
// #include<bits/stdc++.h>
// #define x first
// #define y second
// #define endl '\n'
// #define int long long
// using namespace std;
// int mod = 1e9 + 7;
// void KyLen() {
//     int n,k;
//     cin >> n >> k;
// 	vector<int> a(n+1);
// 	for (int i = 1; i <= n; i++) cin >> a[i];
// 	int sum = accumulate(begin(a)+1,end(a),0ll);
// 	int seq = 0;
// 	int max_seq = 0;
// 	for (int i = 1; i <= n; i++) {
// 		seq += a[i];
// 		if (seq <= 0) seq = 0;
// 		// seq = max(a[i],seq+a[i]);
// 		max_seq = max(max_seq, seq);
// 	}
// 	auto f = [&](int x, int y) {
// 		int res = 1;
// 		while (y) {
// 			if (y & 1) res = res * x % mod;
// 			y >>= 1;
// 			x = x * x % mod;
// 		}
// 		return res;
// 	};
// 	// cout << max_seq << endl;
// 	if (max_seq == 0) {
// 		cout << (sum % mod + mod) % mod << endl;
// 	} else {
// 		cout << ((sum - max_seq + (max_seq % mod) * f(2,k) % mod + mod) % mod + mod) % mod << endl;
// 	}

// }

// int32_t main() {
//     ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
//     int T; cin >> T; while(T--) KyLen();
//     return 0;
// }

// // 1943A
// /* \/\ \         /\ \                        
// \ \ \/'/'  __  __\ \ \         __    ___     
//  \ \ , <  /\ \/\ \\ \ \  __  /'__`\/' _ `\   
//   \ \ \\`\\ \ \_\ \\ \ \L\ \/\  __//\ \/\ \  
//    \ \_\ \_\/`____ \\ \____/\ \____\ \_\ \_\ 
//     \/_/\/_/`/___/> \\/___/  \/____/\/_/\/_/ 
//                /\___/                        
//        ___ ___ \/__/      qq: 2729269812     
//      /' __` __`\       email: kkkylen@qq.com 
//      /\ \/\ \/\ \    ___   __  __            
//      \ \ \ \ \ \ \  / __`\/\ \/\ \           
//       \ \ \ \ \ \ \/\ \L\ \ \ \_\ \          
//        \ \ \ \ \ \ \ \____/\ \____/          
//         \/_/\/_/\/_/\/___/  \/__*/           
// #include<bits/stdc++.h>
// #define x first
// #define y second
// #define endl '\n'
// #define int long long
// using namespace std;

// void KyLen() {
// 	int n;
// 	cin >> n;
// 	map<int,int> m;
// 	for (int i = 1; i <= n; i++) {
// 		int a;
// 		cin >> a;
// 		m[a]++;
// 	}
// 	int flag = 0;
// 	for (int i = 0; i <= n; i++) {
// 		if (m[i] == 0) {
// 			cout << i << endl;
// 			return;
// 		}
// 		if (m[i] == 1) {
// 			if (flag == 1) {
// 				cout << i << endl;
// 				return;
// 			}
// 			flag = 1;
// 		}
// 	}
// }

// int32_t main() {
//     ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
//     int T; cin >> T; while(T--) KyLen();
//     return 0;
// } 

// // 1942B
// /* \/\ \         /\ \                        
// \ \ \/'/'  __  __\ \ \         __    ___     
//  \ \ , <  /\ \/\ \\ \ \  __  /'__`\/' _ `\   
//   \ \ \\`\\ \ \_\ \\ \ \L\ \/\  __//\ \/\ \  
//    \ \_\ \_\/`____ \\ \____/\ \____\ \_\ \_\ 
//     \/_/\/_/`/___/> \\/___/  \/____/\/_/\/_/ 
//                /\___/                        
//        ___ ___ \/__/      qq: 2729269812     
//      /' __` __`\       email: kkkylen@qq.com 
//      /\ \/\ \/\ \    ___   __  __            
//      \ \ \ \ \ \ \  / __`\/\ \/\ \           
//       \ \ \ \ \ \ \/\ \L\ \ \ \_\ \          
//        \ \ \ \ \ \ \ \____/\ \____/          
//         \/_/\/_/\/_/\/___/  \/__*/           
// #include<bits/stdc++.h>
// #define x first
// #define y second
// #define endl '\n'
// #define int long long
// using namespace std;

// void KyLen() {
// 	int n;
// 	cin >> n;
// 	vector<int> a(n+1),p(n+1);
// 	for (int i = 1; i <= n; i++) cin >> a[i];
// 	p[n] = n - a[n];
// 	int mex = p[n];
// 	for (int i = n - 1; i >= 1; i--) {
// 		int t = mex - a[i];
// 		p[i] = t;
// 		mex = min(mex,t);
// 	}
// 	for (int i = 1; i <= n; i++) cout << p[i] << ' ';
// 	cout << endl;
// }

// int32_t main() {
//     ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
//     int T; cin >> T; while(T--) KyLen();
//     return 0;
// }

// // 1942C1
// /* \/\ \         /\ \                        
// \ \ \/'/'  __  __\ \ \         __    ___     
//  \ \ , <  /\ \/\ \\ \ \  __  /'__`\/' _ `\   
//   \ \ \\`\\ \ \_\ \\ \ \L\ \/\  __//\ \/\ \  
//    \ \_\ \_\/`____ \\ \____/\ \____\ \_\ \_\ 
//     \/_/\/_/`/___/> \\/___/  \/____/\/_/\/_/ 
//                /\___/                        
//        ___ ___ \/__/      qq: 2729269812     
//      /' __` __`\       email: kkkylen@qq.com 
//      /\ \/\ \/\ \    ___   __  __            
//      \ \ \ \ \ \ \  / __`\/\ \/\ \           
//       \ \ \ \ \ \ \/\ \L\ \ \ \_\ \          
//        \ \ \ \ \ \ \ \____/\ \____/          
//         \/_/\/_/\/_/\/___/  \/__*/           
// #include<bits/stdc++.h>
// #define x first
// #define y second
// #define endl '\n'
// #define int long long
// using namespace std;

// void KyLen() {
//     int n,x,y;
//     cin >> n >> x >> y;
//     vector<int> a(x+1);
//     for (int i = 1; i <= x; i++) cin >> a[i];
//     sort(begin(a)+1,end(a));
//     int ans = (a[x] - a[1] == n - 2);
//     for (int i = 2; i <= x; i++) ans += (a[i] - a[i-1] == 2);
//     ans += max(0ll,x-2);
//     cout << ans << endl;
// }

// int32_t main() {
//     ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
//     int T; cin >> T; while(T--) KyLen();
//     return 0;
// }


// // 1942C2
// /* \/\ \         /\ \                        
// \ \ \/'/'  __  __\ \ \         __    ___     
//  \ \ , <  /\ \/\ \\ \ \  __  /'__`\/' _ `\   
//   \ \ \\`\\ \ \_\ \\ \ \L\ \/\  __//\ \/\ \  
//    \ \_\ \_\/`____ \\ \____/\ \____\ \_\ \_\ 
//     \/_/\/_/`/___/> \\/___/  \/____/\/_/\/_/ 
//                /\___/                        
//        ___ ___ \/__/      qq: 2729269812     
//      /' __` __`\       email: kkkylen@qq.com 
//      /\ \/\ \/\ \    ___   __  __            
//      \ \ \ \ \ \ \  / __`\/\ \/\ \           
//       \ \ \ \ \ \ \/\ \L\ \ \ \_\ \          
//        \ \ \ \ \ \ \ \____/\ \____/          
//         \/_/\/_/\/_/\/___/  \/__*/           
// #include<bits/stdc++.h>
// #define x first
// #define y second
// #define endl '\n'
// #define int long long
// using namespace std;

// void KyLen() {
//     int n,x,y;
//     cin >> n >> x >> y;
//     vector<int> a(x+1);
//     for (int i = 1; i <= x; i++) cin >> a[i];
//     sort(begin(a)+1,end(a));
//     int ans = 0;
//     vector<int> odd,even;
//     for (int i = 2; i <= x; i++) {
//       int t = a[i] - a[i-1];
//       if (t & 1) odd.push_back(t);
//       else even.push_back(t);
//     }
//     int t = a[1] + n - a[x];
//     if (t & 1) odd.push_back(t);
//     else even.push_back(t);
//     sort(begin(odd),end(odd));
//     sort(begin(even),end(even));
//     int extra = 0;
//     for (int i = 0; i < even.size(); i++) {
//       // cout << even[i] << ' ';
//       int need = even[i] / 2 - 1;
//       if (need <= y) {
//         y -= need;
//         extra += need;
//         ans += need + 1;
//       } else {
//         ans += y;
//         extra += y;
//         y = 0;
//       }
//     }
//     // cout << endl;
//     for (int i = 0; i < odd.size(); i++) {
//       // cout << odd[i] << ' ';
//       int need = odd[i] / 2;
//       if (need <= y) {
//         y -= need;
//         extra += need;
//         ans += need;
//       } else {
//         ans += y;
//         extra += y;
//         y = 0;
//       }
//     }
//     // cout << endl;
//     cout << ans + max(0ll,x+extra-2) << endl;
// }

// int32_t main() {
//     ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
//     int T; cin >> T; while(T--) KyLen();
//     return 0;
// }

// // 1957B
// /* \/\ \         /\ \                        
// \ \ \/'/'  __  __\ \ \         __    ___     
//  \ \ , <  /\ \/\ \\ \ \  __  /'__`\/' _ `\   
//   \ \ \\`\\ \ \_\ \\ \ \L\ \/\  __//\ \/\ \  
//    \ \_\ \_\/`____ \\ \____/\ \____\ \_\ \_\ 
//     \/_/\/_/`/___/> \\/___/  \/____/\/_/\/_/ 
//                /\___/                        
//        ___ ___ \/__/      qq: 2729269812     
//      /' __` __`\       email: kkkylen@qq.com 
//      /\ \/\ \/\ \    ___   __  __            
//      \ \ \ \ \ \ \  / __`\/\ \/\ \           
//       \ \ \ \ \ \ \/\ \L\ \ \ \_\ \          
//        \ \ \ \ \ \ \ \____/\ \____/          
//         \/_/\/_/\/_/\/___/  \/__*/           
// #include<bits/stdc++.h>
// #define x first
// #define y second
// #define endl '\n'
// #define int long long
// using namespace std;

// void KyLen() {
//     int n,k;
//     cin >> n >> k;
//     if (n == 1) {
//         cout << k << endl;
//         return;
//     }
//     int temp = k;
//     int t = 1;
//     while (k) {
//       t *= 2;
//       k >>= 1;
//     }
//     k = temp;
//     t = t / 2 - 1;
//     cout << t << ' ' << k - t << ' ';
//     for (int i = 1; i <= n - 2; i++) cout << 0 << ' ';
//     cout << endl;
// }

// int32_t main() {
//     ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
//     int T; cin >> T; while(T--) KyLen();
//     return 0;
// }

// // 1957C
// /* \/\ \         /\ \                        
// \ \ \/'/'  __  __\ \ \         __    ___     
//  \ \ , <  /\ \/\ \\ \ \  __  /'__`\/' _ `\   
//   \ \ \\`\\ \ \_\ \\ \ \L\ \/\  __//\ \/\ \  
//    \ \_\ \_\/`____ \\ \____/\ \____\ \_\ \_\ 
//     \/_/\/_/`/___/> \\/___/  \/____/\/_/\/_/ 
//                /\___/                        
//        ___ ___ \/__/      qq: 2729269812     
//      /' __` __`\       email: kkkylen@qq.com 
//      /\ \/\ \/\ \    ___   __  __            
//      \ \ \ \ \ \ \  / __`\/\ \/\ \           
//       \ \ \ \ \ \ \/\ \L\ \ \ \_\ \          
//        \ \ \ \ \ \ \ \____/\ \____/          
//         \/_/\/_/\/_/\/___/  \/__*/           
// #include<bits/stdc++.h>
// #define x first
// #define y second
// #define endl '\n'
// #define int long long
// using namespace std;
// int mod = 1e9 + 7;
// void KyLen() {
//     int n,k;
//     cin >> n >> k;
//     set<int> se;
//     for (int i = 1; i <= k; i++) {
//         int a,b;
//         cin >> a >> b;
//         se.insert(a);
//         se.insert(b);
//     }
//     n -= se.size();
//     vector<vector<int>> f(n+3,vector<int>(2));
//     f[1][0] = 1, f[2][1] = 2;
//     for (int i = 1; i <= n; i++) {
//         f[i][0] += (f[i-1][0] + f[i-1][1]) % mod;
//         if (i > 1) f[i][1] += (f[i-2][0] + f[i-2][1]) % mod * 2 % mod * (i - 1) % mod;
//     }
//     cout << max(1ll,(f[n][0] + f[n][1]) % mod )<< endl;
// }

// int32_t main() {
//     ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
//     int T; cin >> T; while(T--) KyLen();
//     return 0;
// }

// //1957D
// /* \/\ \         /\ \                        
// \ \ \/'/'  __  __\ \ \         __    ___     
//  \ \ , <  /\ \/\ \\ \ \  __  /'__`\/' _ `\   
//   \ \ \\`\\ \ \_\ \\ \ \L\ \/\  __//\ \/\ \  
//    \ \_\ \_\/`____ \\ \____/\ \____\ \_\ \_\ 
//     \/_/\/_/`/___/> \\/___/  \/____/\/_/\/_/ 
//                /\___/                        
//        ___ ___ \/__/      qq: 2729269812     
//      /' __` __`\       email: kkkylen@qq.com 
//      /\ \/\ \/\ \    ___   __  __            
//      \ \ \ \ \ \ \  / __`\/\ \/\ \           
//       \ \ \ \ \ \ \/\ \L\ \ \ \_\ \          
//        \ \ \ \ \ \ \ \____/\ \____/          
//         \/_/\/_/\/_/\/___/  \/__*/           
// #include<bits/stdc++.h>
// #define x first
// #define y second
// #define endl '\n'
// #define int long long
// using namespace std;

// void KyLen() {
//     int n;
//     cin >> n;
//     vector<int> a(n+1), b(n+1);
//     vector<vector<int>> o(n+1,vector<int>(31)),l(n+1,vector<int>(31));
//     for (int i = 0; i < 30; i++) {
//         o[0][i] = 1;
//     }
//     for (int i = 1; i <= n; i++) {
//         cin >> a[i];
//         b[i] = b[i-1] ^ a[i];
//         for (int j = 0; j < 30; j++) {
//             l[i][j] = l[i-1][j];
//             o[i][j] = o[i-1][j];
//             if ((b[i] >> j) & 1) {
//                 l[i][j] = l[i-1][j] + 1;
//             } else {
//                 o[i][j] = o[i-1][j] + 1;
//             }
//         }
//     }
//     int ans = 0;
//     for (int i = 1; i <= n; i++) {
//         // 找a[i]的最高位
//         int t = 0;
//         int temp = a[i];
//         while (temp) {
//             temp >>= 1;
//             t++;
//         }
//         t--;
//         if (t < 0) continue;
//         ans += o[i-1][t] * (o[n][t] - o[i-1][t]);
//         ans += l[i-1][t] * (l[n][t] - l[i-1][t]);
//     }
//     cout << ans << endl;
// }

// int32_t main() {
//     ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
//     int T; cin >> T; while(T--) KyLen();
//     return 0;
// }

// //1926B
// /* \/\ \         /\ \                        
// \ \ \/'/'  __  __\ \ \         __    ___     
//  \ \ , <  /\ \/\ \\ \ \  __  /'__`\/' _ `\   
//   \ \ \\`\\ \ \_\ \\ \ \L\ \/\  __//\ \/\ \  
//    \ \_\ \_\/`____ \\ \____/\ \____\ \_\ \_\ 
//     \/_/\/_/`/___/> \\/___/  \/____/\/_/\/_/ 
//                /\___/                        
//        ___ ___ \/__/      qq: 2729269812     
//      /' __` __`\       email: kkkylen@qq.com 
//      /\ \/\ \/\ \    ___   __  __            
//      \ \ \ \ \ \ \  / __`\/\ \/\ \           
//       \ \ \ \ \ \ \/\ \L\ \ \ \_\ \          
//        \ \ \ \ \ \ \ \____/\ \____/          
//         \/_/\/_/\/_/\/___/  \/__*/           
// #include<bits/stdc++.h>
// #define x first
// #define y second
// #define endl '\n'
// #define int long long
// using namespace std;

// void KyLen() {
//     int n;
//     cin >> n;
//     vector<string> g(n+1);
//     for (int i = 1; i <= n; i++) {
//         cin >> g[i];
//         g[i] = '?' + g[i];
//     }
//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= n; j++) {
//             if (g[i][j] == '1') {
//                 if (g[i][j+1] == '1') {
//                     if (g[i+1][j] == '1') cout << "SQUARE" << endl;
//                     else cout << "TRIANGLE" << endl;
//                     return;
//                 } else {
//                     cout << "TRIANGLE" << endl;
//                     return;
//                 }
//             }
//         }
//     }
// }

// int32_t main() {
//     ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
//     int T; cin >> T; while(T--) KyLen();
//     return 0;
// }

//1936A
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
#define int long long
using namespace std;

void KyLen() {
    int n;
    cin >> n;
    auto ask = [&] (int a, int b, int c, int d) {
        cout << "? " << a << ' ' << b << ' ' << c << ' ' << d << endl;
        char cc;
        cin >> cc;
        if (cc == '=') return 1;
        else if (cc == '<') return 2;
        else if (cc == '>') return 3;
        return 0;
    };
    // 先问n-1次，把最大的问出来
    int max_idx = 0;
    for (int i = 0; i < n; i++) {
        int c = ask(max_idx,max_idx,i,i);
        if (c == 2) max_idx = i;
    }
    int min_idx = 0;
    for (int i = 0; i < n; i++) {
        int c = ask(max_idx,min_idx,max_idx,i);
        if (c == 2) {
            min_idx = i;
        } 
        else if (c == 1) {
            c = ask(min_idx,min_idx,i,i);
            if (c == 3) min_idx = i;
        }
    }
    cout << "! " << min_idx << ' ' << max_idx << endl;
}  

int32_t main() {
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int T; cin >> T; while(T--) KyLen();
    return 0;
}