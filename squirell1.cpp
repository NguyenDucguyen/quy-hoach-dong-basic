Có N nhóm hạt ngũ cốc được đánh số từ 1 tới N mỗi nhóm sẽ có lượng hạt ngũ cốc là A[i] với 1<=i<=N, một con sóc đang ở vị trí nhóm hạt số 1. Nhiệm vụ của nó là tới được nhóm hạt thứ N, chi phí mỗi lần di chuyển từ nhóm hạt x sang nhóm hạt y là abs(A[x] - A[y]), mỗi lần di chuyển con sóc chỉ có thể di chuyển từ nhóm hạt i sang nhóm hạt i + 1 hoặc i + 2.

Nhiệm vụ của bạn là tính số lượng ngũ cốc tối thiểu mà con sóc này phải tiêu tốn để có thể đi đến nhóm hạt thứ N

Đầu vào
Dòng 1 N

Dòng 2 là N số là số hạt ngũ cốc của mỗi nhóm từ 1 tới N

Giới hạn
1<=N<=10^6

1<=A[i]<=10^9

Đầu ra
In ra số lượng ngũ cốc mà sóc đã mất làm chi phí di chuyển

Ví dụ :
Input 01
Copy
9
3 7 2 4 8 1 1 5 5
Output 01
Copy
10

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int n;
    cin>>n;
    int a[n+1];
    ll f[n+1] = {0};
    for(int i = 1; i<=n ;i++){
        cin>>a[i];
    }

    f[1] =0;
    for(int i= 2;i<=n;i++){
        f[i] = min (f[i-1] + abs(a[i]-a[i-1]),f[i-2] + abs (a[i]-a[i-2]));
    }
    cout<<f[n];
}
