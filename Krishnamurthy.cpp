// krishnamurthy number
#include <iostream>
using namespace std;

int factorial(int *x){
    int fact=1, num = *x;
    if(num != 0){
        while(num != 0){
        fact *= num;
        num--; 
    }
    return fact;
    }
    else
        return 0;
}
void krishnamurthy(int* x){
    int num, digit, result=0;
    num = *x;
    while(num != 0){
        digit = num%10;
        result += factorial(&digit);
        num /= 10; 
    }
    if(result ==  *x)
        cout<<"\n" << result<< " is a krishnamurthy number";
    else 
        cout<<"\n" << result<< " is not a krishnamurthy number";
}
int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;
    krishnamurthy(&num);
    return 0;
}