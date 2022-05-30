#include<iostream>
#include<cmath>
using namespace std;
int dp[45005];
int weight[45005];
int main(){
    int i,j,H,N;
    cin>>H>>N;
    for(i=0;i<N;i++){
        cin>>weight[i];
    }
    for(i=0;i<N;i++){
        for(j=H;j>=weight[i];j--){
            dp[j] = max(dp[j], dp[j-weight[i]] + weight[i]);
        }
    }
    cout<<dp[H]<<endl;
    return 0;
}