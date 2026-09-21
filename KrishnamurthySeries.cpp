// all krishnamurthy numbers between given range.
#include <iostream>
using namespace std;
int count = 0;

int factorial(int digit){
    int fact=1;
    if(digit != 0){
        while(digit != 0){
            fact*=digit;
            digit--;
        }
        return fact;
    }
    else
        return 0;
}
void krishnamurthy(int* x, int* y){
    int digit, result=0, num;
    for(int i = *x; i< *y; i++){
        result=0;
        num = i;
        while(num != 0){
            digit = num%10;
            result += factorial(digit);
            num /= 10; 
        }
        if(result == i){
            count++;
            cout << "\n"<< result; 
        }
    }
}
int main(){
    int start, end;
    cout << "Enter the starting range: ";
    cin >> start;
    cout << "Enter the ending range: ";
    cin >> end;
    cout << "All the krishnamurthy numbers between "<< start<< " to " << end;
    krishnamurthy(&start, &end);
    cout<< "\nTotal number of krishnamurthy number between "<<start<<" to "<<end<<" is "<< count;
    return 0;
}