#include<iostream>
using namespace std;
int dp1[155];
int dp2[155];
int prob[15];
int task[15];
int score[15];
int main(){
    int n,m,k,r;
    cin>>n>>m>>k>>r;
    int i,j;
    int sum_prob = 0;
    int sum_task = 0;
    for(i=0;i<n;i++){
        cin>>prob[i];
        sum_prob += prob[i];
    }
    for(i=0;i<m;i++){
        cin>>task[i];
        sum_task += task[i];
    }
    for(i=0;i<m;i++){
        cin>>score[i];
    }
    for(i=0;i<m;i++){
        for(j=r;j>=task[i];j--){
            dp1[j] = max(dp1[j], dp1[j-task[i]] + score[i]);
        }
    }
    for(i=0;i<=r;i++){
        if(dp1[i] >= k){
            break;
        }
    }
    r -= i;
    for(i=0;i<n;i++){
        for(j=r;j>=prob[i];j--){
            dp2[j] = max(dp2[j], dp2[j-prob[i]] + 1);
        }
    }
    cout<<dp2[r]<<endl;
    return 0;
}