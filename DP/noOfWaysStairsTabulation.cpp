#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a;
    cin>>a;

    vector<int> dp(n+1);

    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 2;

    for(int i=3; i<n; i++){
        dp[i] = dp[i-1] + dp[i-2];
    }

    cout<<dp[a]<<endl;
    return 0;
}