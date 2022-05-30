#include<iostream>
using namespace std;
int dp[30005];
int value[30], cost[30];
int main(){
    int N,M;
    cin >> N >> M;
    for(int i=0;i<M;i++){
        cin >> cost[i] >> value[i];
    }
    for(int i=0;i<M;i++){
        for(int j=N;j>=cost[i];j--){
            dp[j] = max(dp[j], dp[j-cost[i]]+value[i]*cost[i]);
        }
    }
    cout << dp[N] << endl;
    return 0;
}