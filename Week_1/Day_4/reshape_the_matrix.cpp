#include<iostream>
#include<vector>        
using namespace std;
class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m = mat.size();
        int n = mat[0].size();

        if (m * n != r * c)
            return mat;

        vector<int> temp;

        for (auto row : mat) {
            for (int x : row) {
                temp.push_back(x);
            }
        }

        vector<vector<int>> ans(r, vector<int>(c));
        int k = 0;

        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                ans[i][j] = temp[k++];
            }
        }

        return ans;
    }
};