#include <iostream>
using namespace std;

int main(){
    int T;
    cin >> T;

    while(T-- != 0){
        int N, K;
        cin >> N;
        cin >> K;

        if(N == K){
            cout << N - K << endl;
        }
        else if(N < K){
            cout << N << endl;
        }
        else if(N >= K && K != 0){
            cout << N % K << endl;
        }
    }
}