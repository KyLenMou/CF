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
//     vector<int> a(32);
//     for (int i = 0; i <= 31; i++) {
//         a[i] = (n & 1);
//         n >>= 1;
//     }
//     int p = 0, last = 0;
//     while (p <= 31) {
//         int cur = p;
//         while (cur <= 31 && a[cur] == 1) cur++;
//         if (cur - p >= 2) {
//             a[p++] = -1;
//             while (p <= 31 && p < cur) {
//                 a[p] = 0;
//                 p++;
//             }
//             a[p] = 1;
//         }
//         p++;
//         while (p <= 31 && a[p] == 0) p++;
//     }
//     for (int j = 1; j <= 31; j++) {
//         for (int i = 1; i <= 31; i++) {
//             if (a[i-1] == 1 && a[i] == -1) {
//                 a[i] = 0;
//                 a[i-1] = -1;
//             }
//         }
//         for (int i = 1; i <= 31; i++) {
//             if (a[i-1] == 1 && a[i] == 1) {
//                 a[i-1] = -1;
//                 a[i] = 0;
//                 a[i+1] = 1;
//             }
//         }
//     }
//     cout << 32 << endl;
//     for (int i = 0; i <= 31; i++) {
//         cout << a[i] << ' ';
//     }
//     cout << endl;
// }
// // 1 1 0 1 0  1  1
// // 1 2 4 8 16 32 64
// int32_t main() {
//     ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
//     int T; cin >> T; while(T--) KyLen();
//     return 0;
// } 
// // 1 1 1 0 0 0 0 0 0 1 0 1 0 0  1 1  0 1 0  1 1 0 0  1 1 1  0 1 1 1 0 0 
// //-1 0 0 1 0 0 0 0 0 1 0 1 0 0 -1 0 -1 0 1 -1 0 1 0 -1 0 0 -1 0 0 0 1 0
// // 
// // /* \/\ \         /\ \                        
// // \ \ \/'/'  __  __\ \ \         __    ___     
// //  \ \ , <  /\ \/\ \\ \ \  __  /'__`\/' _ `\   
// //   \ \ \\`\\ \ \_\ \\ \ \L\ \/\  __//\ \/\ \  
// //    \ \_\ \_\/`____ \\ \____/\ \____\ \_\ \_\ 
// //     \/_/\/_/`/___/> \\/___/  \/____/\/_/\/_/ 
// //                /\___/                        
// //        ___ ___ \/__/      qq: 2729269812     
// //      /' __` __`\       email: kkkylen@qq.com 
// //      /\ \/\ \/\ \    ___   __  __            
// //      \ \ \ \ \ \ \  / __`\/\ \/\ \           
// //       \ \ \ \ \ \ \/\ \L\ \ \ \_\ \          
// //        \ \ \ \ \ \ \ \____/\ \____/          
// //         \/_/\/_/\/_/\/___/  \/__*/           
// // #include<bits/stdc++.h>
// // #define x first
// // #define y second
// // #define endl '\n'
// // #define int long long
// // using namespace std;

// // void KyLen(int n) {
// //     // int n;
// //     // cin >> n;
// //     vector<int> a(32);
// //     for (int i = 0; i <= 31; i++) {
// //         a[i] = (n & 1);
// //         n >>= 1;
// //         // cout << a[i] << ' ';
// //     }
// //     int p = 0, last = 0;
// //     while (p <= 31) {
// //         int cur = p;
// //         while (cur <= 31 && a[cur] == 1) cur++;
// //         if (cur - p >= 2) {
// //             a[p++] = -1;
// //             while (p <= 31 && p < cur) {
// //                 a[p] = 0;
// //                 p++;
// //             }
// //             a[p] = 1;
// //         }
// //         p++;
// //         while (p <= 31 && a[p] == 0) p++;
// //     }
// //     for (int i = 1; i <= 31; i++) {
// //         if (a[i-1] == 1 && a[i] == -1) {
// //             a[i] = 0;
// //             a[i-1] = -1;
// //         }
// //     }
// //     for (int i = 1; i <= 31; i++) {
// //         if (a[i-1] == 1 && a[i] == 1) {
// //             a[i-1] = -1;
// //             a[i] = 0;
// //             a[i+1] = 1;
// //         }
// //     }
// //     cout << 32 << endl;
// //     for (int i = 0; i <= 31; i++) {
// //         cout << a[i] << ' ';
// //     }
// //     cout << endl;
// // }

// // int32_t main() {
// //     ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
// //     // int T; cin >> T; while(T--) KyLen();
// //     int n;
// //     cin >> n;
// //     for (int i = 1e9; i <= 1e9 + 1000; i++) {
// //         cout << i << " : " << endl;
// //         KyLen(i);
// //     }
// //     return 0;
// // } 
// // // 
// Problem: B. Binary Colouring
// Contest: Codeforces - Codeforces Round 948 (Div. 2)
// URL: https://codeforces.com/contest/1977/problem/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)


#include<bits/stdc++.h>
using namespace std;
#define x first
#define y second
#define int long long
const int P=1e9+7;
const int N=2e5+5;
const int mod=998244353;



void solve(){
	int x;cin>>x;
	int bit_cnt=0;
	int p=x;
	while(x){
		bit_cnt++;
		x>>=1;
	}
	int n=bit_cnt+1;
	vector<int> a(n);
	// a[n-1]=1;
	for(int i=0;i<bit_cnt;i++){
		if((1<<i)&p){
			a[i]=1;
		}
	}
	for(int i=0;i<bit_cnt;i++){
		if(a[i]==1){
			if(a[i+1]==0){
				continue;
			}
		}
		if(a[i]==1){
			a[i]=-1;
			++i;
			while(a[i]){
				a[i]=0;
				i++;
			}
			i--;
			a[i+1]=1;
		}
			
		
	}
	// a[0]--;
	// for(int i=0;i<n;i++){
		// if(a[i]==-1){
			// a[i]=0;
		// }else{
			// a[i]--;
			// break;
		// }
	// }
	cout<<n<<endl;
	for(int i=0;i<n;i++){
		cout<<a[i]<<" \n"[i==n-1];
	}
	// int sum=0;
	// for(int i=0;i<n;i++){
		// sum+=(a[i]*(1<<i));
	// }
	// cout<<"sum:"<<sum<<endl;
	
	
}




int32_t main(){
	// cout.precision(10); cout.setf(ios::fixed);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	int T;cin>>T;
	while(T--){
		solve();
	}
}