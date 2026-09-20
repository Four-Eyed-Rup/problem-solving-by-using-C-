#include <iostream>
using namespace std;
#define arrSize(arr) (sizeof(arr)/sizeof(arr[0]))

int main(){
    int arr[] = {1,2,3,4,5,6};
    cout << arrSize(arr);
    return 0;
}