// all binary numbers within the given limit.
#include <iostream>
using namespace std;

int binaryTranslator(int num){
    int result=0, remainder, pow=1;
    while(num > 0){
        remainder = num % 2;
        num /=2;
        result += remainder*pow;
        pow*=10;
    }
    return result;
}
int main(){
    int start, end;
    cout << "Enter the range: ";
    cin >> start >> end;
    cout << "Binary series between "<< start<< " and "<< end<< endl;
    for(int i=start; i<end; i++){
        cout << binaryTranslator(i)<<"\n";
    }
    return 0;
}