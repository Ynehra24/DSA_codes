#include <iostream>
#include <vector>
using namespace std;

void transposematrix(int r, int c, vector<vector<int>>& arr){
    for(int i = 0; i < r; i++){
        for(int j = i + 1; j < c; j++){
            swap(arr[i][j], arr[j][i]);
        }
    }

    return;
}

int main(){
    int r, c;
    cin >> r >> c;
    vector<vector<int>>arr(r, vector<int>(c));
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cin >> arr[i][j];
        }
    }

    transposematrix(r, c, arr);

    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;

}