// Sum of all the digits in a number
#include <iostream>
using namespace std;

int main(){
    int number, result=0, digit;
    cout << "Enter a number: ";
    cin >> number;
    while(number != 0){
        digit = number % 10;
        result += digit;
        number /= 10;
    }
    cout << "Addition of all the digits is "<< result;
    return 0;
}
