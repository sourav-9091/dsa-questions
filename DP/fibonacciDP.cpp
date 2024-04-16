#include<iostream>
#include<vector>
using namespace std;

int fibonacciDp(int n, vector<int> &dp){
    if (n==0 || n==1) return n;
    if (dp[n] != -1) return dp[n];
    dp[n] = fibonacciDp(n-1, dp) + fibonacciDp(n-2, dp);
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