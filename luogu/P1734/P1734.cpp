#include<iostream>
#define ll long long
using namespace std;
ll cost[1005];
ll dp[1005];
int main(){
    int n;
    cin>>n;
    int i,j;
    int sum=0;
    for(i=1;i<=n;i++){
        sum=0;
        for(j=1;j*j<=i;j++){
            if(i%j==0 && i!=j){
                sum+=j;
                if(i/j!=j && i/j!=i){
                    sum+=i/j;
                }
            }
        }
        cost[i] = sum;
    }
    for(i=1;i<=n;i++){
        for(j=n;j>=i;j--){
            dp[j] = max(dp[j], dp[j-i] + cost[i]);
        }
    }
    cout<<dp[n]<<endl;
    return 0;
}