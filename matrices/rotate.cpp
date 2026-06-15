#include <iostream>
#include <vector>
using namespace std;

void rotatemat(int r, int c, vector<vector<int>>& arr){

     // reverse column elements
    for(int i = 0; i < c; i++){
        reverse(arr[i].begin(), arr[i].end());
    }

    // transpose
    for(int i = 0; i < r; i++){
        for(int j = i + 1; j < c; j++){
            swap(arr[i][j], arr[j][i]);
        }
    }
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

    rotatemat(r, c, arr);

    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;

}