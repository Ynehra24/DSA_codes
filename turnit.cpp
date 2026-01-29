#include <iostream>
using namespace std;

int main(){

    int T;
    cin >> T;
    while(T-- != 0){
        int U, V, A, S;
        cin >> U;
        cin >> V;
        cin >> A;
        cin >> S;

        int v = U * U  - (2 * A * S);
        if(V * V >= v){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}