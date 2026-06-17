#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int matmedian(int r, int c, vector<vector<int>>& arr){

    int min = arr[0][0];
    int max = arr[0][c - 1];

    for(int i = 0; i < r; i++){
        if(min > arr[i][0]){
            min = arr[i][0];
        }
    }
    for(int i = 0; i < c; i++){
        if(max < arr[i][c - 1]){
            max = arr[i][c - 1];
        }
    }
    int medpos = (c*r)/2;
    while(min < max){
        int mid = (min + max)/2;
        int pos = 0;
        for(int i = 0; i < r; i++){
            pos += upper_bound(arr[i].begin(), arr[i].begin() + c, mid) - arr[i].begin();
        }
        if(pos <= medpos){
                min = mid + 1;
        }
        else{
                max = mid;
        }
    }
    return min;
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
    int ans = matmedian(r, c, arr);
    cout << "The median of the matrix is: " << ans << endl;

}