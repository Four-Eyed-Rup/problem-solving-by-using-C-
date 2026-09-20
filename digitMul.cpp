// multiplicaton of al the digits that are present in a number
#include <iostream>
using namespace std;

int main(){
    int number, digit, result=1;
    cout << "Enter the number: ";
    cin >> number;
    while(number != 0){
        digit = number % 10;
        result*=digit;
        number /= 10;
    }
    cout << "Product of all the digits is "<< result;
    return 0;
}