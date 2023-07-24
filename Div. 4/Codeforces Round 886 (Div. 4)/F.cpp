#include<bits/stdc++.h>
#define x first
#define y second
#define IOS ios::sync_with_stdio(false), cin.tie(0), cout.tie(0) 
#define endl '\n'
#define ll long long
#define pq(x) priority_queue<x,vector<x>,greater<x>>
#define PQ(x) priority_queue<x>
using namespace std;
typedef pair<int,int> PII;

const int N = 0;

void solve(){
	int n;
    cin >> n;
    vector<int> v(n+1), dp(n+1);
    for (int i = 1; i <= n; i++)
    {
        int a;
        cin >> a;
        if (a <= n) v[a]++;
    }
    dp = v;
    for (int i = 1; i <= n; i++)
    {
        // if (v[i] == 0) continue;
        // dp[i] = max(dp[i],v[i]);
        for (int j = i + i; j <= n; j += i)
        {
            dp[j] += v[i];
        }
    }
    cout << *max_element(begin(dp),end(dp)) << endl;
}

int main()
{ 
	IOS;
	int T;
	cin >> T;
	while(T--) solve();
	return 0;
}
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
//     vector<int> v(n+1);
//     for (int i = 1; i <= n; i++)
//     {
//         int a;
//         cin >> a;
//         if (a <= n) v[a]++;
//     }    
//     vector<int> dp(n+1);
//     for (int i = 1; i <= n; i++)
//     {
//         dp[i] = v[i];
//     }
//     // for (int i = 1; i <= n; i++)
//     // {
//     //     cout << i << ' ';
//     // }
//     // cout << endl;  
//     // for (int i = 1; i <= n; i++)
//     // {
//     //     cout << v[i] << ' ';
//     // }
//     // cout << endl;
//     // cout << endl;
//     for (int i = 1; i <= n; i++)
//     {  
//         if (v[i] == 0) continue;   
//         dp[i] = max(dp[i],v[i]);
//         for (int j = i + i; j <= n; j += i)
//         {
//             // dp[j] = max({dp[j],v[i],dp[j-i] + v[i]});
//             // dp[j] = max(dp[j],dp[i] + v[j]);
//             dp[j] += v[i];
//         }
//         // for (int i = 1; i <= n; i++)
//         // {
//         //     cout << dp[i] << ' ';
//         // }
//         // cout << endl;
//     }
//     cout << *max_element(begin(dp)+1,end(dp)) << endl;
//     // cout << endl;
// }

// int main()
// {
// 	IOS;
// 	int T;
// 	cin >> T;
// 	while(T--) solve();
// 	return 0;
// }