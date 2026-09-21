// armstrong number
#include <iostream>
#include <cmath>
using namespace std;
int totaldigit = 0;

void digitCount(int x){
    int num = x, digit;
    while(num !=0){ 
        totaldigit++;
        num /= 10;
    }
}
int factorial(int x){
    int num =x;
    return round(pow(num, totaldigit));
}
int armstrong(int x){
    int num = x, digit, result=0;
    while(num !=0){
        digit = num % 10;
        result += factorial(digit); 
        num /= 10;
    }
    return result;
}
int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;
    digitCount(num);
    int x = armstrong(num);
    if(num == x)
        cout<< num << " is a armstrong number";
    else 
        cout << num << " is not a armstrong number";
    return 0;
}