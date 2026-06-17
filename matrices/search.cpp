#include <iostream>
#include <vector>
using namespace std;

void searchmat(int r, int c, int target, vector<vector<int>>& arr){
    vector<int>ans(2, -1);
    int f = 0;
    int s = c - 1;

    while(f < r && s >= 0){
        if(target == arr[f][s]){
            ans[0] = f;
            ans[1] = s;
            break;
        }
        else if(target > arr[f][s]){
            f++;
        }
        else{
            s--;
        }
    }

    cout << ans[0] << " " << ans[1] << endl;
}

int main(){
    int r, c, target;
    cout << "Please enter the values of r and c: " << endl;
    cin >> r >> c;
    vector<vector<int>>arr(r, vector<int>(c));
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cin >> arr[i][j];
        }
    }
    cout << "Please enter the target element: " << endl;
    cin >> target;
    searchmat(r, c, target, arr);
}