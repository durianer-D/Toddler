#include<iostream>
#include<cstring>
using namespace std;
int weight[50];
int dp[20050];
int main(){
    int V,n;
    cin >>V>>n;
    for(int i=0;i<n;i++){
        cin>>weight[i];
    }
    for(int i=0;i<n;i++){
        for(int j=V;j>=weight[i];j--){
            dp[j] = max(dp[j], dp[j-weight[i]]+weight[i]);
        }
    }
    cout<<V-dp[V]<<endl;
    return 0;
}