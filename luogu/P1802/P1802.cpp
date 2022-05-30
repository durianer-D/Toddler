#include<iostream>
#define ll long long
using namespace std;
ll lose[1030], win[1030], use[1030], dp[1030];
int main(){
    int n,x;
    cin>>n>>x;
    int i,j;
    for(i=0;i<n;i++){
        cin>>lose[i]>>win[i]>>use[i];
    }
    for(i=0;i<n;i++){
        for(j=x;j>=0;j--){
            if(j>=use[i]){
                dp[j] = max(dp[j]+lose[i], dp[j-use[i]]+win[i]);
            }
            else{
                dp[j] = dp[j]+lose[i];
            }
        }
    }
    cout<<dp[x]*5<<endl;
    return 0;
}
