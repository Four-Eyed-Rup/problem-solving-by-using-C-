#include <iostream>
using namespace std;

class pattern {
public:
    int row;
    pattern(int x) {
        row = x;
    }

    void patternDisplay(){
        int bit = 1;
        for(int i = 0; i<row; i++){
            for(int k=0; k<i+1; k++){
                cout <<  "    ";
            }
        for(int j=row; j>i; j--){
                cout << bit++ << "   ";
            }
            cout << '\n';
        }
    }
};
int main(){
    int row;
    cout << "Enter the number of rows: ";
    cin >> row;
    pattern p(row);
    p.patternDisplay();
    return 0;
}