Cho dãy số Fibonacci với F[0] = 0, F[1] = 1, F[n] = F[n - 1] + F[n - 2] với n >= 2.

Hãy tính F[n] chia dư cho 10^9 + 7.

Đầu vào
Dòng 1 là số bộ test T

T dòng tiếp theo mỗi dòng là 1 số nguyên không âm N

Giới hạn
1<=T<=10000

0<=N<=10^6

Đầu ra
Đưa ra kết quả của mỗi test trên 1 dòng

Ví dụ :
Input 01
Copy
6
5
13
10
14
8
11
Output 01
Copy
5
233
55
377
21
89

#include<bits/stdc++.h>
using namespace std;

int dp[1000005];
int mod = 1e9+7;
int fibo(int n) {

    if(n == 0) return 0;
    if(n == 1) return 1;
    if(dp[n]) return dp[n];
    dp[n] = (fibo(n-1) + fibo(n-2)) % mod;
    return dp[n];
}
int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        cout<<fibo(n)<<endl;
    }
    return 0;
}
