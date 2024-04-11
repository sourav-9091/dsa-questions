#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

vector<int> removeDuplicates(vector<int> a, int size){
    vector<int> output;
    unordered_map<int,bool> seen;

    for(int i=0; i<size; i++){
        if (seen.count(a[i]) == 0){
            seen[a[i]] = true;
            output.push_back(a[i]);
        }else{
            continue;
        }
    } 

    return output;
}

int main(){

    vector<int> a = {1, 1, 2, 3, 3, 4, 5};

    vector<int> answer = removeDuplicates(a, 7);

    for(int i=0; i<answer.size(); i++){
        cout<<answer[i]<<" ";
    }
    return 0;
}