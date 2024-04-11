#include<unordered_map>
#include<vector>
void printIntersection(int arr1[], int arr2[], int n, int m) {
    unordered_map<int, int> hashMap;

    for (int i = 0; i < n; i++) {
        hashMap[arr1[i]]++;
    }

    for (int i = 0; i < m; i++) {
        if (hashMap.count(arr2[i])>0 && hashMap[arr2[i]]>0) {
            cout << arr2[i] << endl;
            hashMap[arr2[i]]--;
        }
    }
}