// Ayush Bhardwaj
// Date : 06-03-23
#include <iostream>
using namespace std;
 
void countingSort(int arr[], int n, int exp) {
    int output[n];
    int count[10] = {0};

    for (int i = 0; i < n; i++)
        count[(arr[i] / exp) % 10]++;
 
    for (int i = 1; i < 10; i++)
        count[i] += count[i - 1];
 
    for (int i = n - 1; i >= 0; i--) {
        output[count[(arr[i] / exp) % 10] - 1] = arr[i];
        count[(arr[i] / exp) % 10]--;
    }
 
    for (int i = 0; i < n; i++)
        arr[i] = output[i];
}
 
void radixSort(int arr[], int n) {
    int m = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > m)
            m = arr[i];
    }
 
    for (int exp = 1; m / exp > 0; exp *= 10)
        countingSort(arr, n, exp);
}
 
int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " integers:\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    radixSort(arr, n);
    cout << "Sorted array:\n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}
