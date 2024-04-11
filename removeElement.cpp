#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {4, 5};
    int val = 4;
    int size = nums.size();

    int k=0;
         for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == val) {
                k++;
                for (int j = i; j < nums.size() - 1; j++) {
                    cout<<j<<"  "<<j+1<<endl;
                    nums[j] = nums[j + 1];
                }
                if (i == 0) continue; 
                if (i != nums.size()-1)i--;
            }
        }

    cout<<size-k;
} 