// number of palindrome number in a range
#include <iostream>
using namespace std;
int count = 0;
void palindrome(int x){
    int num=x, reverse=0, digit;
    int temp = num;
    while(num!=0){
        digit = num%10;
        reverse = reverse*10 +digit;
        num /=10;
    }
    if(temp == reverse){
     cout << "\n" <<reverse ;
     count ++;   
    }
}

int main(){
    int start, end;
    cout << "Enter the starting range: ";
    cin >> start;
    cout << "Enter the ending range: ";
    cin >> end;
    cout<< "All the palindrome numbers from "<< start<< " to "<<end;
    for(int i= start; i<end; i++){
        palindrome(i);
    }
    cout << "\nTotal number of palindrome number from "<<start<<" to "<<end<< " is "<< count;  
    return 0;
}