// all the armstrong numbers betwwen a given range
#include <iostream>
#include <cmath>
using namespace std;
int count=0;


int exponent(int x){
    int exp=0;
    while(x!=0){
        exp++;
        x /= 10;
    }
    return exp;
}
void armstrong(int* start, int* end){
    int digit, result=0;
    for(int i= *start; i< *end; i++){
        int temp = i; 
        int exp = exponent(temp);
        result = 0;
        while(temp != 0){
            
            digit = temp%10;
            result += round(pow(digit, exp));
            temp /= 10;
        }
        if(result == i){
            count++;
            cout << result<< "\n" ;
        }
    }
}
int main(){
    int start, end;
    cout << "Enter starting range: ";
    cin >> start;
    cout << "Enter ending range: ";
    cin >> end;
    cout << "All the armstrong numbers between " << start<< " to "<< end<< "\n";
    armstrong(&start, &end);
    cout << "\nTotal armstrong numbers is " << count;
    return 0;
}