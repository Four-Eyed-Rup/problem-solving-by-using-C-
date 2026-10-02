// unique value detect in an array
#include <iostream>
using namespace std;

int uniqueval(int arr[], int size){
    int val=0;
    for(int i=0; i<size; i++){
        val ^= arr[i];  
    }
    return val;
}
int main(){
    int arr[] = {1,4,7,3,7,2,3,1,4};
     int size = sizeof(arr)/sizeof(arr[9]);
    cout << uniqueval(arr, size);
    return 0;
}