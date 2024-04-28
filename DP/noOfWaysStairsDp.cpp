#include<iostream>
#include<vector>
using namespace std;

int noOfStair(int n, vector<int> &dp){
    if (n==0) return 0;
    if (n==1) return 1;
    if (n==2) return 2;

    if (dp[n] != -1) return dp[n];

    dp[n] = noOfStair(n-1, dp) + noOfStair(n-2, dp);
    return dp[n];
}

int main(){
    int n;
    cin>>n;

    vector<int> dp(n+1, -1);

    int ans = noOfStair(n, dp);

    cout<<ans<<endl;
    return 0;
}