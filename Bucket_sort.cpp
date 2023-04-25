// Ayush Bhardwaj
// Date 06-03-23
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void bucketSort(float arr[], int n) {
    vector<float> bucket[n];
    
    for (int i = 0; i < n; i++) {
        int bucketIndex = n * arr[i];
        bucket[bucketIndex].push_back(arr[i]);
    }
    
    for (int i = 0; i < n; i++) {
        sort(bucket[i].begin(), bucket[i].end());
    }
    
    int index = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < bucket[i].size(); j++) {
            arr[index++] = bucket[i][j];
        }
    }
}

int main() {
    float arr[] = {0.1, 0.4, 0.7, 0.3, 0.2, 0.9, 0.6, 0.8, 0.5};
    int n = sizeof(arr) / sizeof(arr[0]);

    bucketSort(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
