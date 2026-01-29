#include <iostream>
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T-- != 0){
        int N, S;
        cin >> N;
        cin >> S;
        int ma = INT_MIN;
        if(N >= S){
            for(int i = 0; i < S + 1; i++){
                for(int j = S; j >= 0; j--){
                    if(i + j == S){
                        ma = max(ma, abs(i - j));
                    }
                }
            }

            cout << ma << endl;
        }
        else{
            for(int i = 0; i < N + 1; i++){
                for(int j = N; j >= 0; j--){
                    if(i + j == S){
                        ma = max(ma, abs(i - j));
                    }
                }
            }
            cout << ma << endl;
        }

    }
}