// #include<bits/stdc++.h>
// #define x first
// #define y second
// #define IOS ios::sync_with_stdio(false), cin.tie(0), cout.tie(0) 
// #define endl '\n'
// #define ll unsigned long long
// #define pq(x) priority_queue<x,vector<x>,greater<x>>
// #define PQ(x) priority_queue<x>
// using namespace std;
// typedef pair<int,int> PII;

// const int N = 0;

// void solve(){
// 	ll n;
//     cin >> n;
//     vector<ll> s(n+1);
//     for (ll i = 1; i < n; i++)
//     {
//         cin >> s[i];
//     }
//     if (s[n-1] > n * (n + 1) / 2)
//     {
//         cout << "NO" << endl;
//         return; 
//     }
//     if (s[n-1] == n * (n + 1) / 2)
//     {
        
//     }
//     unordered_map<ll,ll> m;
//     for (ll i = 1; i < n; i++) m[s[i]-s[i-1]]++;
//     ll cnt = 0; //缺几个
//     ll num = 0; //缺多少
//     for (ll i = 1; i <= n; i++)
//     {
//         if (m[i] == 0) cnt++,num+=i;
//     }
//     if (cnt == 1) cout << "YES" << endl;
//     else
//     {
//         for (auto [x,y] : m)
//         {
//             if (y == 2 || x > n)
//             {
//                 if (x == num)
//                 {
//                     cout << "YES" << endl;
//                     return;
//                 }
//                 else 
//                 {
//                     cout << "NO" << endl;
//                     return;
//                 }
//             }
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

// // #include<bits/stdc++.h>
// // #define x first
// // #define y second
// // #define IOS ios::sync_with_stdio(false), cin.tie(0), cout.tie(0) 
// // #define endl '\n'
// // #define ll unsigned long long
// // #define pq(x) priority_queue<x,vector<x>,greater<x>>
// // #define PQ(x) priority_queue<x>
// // using namespace std;
// // typedef pair<int,int> PII;

// // const int N = 0;

// // void solve(){
// //     ll n;
// //     cin >> n;
// //     vector<ll> s(n+2),v(n+2);
// //     for (ll i = 1; i < n; i++) 
// //     {
// //         cin >> s[i];
// //         v[i] = s[i] - s[i-1];
// //         // cout << v[i] << ' ';
// //     }

// //     // cout << endl;

// //     unordered_map<ll,ll> m;
// //     for (int i = 1; i < n; i++)
// //     {
// //         m[v[i]]++;
// //     }

// //     if (s[n-1] > n * (n+1) / 2) 
// //     {
// //         cout << "NO" << endl;
// //         return;
// //     }

// //     // //特判
// //     ll flag = 0;
// //     for (int i = 1; i <= n; i++)
// //     {
// //         if (m[i] != 1) flag++;
// //     }
// //     if (flag == 1)
// //     {
// //         cout << "YES" << endl;
// //         return;
// //     }


// //     ll cnt = 0;
// //     ll cnt2 = 0;
// //     ll idx = 0;
// //     ll idx2 = 0;
// //     for (auto [x,y] : m)
// //     {
// //         if (x > n) cnt++,idx2 = x;
// //         if (y > 2)
// //         {
// //             cout << "NO" << endl;
// //             return;
// //         }
// //         if (y == 2) idx = x,cnt2++;
// //     }
// //     if (cnt > 1 && cnt2 > 1)  
// //     {
// //         cout << "NO" << endl;
// //         return;
// //     }

// //     ll num = 0;
// //     for (int i = 1; i <= n; i++)
// //     {
// //         if (m[i] == 0)
// //         {
// //             cnt++;
// //             num += i;
// //         }
// //     }
    
// //     if (idx)
// //     {
// //         if (idx == num) cout << "YES" << endl;
// //         else cout << "NO" << endl;
// //     }
// //     else
// //     {
// //         if (idx2 == num) cout << "YES" << endl;
// //         else cout << "NO" << endl;
// //     }
    

// //     // ll cnt = 0;
// //     // ll num = 0;
// //     // for (int i = 1; i <= n; i++)
// //     // {
// //     //     if (m[i] == 0)
// //     //     {
// //     //         cnt++;
// //     //         num += i;
// //     //     }
// //     // }

// //     // if (cnt != 2) cout << "NO" << endl;
// //     // else
// //     // {
// //     //     for (auto [x,y] : m)
// //     //     {
// //     //         if (y == 2)
// //     //         {
// //     //             if (x == num)
// //     //             {
// //     //                 cout << "YES" << endl;
// //     //                 return;
// //     //             }
// //     //         }
// //     //     }
// //     //     for (int i = 1; i < n; i++)
// //     //     {
// //     //         if (v[i] > n)
// //     //         {
// //     //             if (v[i] == num)
// //     //             {
// //     //                 cout << "YES" << endl;
// //     //                 return;
// //     //             }
// //     //         }
// //     //     }
// //     //     cout << "NO" << endl;
// //     // }


// //     // vector<ll> b;  
// //     // for (ll i = 1; i < n; i++)
// //     // {
// //     //     if (v[i] <= n) st[v[i]] = true;
// //     //     else b.push_back(v[i]);
// //     // }
// //     // for (int i = 1; i <= n; i++)
// //     // {
// //     //     if (st[i]) cout << i << ' ';
// //     // }
// //     // cout << endl;
// //     // cout << endl;
// //     // if (b.size() > 1) cout << "NO" << endl;
// //     // else
// //     // {
// //     //     ll bb = 0;  
// //     //     ll cnt = 0;
// //     //     for (ll i = 1; i <= n; i++)
// //     //     {
// //     //         if (!st[i]) bb+=i,cnt++;
// //     //     }
// //     //     if (cnt != 2 || bb != b[0]) cout << "NO" << endl;
// //     //     else cout << "YES" << endl;
// //     // }
// // }

// // int main()
// // {
// // 	IOS;
// // 	int T;
// // 	cin >> T;
// // 	while(T--) 
// //     {
// //         solve();
// //     }
// // 	return 0;
// // } 

    

#include<bits/stdc++.h>
#define x first
#define y second
#define IOS ios::sync_with_stdio(false), cin.tie(0), cout.tie(0) 
#define endl '\n'
#define int long long
#define pq(x) priority_queue<x,vector<x>,greater<x>>
#define PQ(x) priority_queue<x>
using namespace std;
typedef pair<int,int> PII;

const int N = 0;

void solve(){
	int n;
    cin >> n;
    vector<int> s(n+1),a(n+1);
    for (int i = 1; i < n; i++)
    {
        cin >> s[i];
        a[i] = s[i] - s[i-1];
    }
    vector<bool> st(n+1);
    vector<int> extra;
    for (int i = 1; i < n; i++)
    {
        if (a[i] >= 1 && a[i] <= n && !st[a[i]]) st[a[i]] = true;
        else extra.push_back(a[i]);
    }

    if (extra.size() > 1) cout << "NO" << endl;
    else if (extra.size() == 0) cout << "YES" << endl;
    else
    {
        int num = 0;
        for (int i = 1; i <= n; i++)
        {
            if (!st[i]) num += i;
        }
        if (num == extra[0]) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}

int32_t main()
{
	IOS;
	int T;
	cin >> T;
	//T = 1;
	while(T--) solve();
	return 0;
}