#include <iostream>
#include <vector>
using namespace std;
/*
    1    2    3    4 
    5    6    7    8
    9   10   11   12
    13  14   15   16
    1 2 3
    4 5 6
    7 8 9
    total number of times we have to iterate -> (r * c) / 2 -> 0 to (r * c) / 2 - 1 basically
*/
vector<int> spiralmat(int r, int c, vector<vector<int>>& arr){              
    int t = 0;
    int b = r - 1;
    int le = 0;
    int ri = c - 1;
    vector<int>ans;
    int num = (r * c)/2;
    for(int i = 0; i < num; i++){
        // first part, going from left to right in the top row
        for(int j = t; j <= ri; j++){
            ans.push_back(arr[t][j]);
        }
        if(t < r - 1){
            t++;
        }
        // second part, going from top to bottom in the right column
        for(int j = t; j <= b; j++){
            ans.push_back(arr[j][ri]);
        }
        if(ri > 0){
            ri--;
        }
        // third part, going from right to left in the bottom row
        for(int j = ri; j >= le; j--){
            ans.push_back(arr[b][j]);
        }
        if(b > 0){
            b--;
        }
        // fourth part, going back up from the bottom row
        for(int j = b; j >= t; j--){
            ans.push_back(arr[j][le]);
        }
        if(le < c - 1){
            le++;
        }
    }

    return ans;
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

    vector<int>ans = spiralmat(r, c, arr);
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}