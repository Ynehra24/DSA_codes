#include <iostream>
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T-- != 0){
        int A, B;
        cin >> A;
        cin >> B;

        int X;
        cin >> X;

        cout << (abs(B - A)/X) << endl;
    }
    
}