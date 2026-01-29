#include <iostream>
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T-- != 0){
        int D, L, R;
        cin >> D;
        cin >> L;
        cin >> R;

        if(D < L){
            cout << "too early!" << endl;
        }
        else if(D > R){
            cout << "too late!" << endl;
        }
        else{
            cout << "take medicines now" << endl;
        }
    }
}