Cho số nguyên dương N, hãy đếm xem trong đoạn từ 0 tới N có bao nhiêu số nguyên tố.

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
5
39
68
26
87
6
Output 01
Copy
12
19
9
23

#include <bits/stdc++.h>
using namespace std;
const int MAX_N = 1000005;
int dd[MAX_N], dp[MAX_N];
int mod = 1e9+7;

void sang() {
    for(int i=2;i<MAX_N ;i++){
        dd[i] = 1 ;
    }
    for (int i = 1; i * i <= MAX_N; i++) {
        if (dd[i]) {
            for (int j = i * i; j < MAX_N; j += i) {
                dd[j] = 0;
            }
        }
    }
}

int main() {
    sang();
    for (int i = 1; i < MAX_N; i++) {
        if(dd[i]) dp[i] = dp[i-1] +1;
        else dp[i] = dp[i-1];
    }

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << dp[n] << endl;
    }

    return 0;
}
