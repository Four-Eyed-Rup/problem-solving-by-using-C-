// HCF without using recurtion
#include <iostream>
using namespace std;

int main(){
    int a, b;
    cout<< "Enter two numbers: ";
    cin >> a >> b;
    while (a != b){
        if(a > b)
            a = a-b;
        else    
            b = b-a;
    }
    cout << "HCF: " << a;
    return 0;
}