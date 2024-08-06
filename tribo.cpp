#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int dp[1000000];
ll mod = 1e9+7;
int  tribo(int n ){
    if(n==0) return 0;
    if(n==1) return 0;
    if(n==2) return 1;
    if(dp[n] ) return dp[n];
      dp[n] = (tribo(n-1) + tribo(n-2)+tribo(n-3))%mod;
      return dp[n] %mod ;

}
int main(){
    int t;
    cin>>t;
    for(int i =0; i<t; i++ ){
        int n;
        cin>>n;
        cout<<tribo(n)<<endl;
    }
}
