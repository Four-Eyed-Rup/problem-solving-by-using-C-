// palindrome number checking 
#include <iostream>
using namespace std;

int main(){
    int number, temp, digit, reverse=0;
    cout << "Enter a number: ";
    cin >> number;
    temp = number;
    while (number != 0){
        digit = number %10 ;
        reverse = reverse*10 + digit;
        number /= 10;
    }
    (temp == reverse)? (cout << "Palindrome"): (cout << "Not palindrome"); 
    return 0;
}