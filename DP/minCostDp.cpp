#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> cost = {10, 15, 20};
    vector<int> dp(4, -1);

    cout<<minCost(cost, dp)<<endl;
    return 0;
}