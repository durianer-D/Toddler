#include<iostream>
using namespace std;

int dp[50050];
int v[50050];
int main(){
    int i,j,H,C;
    cin>>H>>C;
    for(i=0;i<C;i++){
        cin>>v[i];
    }
    int mm = 0;
    for(i=0;i<C;i++){
        for(j=H;j>=v[i];j--){
            dp[j] = max(dp[j], dp[j-v[i]]+v[i]);
        }
    }
    cout<<dp[H]<<endl;
    return 0;
}