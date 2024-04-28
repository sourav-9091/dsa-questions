#include<iostream>
#include<vector>
using namespace std;

int fact(int val, vector<int> &dp){
    if (val == 0 || val == 1) return val;
    if (dp[val] != -1) return dp[val];
    dp[val] = fact(val-1, dp) + fact(val-2, dp);
    return dp[val];
}

int main() {
    int n;
    cin>>n;
    vector<int> dp(n+1, -1);

    int ans = fact(6, dp);

    cout<<ans<<endl;
    return 0;
}