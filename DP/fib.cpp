#include<iostream>
#include<vector>
using namespace std;

//IMPLEMENTED THROUGH BOTTOM UP APPROACH (TABULATION)

int fibonacciDp(int n, vector<int> &dp){
    if (n==0 || n==1){
        dp[n] = n;
    }

    for(int i=2; i<n; i++){
        dp[i] = dp[i-1] + dp[i-1];
    }

    return dp[n];
}

int main(){

    int n;
    cin >> n;

    vector<int> dp(n+1, -1);

    int ans = fibonacciDp(n, dp);
    cout << "Fibonacci(" << n << ") = " << ans << endl;

    return 0;
}