#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll dp[1000000];
ll mod = 1e9+7;
ll gt(int n ){
    if(n==0) return 1;
    if(dp[n] ) return dp[n];
    return dp[n] = (n*gt(n-1) ) %mod;

}
int main(){
    int t;
    cin>>t;
    for(int i =0; i<t; i++ ){
        int n;
        cin>>n;
        cout<<gt(n)<<endl;
    }
}
