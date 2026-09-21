// print a number in a reverse order (not palindrome) ++
#include <iostream>
using namespace std;

int main(){
    int number, digit;
    cout<< "Enter a number: ";
    cin >> number;
    while(number != 0){
        digit = number % 10;
        cout << digit;
        number /= 10;
    } 
    return 0;
}