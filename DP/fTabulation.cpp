#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> dp(n+1);

    dp[0] = 0;
    dp[1] = 1;

    for(int i=2; i<n; i++){
        dp[i] = dp[i-2] + dp[i-1];
    }

    cout<<dp[6]<<endl;
    return 0;
}