#include<iostream>
#include<cmath>
using namespace std;
int dp[10050];
int vol[10050], cost[10050];
int _max(int a, int b){
    if(a>b){
        return a;
    }
    return b;
}
int main(){
    int v,n,c,i,j;
    cin>>v>>n>>c;
    for(i=0;i<n;i++){
        cin>>vol[i]>>cost[i];
    }
    for(i=0;i<n;i++){
        for(j=c;j>=cost[i];j--){
            dp[j] = _max(dp[j], dp[j-cost[i]] + vol[i]);
        }
    }
    for(i=0;i<=c;i++){
        if(dp[i]>=v){
            break;
        }
    }
    if(i>c) cout<<"Impossible"<<endl;
    else cout<<c-i<<endl;
    return 0;
}