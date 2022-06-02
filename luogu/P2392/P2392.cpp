#include<iostream>
using namespace std;
int dp[1200];
int a[1200];
int main(){
    int s[4];
    int i,j,k;
    int sum=0;
    cin>>s[0]>>s[1]>>s[2]>>s[3];
    int ans=0;
    for(k=0;k<4;k++){
        sum=0;
        for(i=0;i<s[k];i++){
            cin>>a[i];
            sum+=a[i];
        }
        int sum1 = sum/2;
        for(i=0;i<=sum1;i++){
            dp[i] = 0;
        }
        for(i=0;i<s[k];i++){
            for(j=sum1;j>=a[i];j--){
                dp[j] = max(dp[j], dp[j-a[i]] + a[i]);
            }
        }
        ans += max(dp[sum1], sum - dp[sum1]);
    }
    cout<<ans<<endl;
    return 0;
}