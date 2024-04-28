#include<iostream>
#include<vector>
using namespace std;

int noOfStair(int n){
    if (n==0) return 0;
    if (n==1) return 1;
    if (n==2) return 2;

    return noOfStair(n-1) + noOfStair(n-2);
}

int main(){
    int n;
    cin>>n;

    int ans = noOfStair(n);

    cout<<ans<<endl;
    return 0;
}