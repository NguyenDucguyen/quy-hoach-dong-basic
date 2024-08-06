Cho 2 số nguyên L, R, hãy đếm xem trong đoạn từ L tới R có bao nhiêu số nguyên tố.

Đầu vào
Dòng 1 là số bộ test T

T dòng tiếp theo mỗi dòng là 2 số nguyên không âm L, R

Giới hạn
1<=T<=10000

0<=L<=R<=10^6

Đầu ra
Đưa ra kết quả của mỗi test trên 1 dòng

Ví dụ :
Input 01
Copy
5
3 19
4 65
4 44
1 17
1 7
Output 01
Copy
7
16
12
7
4


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
    while (t--){
        int l ,r;
        cin>>l>>r;
        cout << dp[r] - dp[l-1] << endl;
    }

    return 0;
}
