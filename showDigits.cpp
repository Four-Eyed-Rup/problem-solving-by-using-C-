// show all available digits in the number
#include <iostream>
using namespace std;

int main(){
    int number, digit;
    cout << "Enter a number: ";
    cin >> number;
    while(number != 0){
        digit = number % 10;
        cout << digit << "\n";
        number /= 10;
    }
    return 0;
}
