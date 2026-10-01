// Binary to decimal
#include <iostream>
using namespace std;

int decimalGenerator(int* num){
    int result=0, remainder, pow=1;
    while(*num != 0){
        remainder = *num%10;
        *num /= 10;
        result += remainder*pow;
        pow *= 2;
    }
    return result;
}
int main(){
    int num;
    cout << "Enter a binary number: ";
    cin >> num;
    cout << decimalGenerator(&num);
    return 0;
}