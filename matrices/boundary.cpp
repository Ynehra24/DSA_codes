#include <iostream>
#include <vector>
using namespace std;

vector<int> boundarytrav(int r, int c, vector<vector<int>>arr){
    vector<int>ans;
    if(r == 1 || c == 1){
        for(int i = 0; i < r; i++){
            for(int j = 0; j < c; j++){
                ans.push_back(arr[i][j]);
            }
        }
        return ans;
    }
    if (r == 1 && c == 1){
        ans.push_back(arr[0][0]);
    }
    if(r > 1 && c > 1){
        int r0 = 0;
        int rn = r - 1;
        int c0 = 0;
        int cn = c - 1;

        for(int i = c0; i <= cn; i++){ // 0 to n - 1
            ans.push_back(arr[r0][i]);
        }

        for(int i = r0 + 1; i <= rn; i++){ // 1 to m
            ans.push_back(arr[i][cn]);
        }

        for(int i = cn - 1; i >= c0; i--){ // n - 2 to 1
            ans.push_back(arr[rn][i]);
        }

        for(int i = rn - 1; i >= r0 + 1; i--){
            ans.push_back(arr[i][c0]);
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
    ans = boundarytrav(r, c, arr);
    cout << "Here is the final boundary traversal of the matrix: " << endl;
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
}