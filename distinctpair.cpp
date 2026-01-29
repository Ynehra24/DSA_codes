#include <iostream>
#include <set>
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T-- != 0){
        int L, R;
        cin >> L;
        cin >> R;

        // 3, 4 
        if(R == L){
            cout << R - L + 1 << endl;
        }
        else if (L < R){
            cout << R - L + 2 << endl;
        }
    }
}