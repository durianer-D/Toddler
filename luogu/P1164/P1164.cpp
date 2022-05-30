#include<iostream>
#include<cstring>
using namespace std;
int dp[105][10005];
int weight[10050];
int main(){
    int N,M;
    cin>>N>>M;
    for(int i=1;i<=N;i++){
        cin>>weight[i];
    }
    memset(dp, -1,sizeof(dp));
    dp[0][0] = 1;
    for(int i=1;i<=N;i++){
        for(int j=0;j<=M;j++){
            if(j>=weight[i]){
                if(dp[i-1][j]!=-1){
                    if(dp[i-1][j-weight[i]]!=-1){
                        dp[i][j] = dp[i-1][j] + dp[i-1][j-weight[i]];
                    }
                    else{
                        dp[i][j] = dp[i-1][j];
                    }
                }
                else{
                    if(dp[i-1][j-weight[i]]!=-1){
                        dp[i][j] = dp[i-1][j-weight[i]];
                    }
                }
            }
            else{
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    cout << max(0, dp[N][M]) << endl;
    return 0;
}