#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
int n,m;
int w[3420],d[3420];
int dp[12888];
int main(){
    cin >> n >> m;
    int i,j;
    for(i=0;i<n;i++){
        cin >> w[i] >> d[i];
    }
    int ans=0;
    for(i=0;i<n;i++){
        for(j=m;j>=w[i];j--){
            dp[j] = max(dp[j], dp[j-w[i]] + d[i]);
            ans = max(ans, dp[j]);
        }
    }
    cout << ans << endl;
    return 0;
}