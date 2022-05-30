#include<cstdio>
#include<cmath>
#include<iostream>
#include<cstring>
using namespace std;

int T,M;
struct Medical{
    int time, value;
};
Medical a[105];
int dp[1050][105];
int main(){
    cin >> T >> M;
    int i,j;
    for(i=1;i<=M;i++){
        cin >> a[i].time >> a[i].value;
    }
    memset(dp, 0, sizeof(dp));
    int ans = 0;
    for(i=1;i<=T;i++){
        for(j=1;j<=M;j++){
            if(i-a[j].time>=0){
                dp[i][j] = max(dp[i][j-1], dp[i-a[j].time][j-1] + a[j].value);
                ans = max(ans, dp[i][j]);
            }else{
                dp[i][j] = dp[i][j-1]; //分层的，所以这里要把上一层的信息复制过来
            }
        }
    }
    printf("%d\n", ans);
    return 0;
}

// #include<cstdio>
// #include<cmath>
// #include<iostream>
// #include<cstring>
// using namespace std;

// int T,M;
// struct Medical{
//     int time, value;
// };
// Medical a[105];
// int dp[105][1050];
// int main(){
//     cin >> T >> M;
//     int i,j;
//     for(i=1;i<=M;i++){
//         cin >> a[i].time >> a[i].value;
//     }
//     for(i=0;i<=M;i++){
//         dp[0][i] = 0;
//     }
//     int ans = 0;
//     for(i=1;i<=M;i++){
//         for(j=T;j>=0;j--){
//             if(j>=a[i].time){
//                 dp[i][j] = max(dp[i-1][j], dp[i-1][j-a[i].time] + a[i].value);
//                 ans = max(ans, dp[i][j]);
//             }
//             else{
//                 dp[i][j] = dp[i-1][j];
//             }
//         }
//     }
//     printf("%d\n", ans);
//     return 0;
// }