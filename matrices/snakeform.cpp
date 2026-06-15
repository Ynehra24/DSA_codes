#include <iostream>
#include <vector>
using namespace std;

vector<int> snakeform(int r, int c, vector<vector<int>>arr){
    vector<int>ans;
    for(int i = 0; i < r; i++){
        if(i % 2 == 0){
            for(int j = 0; j < c; j++){
                ans.push_back(arr[i][j]);
            }
        }
        else{
            for(int j = c - 1; j >= 0; j--){
                ans.push_back(arr[i][j]);
            }
        }
    }
    return ans;
}

int main(){

    int r, c;
    cout << "Please enter the values of r and c: " << endl;
    cin >> r >> c;
    vector<vector<int>>arr(r, vector<int>(c));
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cin >> arr[i][j];
        }
    }
    vector<int>ans;
    ans = snakeform(r, c, arr);
    cout << "Here is the final snake form of the matrix: " << endl;
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
}