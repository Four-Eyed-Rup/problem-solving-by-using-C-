// Decimal to binary
#include <iostream>
using namespace std;

int main(){
    int binary[64], num, i=0;
    cout << "Enter the number: ";
    cin >> num;
    while(num > 0){
        binary[i] = num % 2;
        num /=2;
        i++;
    }
    for(i=i-1; i>=0; i--){
        cout << binary[i];
    }
    return 0;
}