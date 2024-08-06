
Cho số nguyên dương N, hãy tính tích các số nguyên tố trong đoạn từ 0 đến N. Khi N = 0 hoặc 1 thì đáp án là 0.

Đầu vào
Dòng 1 là số bộ test T

T dòng tiếp theo mỗi dòng là 1 số nguyên không âm N

Giới hạn
1<=T<=10000

0<=N<=10^6

Đầu ra
Đưa ra kết quả của mỗi test trên 1 dòng, vì kết quả quá lớn nên hãy chia dư cho 10^9 + 7.

Ví dụ :
Input 01
Copy
5
20
16
10
22
29
Output 01
Copy
9699690
30030
210
9699690
469693188

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAX_N = 1000005;
int dd[MAX_N];
int dp[MAX_N];
int mod = 1e9+7;

void sang() {
    for(int i=2;i<=MAX_N ;i++){
        dd[i] = 1 ;
    }
    for (int i = 2; i  <= 1e3; i++) {
        if (dd[i]) {
            for (int j = i * i; j <=MAX_N; j += i) {
                dd[j] = 0;
            }
        }
    }
}

int main() {
    sang();
    dp[2] =2 ;
    for (int i = 3; i < MAX_N; i++) {
        if(dd[i]) dp[i] = (1ll * dp[i-1] *i) % mod;
        else dp[i] = dp[i-1];
    }

    int t;
    cin >> t;
    while (t--){
        int n;
        cin>>n;
        if(n==0 || n==1) cout<<"0";
        else cout<<dp[n]<<endl;
    }

    return 0;
}
