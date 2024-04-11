#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> v = {3, 2, 1};
    vector<int> s = {};

    for(int i=0; i<v.size(); i++){
        for(int j=1; j<v.size(); j++){
            int sum = 0;
            for(int k=i; k<=j; k++){
                sum += v[k];
            }
            s.push_back(sum);
        }
    }
    sort(s.begin(), s.end(), greater<int>());

    cout<<s[1];

    return 0;
}