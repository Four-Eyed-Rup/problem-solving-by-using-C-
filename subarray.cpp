// all substrings in an array using BRUTE FORCE approach

#include <iostream>
using namespace std;

void subarray(int arr[], int* size) {
    for (int start = 0; start < *size; start++) {
        for (int end = start; end < *size; end++) {
            for (int i = start; i <= end; i++) {
                cout << arr[i] ;
            }
            cout << " ";
        }
        cout << endl;
    }
}

int main() {
    int size;
    cout << "Enter array size: ";
    cin >> size;
    
    int arr[size]; 
    cout << "\nEnter array elements: \n";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    
    cout << "\nSubarrays:\n";
    subarray(arr, &size);
    return 0;
}
